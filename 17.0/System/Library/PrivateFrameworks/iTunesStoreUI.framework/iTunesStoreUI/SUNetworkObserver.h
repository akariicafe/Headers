@class NSString, ISStoreURLOperation, NSTimer, NSNumber;

@interface SUNetworkObserver : NSObject <ISSingleton, ISStoreURLOperationDelegate> {
    ISStoreURLOperation *_partnerDetectOperation;
    BOOL _partnersEnabled;
    NSTimer *_startupTimer;
    long long _storeServicesNetworkUsageCount;
}

@property (retain, nonatomic) NSString *partnerIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)a0;

- (id)init;
- (void)dealloc;
- (void)_networkTypeChanged:(id)a0;
- (void)_updateNetworkActivityIndicator;
- (void)_cancelStartupTimer;
- (void)_handleNetworkTypeChange:(id)a0;
- (void)_handleUsingNetworkChange:(id)a0;
- (void)_mainThreadHandleNetworkTypeChange:(id)a0;
- (void)_mainThreadScheduleNetworkActivityUpdate;
- (void)_mainThreadSetPartnerIdentifier:(id)a0;
- (void)_networkUsageStateChanged:(id)a0;
- (void)_partnerHeaderChanged:(id)a0;
- (void)_startupTimer:(id)a0;
- (void)_storeServicesNetworkStartNotification:(id)a0;
- (void)_storeServicesNetworkStopNotification:(id)a0;
- (void)checkPartnerAvailability;
- (void)setPartnersEnabled:(BOOL)a0;
- (void)startNetworkAvailabilityTimer;

@end
