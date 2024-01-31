@class NSString, NSArray, DSClientMotionDataOptions, NSMutableDictionary, RPCompanionLinkClient, NSObject, DSProviderDevice, DSCoreAnalyticsEventHandler;
@protocol OS_dispatch_queue;

@interface DSListener : NSObject <DSListenerClientProtocol> {
    RPCompanionLinkClient *_discoveryClient;
    NSObject<OS_dispatch_queue> *_queue;
    DSProviderDevice *_currentProvider;
    NSMutableDictionary *_providerDictionary;
    BOOL _isStopCalled;
    BOOL _isSubscriptionActive;
    BOOL _isFirstSubscription;
    DSCoreAnalyticsEventHandler *_caEventHandler;
    int _firstSubscriptionDataLinkType;
    unsigned long long _numHeartbeats;
    unsigned long long _numMotionStateMessages;
    unsigned long long _activeProviderLostCount;
}

@property (retain, nonatomic) DSClientMotionDataOptions *motionDataOptions;
@property (nonatomic) BOOL isTestMode;
@property (readonly) NSArray *activeProviders;
@property unsigned int maxListenerClients;
@property double avgListenerStartInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_startCASessionMetricCollection;
- (void)_didLoseDevice:(id)a0;
- (void)_sendRequestID:(id)a0 request:(id)a1 device:(id)a2 options:(id)a3 responseHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (id)initWithDispatchQueue:(id)a0;
- (void)_didFindDevice:(id)a0;
- (void)failedToStartListenerWithError:(id)a0;
- (void)startedListener;
- (void)stoppedListener;
- (id)_findProviderWithIdentifier:(id)a0;
- (void)_rapportReceivedDataRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)_rapportReceivedHeartbeatRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)_receivedData:(id)a0 fromProvider:(id)a1;
- (void)_stopCASessionMetricCollection;
- (void)_stopListener;
- (void)_subscribeToMotionData;
- (void)_unsubscribeToMotionData;
- (void)_updateCurrentProvider:(id)a0;
- (void)receivedData:(id)a0 fromProvider:(id)a1;
- (void)startMotionDataListenerWithOptions:(id)a0;
- (void)stopMotionDataListener;
- (void)updateProviders:(id)a0;

@end
