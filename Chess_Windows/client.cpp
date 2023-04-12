#include "client.h"

Client::Client(){}
Client::~Client(){}

Client::Client(QString ipAddres, int port)
    : ipAddres(ipAddres), port(port)
{

}

