/* RFC 7230 */

#ifndef BALEHTTP_MESSAGING_H
#define BALEHTTP_MESSAGING_H

#include "stdio.h"
#include "stdlib.h"


#define HTTP_NAME "HTTP"
#define HTTP_MAJOR_VERSION '1'
#define HTTP_MINOR_VERSION '1'

/*  
    quoted-string  = DQUOTE *( qdtext / quoted-pair ) DQUOTE
    comment = "(" *( ctext / quoted-pair / comment ) ")"
    token  = 1*tchar
    quoted-pair = "\" ( HTAB / SP / VCHAR / obs-text )
    qdtext = HTAB / SP /%x21 / %x23-5B / %x5D-7E / obs-text
    ctext  = HTAB / SP / %x21-27 / %x2A-5B / %x5D-7E / obs-text 
    obs-text = %x80-FF
    tchar  = "!" / "#" / "$" / "%" / "&" / "'" / "*" / "+" / "-" / "." / "^" / "_" / "`" / "|" / "~" / DIGIT / ALPHA; any VCHAR, except delimiters
*/

typedef struct 
{
  char value;
} token;

typedef struct 
{
  char value[];
} dquote;

typedef struct 
{
  char value[];
} comment;


/* HTTP/1.1 */
const char HTTP_VERSION_HEADER[9] = {HTTP_NAME[0], HTTP_NAME[1], HTTP_NAME[2], HTTP_NAME[3], '/', HTTP_MAJOR_VERSION, '.', HTTP_MINOR_VERSION, 0};


char* RequestLine(enum method, char* target, char* protocol);
char* StatusLine(char* protocol, int status);
char* HeaderField(char* field_name, char* field_value);
char* TransferEncoding(char* option); //gzip, chunked, both(gzip then chunked)

/* URI too long ~8000 bytes*/

#endif