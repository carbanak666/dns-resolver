/*
+=======================+
+CODIGO FEITO POR SOLDAT+
+=======================+
*/
#include <stdio.h>
#include <netdb.h> //biblioteca para operações de redes
#include <sys/socket.h> //biblioteca de familia de protocolo de internet
#include <arpa/inet.h> //biblioteca operações de internet

int main(int argc, char *argv[])
{
    if(argv[1] == NULL) {
    	printf("modo de uso ./dnsbart www.google.com\n"); //modo de uso
    } else {
       
       struct hostent *alvo = gethostbyname(argv[1]);
       

      printf("IP ===> %s\n", inet_ntoa(*((struct in_addr *)alvo->h_addr)));

 }
	return 0;
}
