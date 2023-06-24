#include "SimpleSocket.hpp"
//Default Constructor
HDE::SimpleSocket::SimpleSocket(int domain,int service,int protocol,int port,u_long interface){
     address.sin_family=domain;
     address.sin_port=htons(port);
     address.sin_addr.s_addr=htonl(interface);

     //establish socket
     sock = socket(domain,service,protocol);

            test_connection(connection);
     
}
//test connection virtual function
void HDE::SimpleSocket::test_connection(int item_to_test){
     //confirms that the socket or connections has been established 
     if(item_to_test<0){
          perror("Failed to connect");
          exit(EXIT_FAILURE);
     }
}
struct sockaddr_in HDE::SimpleSocket::get_address()
{
     return address;
};

int HDE::SimpleSocket::get_sock(){
     return sock;
}

int HDE::SimpleSocket::get_connection(){
     return connection;
}

void HDE::SimpleSocket::set_connection(int con){
     connection=con;
}