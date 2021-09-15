#ifndef CLIENT_H_
#define CLIENT_H_

#define DEFAULT_PLAYERCMD   " /usr/bin/mplayer   -   > /dev/null"
struct client_conf_st
{
    char    *rcvport;   // for local using
    char    *mgroup;
    char    *player_cmd;
};
// extern struct client_conf st client client_conf


#endif