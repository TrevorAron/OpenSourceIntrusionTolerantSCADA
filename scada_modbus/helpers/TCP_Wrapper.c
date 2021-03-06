/*
 * TCP_Wrapper.c contains the implementation of the 
 *  methods used to read from/write to TCP sockets.
 *
 * Creator: Marco
 * Created: 3/30/2015
 * Last modified: 3/30/2015
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int TCP_Read(int s, void *dummy_buf, int nBytes) {
  int ret, nRead, nRemaining;
  char *buf = NULL;

  nRemaining = nBytes;
  nRead = 0;

  buf = (char *)dummy_buf;

  while(1) {
    ret = read(s, &buf[nRead], nRemaining);

    if(ret < 0) {
      perror("TCP read failure");
      exit(EXIT_FAILURE);
      break;
    }
      
    if(ret == 0)
      break;

    if(ret != nBytes)
      printf("Short read in loop: %d out of %d\n", ret, nBytes);

    nRead += ret;
    nRemaining -= ret;

    if(nRead == nBytes)
      break;
  }

  if(nRead != nBytes)
    printf("Short read: %d %d\n", nRead, nBytes);

  return ret;
}

int TCP_Write(int s, void *dummy_buf, int nBytes) {
  int ret, nWritten, nRemaining;
  char *buf = NULL;
  
  buf = (char *)dummy_buf;
  nWritten = 0;
  nRemaining = nBytes;

  while(1) {
    ret = write(s, &buf[nWritten], nRemaining);
  
    if(ret < 0) {
      perror("TCP write failure");
      exit(EXIT_FAILURE);
      break;
    }

    if(ret == 0)
      break;

    if(ret != nBytes)
      printf("Short write in loop: %d out of %d\n", ret, nBytes);

    nWritten += ret;
    nRemaining -= ret;
    
    if(nWritten == nBytes)
      break;
  }

  if(nWritten != nBytes)
    printf("Short write: %d %d\n", nWritten, nBytes);

  return ret;
}
