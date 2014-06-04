#ifndef _SCAN_H_
#define _SCAN_H_

#define MAXTOKENLEN 40

extern char tokenString[MAXTOKENLEN+1];

/* typedef int ToeknType in globals.h
 * function getToken returns the next 
 * token in the src file
 */
TokenType getToken(void);

#endif
