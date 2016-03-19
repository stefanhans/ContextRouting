#ifndef CIP_H
#define CIP_H

#include "cip_global.h"

#include <QUuid>
#include <QHostAddress>
#include <QDateTime>
#include <QVector>

/*

   0                   1                   2                   3
   0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2
   +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
   |   request (1) |  profile (1)  |  version (1)  |  channel (1)  | |
   |                                                               | |
   |                            UUID (16)                          | |
   |                                                               | |
   |                                                               | fix
   |                          IP address (4)                       | |
   |            IP port (2)        |                               | |
   |                            time (8)                           | |
   |                               |   type (1)   |    size (1)    |---
   | ............................................................  | |
   | .............. additional data up to 255 bytes .............  | dyn
   | ............................................................  | |
   +---------------------------------------------------------------+


   0                   1                   2                   3
   0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2
   +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
   |   type (1)    |         root-CIC (2)          |   size (1)    | fix
   | ............................................................  | |
   | .............. additional data up to 510 bytes .............  | dyn
   | .............. i.e. up to 255 CIC-Bricks  ..................  | |
   | ............................................................  | |
   +---------------------------------------------------------------+


   0                   1                   2                   3
   0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2
   +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
   |   type (1)    |   size (1)    | ............................  | fix
   | ............................................................  | |
   | .......... additional data up to 255 bytes (size) ..........  | dyn
   | ............................................................  | |
   +---------------------------------------------------------------+

*/

class CIPSHARED_EXPORT CICBrick
{

public:
    CICBrick() :
    content(0),
    mask(0) {

    }

    quint8 getContent() const;
    void setContent(const quint8 &value);

    quint8 getMask() const;
    void setMask(const quint8 &value);

private:
    quint8 content;
    quint8 mask;

};

class CIPSHARED_EXPORT CIP
{
    Q_ENUMS(RequestService)

public:

    enum Service
    {
        RZV=0, Heartbeat=1, Offer=2, Request=3, TcpReply=4, UdpReply=5
    };

    enum Request
    {
        RequestRZV=0, RequestHeartbeat=1, RequestOffer=2, RequestRequest=2, RequestReply=3
    };

    enum Channel
    {
        CI_Matching=1
    };

    enum Ports
    {
        TCP=22365, UDP=22366
    };

    CIP() :
        byteArray(),
        service(RZV),
        request(RZV),
        profile(0),
        version(1),
        channel(0),
        uuid(QUuid::createUuid()),
        ipAddress("127.0.0.1"),
        ipPort(TCP),
        time(QDateTime::currentDateTime()),
        headType(0),
        headSize(0),
        headData(),
        ciType(0),
        rootCIC(),
        ciSize(0),
        CICBricks(),
        appType(0),
        appSize(0),
        appData()
    {
        initialize();
    }

    CIP(Service service) :
        byteArray(),
        service(service),
        request(RZV),
        profile(0),
        version(1),
        channel(0),
        uuid(QUuid::createUuid()),
        ipAddress("127.64.32.1"),
        ipPort(TCP),
        time(QDateTime::currentDateTime()),
        headType(0),
        headSize(0),
        headData(),
        ciType(0),
        rootCIC(),
        ciSize(0),
        CICBricks(),
        appType(0),
        appSize(0),
        appData()
    {
        initialize();
        pack();
            qDebug().noquote().nospace() << " Header: dateTime: " << time.toString();

    }

    QString getService() const;
    void setService(const Service &value);

    quint8 getRequest() const;
    void setRequest(const quint8 &value);
    QString requestToString(quint8 byte) const;

    quint8 getProfile() const;
    void setProfile(const quint8 &value);
    QString profileToString(quint8 byte) const;

    quint8 getVersion() const;
    void setVersion(const quint8 &value);
    QString versionToString(quint8 byte) const;

    quint8 getChannel() const;
    void setChannel(const quint8 &value);
    QString channelToString(quint8 byte) const;

    QUuid getUuid() const;
    void setUuid(const QUuid &value);
    QString uuidToString(QByteArray *bytes) const;

    QHostAddress getIpAddress() const;
    void setIpAddress(const QHostAddress &value);
    QString ipAddressToString(QByteArray *bytes) const;

    quint16 getIpPort() const;
    void setIpPort(const quint16 &value);
    QString ipPortToString(QByteArray *bytes) const;

    QDateTime getTime() const;
    void setTime(const QDateTime &value);
    QString timeToString(QByteArray *bytes) const;

    quint8 getHeadType() const;
    void setHeadType(const quint8 &value);

    quint8 getHeadSize() const;
    void setHeadSize(const quint8 &value);

    QVector<quint8> getHeadData() const;
    void setHeadData(const QVector<quint8> &value);

    quint8 getCiType() const;
    void setCiType(const quint8 &value);

    CICBrick getRootCIC() const;
    void setRootCIC(const CICBrick &value);

    quint8 getCiSize() const;
    void setCiSize(const quint8 &value);

    QVector<CICBrick> getCICBricks() const;
    void setCICBricks(const QVector<CICBrick> &value);

    quint8 getAppType() const;
    void setAppType(const quint8 &value);

    quint8 getAppSize() const;
    void setAppSize(const quint8 &value);

    QVector<quint8> getAppData() const;
    void setAppData(const QVector<quint8> &value);

    void pack();
    void unpack();


    QString toString(QString mode="all");

private:
    void initialize();

    QByteArray byteArray;

    Service service;

    /*
     * Header Data
     */

    quint8 request;
    quint8 profile;
    quint8 version;
    quint8 channel;

    QUuid uuid;

    QHostAddress ipAddress;
    quint16 ipPort;

    QDateTime time;

    quint8 headType;
    quint8 headSize;
    QVector<quint8> headData;


    /*
     * Contextinformation
     */

    quint8 ciType;
    CICBrick rootCIC;
    quint8 ciSize;
    QVector<CICBrick> CICBricks;


    /*
     * Application Data
     */

    quint8 appType;
    quint8 appSize;
    QVector<quint8> appData;

};

#endif // CIP_H