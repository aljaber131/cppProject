

#ifndef BlindingSocket_hpp
#define BlindingSocket_hpp

#include<stdio.h>

#include "SimpleSocket.hpp"

namespace HDE
{
    class BindingSocket:public SimpleSocket
    {
    //contructor
    public:
        BindingSocket(int domain,int service,int protocol,int port,u_long interface);
        //virtual funtion from parent
        int connect_to_network(int sock,struct sockaddr_in address);
    };
    
}

#endif
