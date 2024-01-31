@class VCNWConnectionInfo, NSObject;
@protocol OS_dispatch_semaphore;

@interface VCTransportSessionNW : VCTransportSession {
    BOOL _isSharedConnection;
    BOOL _didScheduleReceive;
    int _networkInterfaceType;
    NSObject<OS_dispatch_semaphore> *_startWaitSemaphore;
    NSObject<OS_dispatch_semaphore> *_cancelWaitSemaphore;
    BOOL _isIPv6;
    unsigned int _networkMTU;
}

@property (retain, nonatomic) VCNWConnectionInfo *rtpConnectionInfo;
@property (retain, nonatomic) VCNWConnectionInfo *rtcpConnectionInfo;

- (BOOL)isIPv6;
- (void)dealloc;
- (void)start;
- (void)stop;
- (struct tagVCNWConnectionMonitor { } *)createNWMonitor;
- (int)dupRTPNWConnectionBackingSocket;
- (int)cancelConnections;
- (int)createAndSetupConnection:(id)a0;
- (int)createConnections;
- (int)createNWConnection:(id)a0;
- (int)createVFD:(int *)a0 forStreamType:(unsigned int)a1;
- (int)destroyNWConnection:(id *)a0;
- (int)dupRTCPNWConnectionBackingSocket;
- (int)dupRTPNWConnectionBackingSocketForNWConnection:(id)a0;
- (void)handleStateChanges:(int)a0 error:(id)a1 operationResult:(BOOL *)a2;
- (id)initWithRTPNWConnectionID:(id)a0 RTCPNWConnectionID:(id)a1 handlerQueue:(id)a2 context:(void *)a3 notificationHandler:(void /* function */ *)a4 eventHandler:(void /* function */ *)a5;
- (void)initializeInterfaceType;
- (BOOL)initializeIsIPv6;
- (BOOL)initializeNetworkMTU;
- (int)networkInterfaceType;
- (unsigned int)networkMTU;
- (int)setRemoteAddress:(id)a0 remoteRTCPPort:(int)a1;
- (int)setStateChangeHandlerForConnection:(id)a0 result:(BOOL *)a1;
- (int)setupNWConnection:(id)a0;

@end
