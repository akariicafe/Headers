@class HAP2AccessorySessionInfo, NSMutableDictionary, HMDAccessory, NSString, NSDate, NSObject, NSError;
@protocol OS_dispatch_queue;

@interface HMDAccessorySessionMetric : HMFObject <HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) HMDAccessory *accessory;
@property (nonatomic) BOOL isFromPrimary;
@property (copy, nonatomic) NSDate *sessionStartTime;
@property (nonatomic) BOOL hasActiveSession;
@property (copy, nonatomic) NSDate *reachableStartTime;
@property (nonatomic) BOOL isReachable;
@property (copy, nonatomic) NSDate *metricCollectionStartTime;
@property (copy, nonatomic) NSMutableDictionary *errorCounts;
@property (copy, nonatomic) NSString *accessoryTransport;
@property (nonatomic) double activeSessionDurationSec;
@property (nonatomic) double reachableDurationSec;
@property (nonatomic) unsigned long long sessionFailures;
@property (nonatomic) unsigned long long successfulSessionRetries;
@property (readonly, nonatomic) NSError *topError;
@property (nonatomic) double submissionIntervalSec;
@property (readonly, nonatomic) BOOL isHomeThreadCapable;
@property (readonly, nonatomic) BOOL isPrimaryResidentThreadCapable;
@property (readonly, nonatomic) BOOL isThreadNetworkUp;
@property (readonly, nonatomic) double sessionCheckIntervalSec;
@property (copy, nonatomic) HAP2AccessorySessionInfo *sessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)state;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)submitMetric;
- (id)attributeDescriptions;
- (void)_submitMetric;
- (void)_resetSessionMetric;
- (id)expectedTransport;
- (id)initWithAccessory:(id)a0 workQueue:(id)a1;
- (BOOL)isCurrentPrimaryResident;
- (void)resetSessionMetric;
- (void)updateReachableState:(BOOL)a0;
- (void)updateSessionState:(BOOL)a0 linkLayerType:(long long)a1 sessionInfo:(id)a2 withError:(id)a3;

@end
