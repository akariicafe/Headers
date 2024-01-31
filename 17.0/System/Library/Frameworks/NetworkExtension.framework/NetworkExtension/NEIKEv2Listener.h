@class NEIKEv2Transport, NSString, NEIKEv2IKESAConfiguration, NEIPSecSASession, NSObject, NSMutableArray;
@protocol NEIKEv2ListenerDelegate, NEIKEv2PacketDelegate, OS_dispatch_queue, OS_nw_listener;

@interface NEIKEv2Listener : NSObject <NEIKEv2TransportDelegate, NEIKEv2ConfigurationDelegate> {
    BOOL _cancelled;
    NSObject<OS_dispatch_queue> *_listenerQueue;
    NEIKEv2IKESAConfiguration *_ikeConfig;
    NEIPSecSASession *_saSession;
    NSString *_kernelSASessionName;
    NSObject<OS_nw_listener> *_listener;
    NSMutableArray *_sessionsBeforeAuth;
    NEIKEv2Transport *_transport;
    id<NEIKEv2ListenerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id<NEIKEv2PacketDelegate> _packetDelegate;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *listenerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reportError:(int)a0;
- (void)cancel;
- (id)initWithListenerIKEConfig:(id)a0 kernelSASessionName:(id)a1 listenerUDPPort:(id)a2 listenerInterface:(id)a3 listenerQueue:(id)a4 delegate:(id)a5 delegateQueue:(id)a6;
- (id)initWithListenerIKEConfig:(id)a0 kernelSASessionName:(id)a1 listenerUDPPort:(id)a2 listenerQueue:(id)a3 delegate:(id)a4 delegateQueue:(id)a5;
- (id)initWithListenerIKEConfig:(id)a0 kernelSASessionName:(id)a1 listenerUDPPort:(id)a2 listenerQueue:(id)a3 delegate:(id)a4 delegateQueue:(id)a5 includeP2P:(BOOL)a6;
- (id)initWithListenerIKEConfig:(id)a0 kernelSASessionName:(id)a1 packetDelegate:(id)a2 listenerQueue:(id)a3 delegate:(id)a4 delegateQueue:(id)a5;
- (id)initWithListenerIKEConfig:(id)a0 saSession:(id)a1 listenerUDPPort:(id)a2 listenerInterface:(id)a3 listenerQueue:(id)a4 delegate:(id)a5 delegateQueue:(id)a6;
- (id)initWithListenerIKEConfig:(id)a0 saSession:(id)a1 listenerUDPPort:(id)a2 listenerQueue:(id)a3 delegate:(id)a4 delegateQueue:(id)a5;
- (id)initWithListenerIKEConfig:(id)a0 saSession:(id)a1 packetDelegate:(id)a2 listenerQueue:(id)a3 delegate:(id)a4 delegateQueue:(id)a5;
- (void)receivePacket:(id)a0;
- (void)requestConfigurationForSession:(id)a0 sessionConfig:(id)a1 childConfig:(id)a2 validateAuthBlock:(id /* block */)a3 responseBlock:(id /* block */)a4;
- (void)sessionFailedBeforeRequestingConfiguration:(id)a0;

@end
