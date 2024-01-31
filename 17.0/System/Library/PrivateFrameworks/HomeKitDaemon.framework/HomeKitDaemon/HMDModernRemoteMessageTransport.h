@class NSString, HMDRemoteMessageTransport, HMDModernTransportMessageContextManager, NSObject, NSMutableOrderedSet;
@protocol HMDDeviceResidencyProvider, HMDDateProvider, OS_dispatch_queue, HMDTimerProvider;

@interface HMDModernRemoteMessageTransport : HMDRemoteMessageTransport <HMDRemoteMessageTransportReachabilityDelegate, HMFMessageTransportDelegate>

@property (class, readonly, copy, nonatomic) NSString *requestStartTimeHeaderKey;
@property (class, readonly, copy, nonatomic) NSString *timeToLiveHeaderKey;

@property (getter=isStarted) BOOL started;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDRemoteMessageTransport *rapportTransport;
@property (readonly, nonatomic) HMDRemoteMessageTransport *idsTransport;
@property (readonly, nonatomic) HMDModernTransportMessageContextManager *contextManager;
@property (readonly, nonatomic) id<HMDDateProvider> systemDateProvider;
@property (readonly, nonatomic) id<HMDDateProvider> idsDateProvider;
@property (readonly, nonatomic) id<HMDTimerProvider> timerProvider;
@property (readonly, nonatomic) NSMutableOrderedSet *messageIDDedupeBuffer;
@property (nonatomic, getter=isRapportLinkSlow) BOOL rapportLinkSlow;
@property (weak) id<HMDDeviceResidencyProvider> residencyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (BOOL)isSecure;
- (long long)qualityOfService;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)messageTransport:(id)a0 didReceiveMessage:(id)a1;
- (id)start;
- (void).cxx_destruct;
- (BOOL)canSendMessage:(id)a0;
- (void)configureWithHomeMembershipVerifier:(id)a0;
- (id)initWithAccountRegistry:(id)a0;
- (id)initWithAccountRegistry:(id)a0 rapportTransport:(id)a1 idsTransport:(id)a2 contextManager:(id)a3 systemDateProvider:(id)a4 idsDateProvider:(id)a5 timerProvider:(id)a6;
- (void)transport:(id)a0 idsIdentifier:(id)a1 didAppearReachable:(BOOL)a2;

@end
