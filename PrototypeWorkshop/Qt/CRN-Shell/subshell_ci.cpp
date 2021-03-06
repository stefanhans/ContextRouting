#include "subshell_ci.h"

#include "subshell_crn.h"
#include "subshell_cip.h"

#include <QDebug>

/**
 * global variables
 */
extern QString prompt;
extern QStringList prompts;

extern QString my_global_string;


extern QTextStream outStream;
extern QTextStream stream;

extern QString line, outCmd;
extern QStringList command;


void Subshell_CI::runShell() {
    qDebug() << "Subshell_CI::runShell()" << endl;


    /**
    * Main loop
    */
    outStream << ::prompt << flush;
    do {

        line = stream.readLine();
        command = line.split(QRegExp("\\s+"));

        if(command.at(0)=="cip") {

            Subshell_CIP cip;

            ::prompt = ::prompts.at(2);
            cip.runShell();

            ::prompt = ::prompts.at(1);
            outStream << ::prompt << flush;
            continue;
        }

        if(command.at(0)=="crn") {

            Subshell_CRN crn;

            ::prompt = ::prompts.at(0);
            crn.runShell();

            ::prompt = ::prompts.at(1);
            outStream << ::prompt << flush;
            continue;
        }

        if(command.at(0)=="exit" || command.at(0)=="quit") {
            return;
        }

        // Unknown command
        if(command.length()>0 && line != "") {
            outStream << command.at(0) << " not found"  << endl;

            outStream << ::prompt << flush;
            continue;
        }

        // Prompt after return
        outStream << ::prompt << flush;

    } while (!line.isNull());


    return;
}

void Subshell_CI::executeCommand(QStringList command) {
    qDebug() << "Subshell_CI::executeCommand(" << command.join(" ") << ")" << endl;


//    QStringList command = in_command.split(QRegExp("\\s+"));
//    QTextStream outStream(stdout);
//    int argc = command.size();

//    outStream << "argc: " << argc << endl;


    return;
}

