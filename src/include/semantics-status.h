#ifndef BALEHTTP_STATUS_H
#define BALEHTTP_STATUS_H

// RFC 7231 HTTP/1.1
#define CONTINUE = 100                  //Request received, not rejected, Expect Header contained
#define SWITCHING = 101                 //Upgrade header indicates which protocol it will switch too

#define OK 200                          //Request succeeded
#define CREATED 201                     //New resource created, location header field
#define ACCEPTED 202                    //Accepted but not complete processing
#define NON_AUTHORITATIVE_INFO 203      //Payload has been modified, from origin server
#define NO_CONTENT 204                  //No content to send, PUT w/ETag Field
#define RESET_CONTENT 205               //Refresh of DOM requested
#define PARTIAL_CONTENT 206             //content-type "multipart/byteranges" payload

#define REDIRECT 300                    //More then one choice for user, provide links
#define MOVED 301                       //Resource has a new permanent URI, Location Header
#define FOUND 302                       //Resource has a temporary URI, Location Header
#define SEE_OTHER 303                   //Redirect and indirect response for reference URI
//#define USE_PROXY 305                 // (deprecated) security concerns
#define TEMP_REDIRECT 307               //Resource has a temporary URI, No method change allowed

#define BAD_REQUEST 400                 //Server cannot or willnot process request, client error
#define PAYMENT_REQUIRED 402            //Future use, ie quota reached or subscription expired  
#define FORBIDDEN 403                   //Refuse to authorize, credentials insufficient
#define NOT_FOUND 404                   //Did not find or is hiding resource
#define NOT_ALLOWED 405                 //Known resource but disallowed http method, Allow Header
#define NOT_ACCEPTABLE 406              //No representation available, accepted by client, provide links
#define TIMEOUT 408                     //Server did not receive request within time limit
#define CONFLICT 409                    //Request could not complete due to current state, ie PUT version < current
#define GONE 410                        //Resource no long available, likely permanent
#define LENGTH_REQUIRED 411             //No Content-Length header
#define PAYLOAD_TO_LARGE 413            //Payload larger then server will allow
#define URI_TO_LONG 414                 //URI longer then server can parse, "black hole" redirection
#define UNSUPPORTED_MEDIA 415           //Request refused based on Content-Type or Content-Encoding header
#define EXPECTATION_FAILED 417          //Server cannot meet the Expect header conditions
#define UPGRADE_REQUIRED 426            //Server cannot meet request, but may if protocol is upgraded, Upgrade Header [RFC7230] 

#define SERVER_ERROR 500                //Unexpected error preventing request forfillment
#define NOT_IMPLEMENTED 501             //Request method unrecognized
#define BAD_GATEWAY 502                 //Invalid response received from upstream server
#define SERVICE_UNAVAILABLE 503         //Unable to handle request currently, maintenance/outage, Retry-After Header
#define GATEWAY_TIMEOUT 504             //Timeout response received from upstream server
#define NOT_SUPPORTED 505               //HTTP Version not supported, Include support Versions


// RFC 7232
#define NOT_MODIFIED 304                //Resource has not changed since last request and should be reused from cache
#define PRECONDITION_FAILED 412         //

// RFC 7233
#define RANGE_UNSATISFIABLE 416         //

// RFC 7235
#define UNAUTHORIZED 401                //
#define PROXY_AUTH 407                  //

// RFC 7538
#define PERM_REDIRECT 308               //Resource has a new permanent URI, No method change allowed


  #define PROCESSING = 102
  #define HINTS = 103
  #define MISDIRECT 421
  #define UNPROCESSABLE 422
  #define EARLY 425
  #define TO_MANY_REQUESTS 429
  #define UNAVAILABLE_LEGAL 451
  #define NOT_EXTENDED 510
  #define AUTHENTICATION_REQUIRED 511


#endif