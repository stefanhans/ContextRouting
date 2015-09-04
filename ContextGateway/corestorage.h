/*
 * corestorage.h
 *
 *  Created on: Aug 22, 2015
 *      Author: stefan
 */

#ifndef SRC_CORESTORAGE_H_
#define SRC_CORESTORAGE_H_

#include "corepacket.h"

#include <vector>

/**
 * @brief PacketStorage
 *
 */
class PacketStorage {

public:

	static PacketStorage* GetInstance()
	{
		if (!instance) {
			instance = new PacketStorage();
		}
		return instance;
	}

//	vector<ContextPacket*> contextPackets[UCHAR_MAX];
//	vector<IpAddress*> ipAddresses;
//
//	// Check storage for matching offer
//	int requestContextStruct(ContextPacket *contextPacket);
//	int storeContextStruct(ContextPacket *contextPacket);
//
//	int insertContextStruct(ContextPacket *contextPacket);
//
//	void* receiveOfferThread(void* data);

private:

	static PacketStorage *instance;

	PacketStorage() {}
	PacketStorage(const PacketStorage&) {};
	PacketStorage& operator=(const PacketStorage&);

	~PacketStorage();

	/* global mutex for our program. assignment initializes it */
	pthread_mutex_t a_mutex = PTHREAD_MUTEX_INITIALIZER;

//	bool atomic_match(ContextPacket *offer, ContextPacket *request);
//
//	int handleOffer(ContextPacket *contextPacket);
//	int handleRequest(ContextPacket *contextPacket);


};

//PacketStorage* PacketStorage::instance = NULL;

#endif /* SRC_CORESTORAGE_H_ */
