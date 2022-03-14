include<unistd.h>
#include<stdio.h>
#include<sys/socket.h>
#include<stdlib.h>
#include<netinet/in.h>
#include<string.h>
#include<arpa/inet.h>

int main(int argc,char const *argv[])
{
	int client_sockfd,acc_sockfd;
	client_sockfd=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
	struct sockaddr_in server_address;
	

	int client_length=sizeof(client_address);
	char recv_data[100],send_data[100];
	server_address.sin_family=AF_INET;
	server_address.sin_port=htons(50005);
	server_address.sin_addr.s_addr=inet_addr("192.168.125.181");
	
	connect(client_sockfd,(struct sockaddr*)&server_address,sizeof(server_address));

	
	printf("Enter your data:");
	scanf("%s",send_data);

	send(client_sockfd,send_data,sizeof(send_data),0);

	recv(client_sockfd,recv_data,sizeof(recv_data),0);

	printf("\nReceived data is %s:",recv_data);
	
	close(client_sockfd);
}
