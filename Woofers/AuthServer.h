#ifndef AUTHSERVER_H
#define AUTHSERVER_H

#define AUTHSERVER_PORT 2106
#define AUTHSERVER_PROTOCOL_VERSION 0x18a27

// Messages sent from the server to the client.
#define AUTHSERVER_HELLO 0
#define AUTHSERVER_LOGIN_FAILED 1
#define AUTHSERVER_LOGIN_OK 3
#define AUTHSERVER_SERVER_LIST 4
#define AUTHSERVER_NO_SERVERS 5
#define AUTHSERVER_IN_GAME 7

// Error messages sent from the server to the client.
#define AUTHREASON_INVALID_PASSWORD 3
#define AUTHREASON_NO_SERVERS 6
#define AUTHREASON_SERVER_DOWN 8
#define AUTHREASON_ALREADY_LOGGED_IN 14
#define AUTHREASON_INVALID_AUTH 33

// Messages sent from the client to the server.
#define AUTHCLIENT_SERVER_SELECTED 2
#define AUTHCLIENT_LOGOUT 3
#define AUTHCLIENT_LOGIN 4
#define AUTHCLIENT_SERVER_LIST 5

#endif