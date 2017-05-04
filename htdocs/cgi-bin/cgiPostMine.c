#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <signal.h>
#include <sys/types.h>
#include <errno.h>

#define	MAXLINE	 8192  /* max text line length */

int main(int argc, char *argv[]) {
    char *buf,*p;
    int length=0;
    char data[MAXLINE];
    char content[MAXLINE] = {0};
    //printf("argv[1] = %s\n", argv[1]);

    if ((buf = getenv("CONTENT_LENGTH")) != NULL)
    {
    	length=atol(buf);
    }
    else
    {
	printf("getenv == NULL\n");
    }

    //printf("Begin to fgets...\n");

    //fflush(stdout);

    p = fgets(data,length+1,stdin);
    //printf("End to fgets...\n");
    if(p == NULL)
    {
        sprintf(content, "Something is wrong\r\n");
	//printf("Some is wrong...\n");
    }
    else
    { 
        sprintf(content, "Info:%s",data);
        //printf("data = %s\n", data);
    }
    //printf("length = %d\n", length);

    //sprintf(content, "%s\r\n", "<HTML>");

    printf("<HTML>\r\n");
    printf("<TITLE>Index</TITLE>\r\n");
    printf("<BODY>\r\n");
    printf("<P>Welcome to J. David's webserver. length= %d End\r\n", length);
    printf("<H1>CGI_MINE demo %s End\r\n", content);
    printf("<FORM ACTION=\"color.cgi\" METHOD=\"POST\">\r\n");
    printf("Enter a color: <INPUT TYPE=\"text\" NAME=\"color\">\r\n");
    printf("<INPUT TYPE=\"submit\">\r\n");
    printf("</FORM>\r\n");
    printf("</BODY>\r\n");
    printf("</HTML>\r\n");

    fflush(stdout);

    return 0; 
    //exit(0);
 
   #if 0 
    p=fgets(data,length+1,stdin);
    if(p==NULL)
    	sprintf(content, "Something is wrong\r\n");
    else	
	sprintf(content, "Info:%s\r\n",data);

    printf("Content-length: %d\r\n", strlen(content));
    printf("Content-type: text/html\r\n\r\n");
    printf("%s", content);
    fflush(stdout);
    exit(0);
   #endif 

}
