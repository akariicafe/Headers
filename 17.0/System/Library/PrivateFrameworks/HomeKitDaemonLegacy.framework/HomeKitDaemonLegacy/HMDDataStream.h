@class NSString, HMFTimer, HMDDataStreamControlProtocol, NSMutableSet, NSObject, NSMutableArray, NSMapTable, HAPSecuritySessionEncryption;
@protocol OS_dispatch_queue, HMDDataStreamDelegate, HMDDataStreamTransport;

@interface HMDDataStream : NSObject <HMFLogging, HMFTimerDelegate>

@property (readonly, copy) NSString *logIdentifier;
@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) id<HMDDataStreamTransport> transport;
@property (retain, nonatomic) HAPSecuritySessionEncryption *sessionEncryption;
@property (retain, nonatomic) NSMapTable *protocols;
@property (retain, nonatomic) HMDDataStreamControlProtocol *controlProtocol;
@property (nonatomic) BOOL firstMessageReceived;
@property (retain, nonatomic) HMFTimer *connectionTimer;
@property (retain, nonatomic) HMFTimer *helloMessageResponseTimer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) unsigned long long nextRequestIdentifier;
@property (readonly, nonatomic) NSMutableSet *pendingRequests;
@property (readonly, nonatomic) NSMutableArray *pendingEvents;
@property (weak, nonatomic) id<HMDDataStreamDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)close;
- (void)timerDidFire:(id)a0;
- (void)connect;
- (void)setTrafficClass:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addProtocol:(id)a0 name:(id)a1;
- (id)initWithTransport:(id)a0 sessionEncryption:(id)a1 workQueue:(id)a2 logIdentifier:(id)a3;
- (id)initWithTransport:(id)a0 sessionEncryption:(id)a1 workQueue:(id)a2 logIdentifier:(id)a3 connectionTimer:(id)a4 helloMessageResponseTimer:(id)a5;
- (id)protocolDelegateHandle;
- (void)protocolDidUpdateActiveStatus:(id)a0;
- (id)protocolWithName:(id)a0;
- (void)sendEventForProtocol:(id)a0 topic:(id)a1 payload:(id)a2 completion:(id /* block */)a3;
- (void)sendRequestForProtocol:(id)a0 topic:(id)a1 identifier:(unsigned long long)a2 payload:(id)a3 completion:(id /* block */)a4;
- (void)sendRequestForProtocol:(id)a0 topic:(id)a1 payload:(id)a2 completion:(id /* block */)a3;
- (void)sendResponseForRequestHeader:(id)a0 payload:(id)a1 status:(unsigned short)a2 completion:(id /* block */)a3;
- (void)transport:(id)a0 didFailWithError:(id)a1;
- (void)transport:(id)a0 didReceiveRawFrame:(id)a1;
- (void)transportDidClose:(id)a0;
- (void)transportDidOpen:(id)a0;

@end
