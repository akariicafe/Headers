@class NSObject;
@protocol LoopbackSocketTunnelDelegate;

@interface LoopbackSocketTunnel : NSObject {
    unsigned short _port;
    int sockFD;
    struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } sa;
    struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } vtpSA;
    NSObject<LoopbackSocketTunnelDelegate> *_delegate;
    BOOL foundVTPIP;
}

@property NSObject *optionalArg;

- (void)getIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0;
- (void)getVTPIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0;
- (id)initWithPort:(unsigned short)a0 delegate:(id)a1 error:(id *)a2;
- (int)sendPacketToVTP:(id)a0;
- (int)serverLoopProc;
- (void)setVTPIP:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0;
- (void)shutdownSocket;

@end
