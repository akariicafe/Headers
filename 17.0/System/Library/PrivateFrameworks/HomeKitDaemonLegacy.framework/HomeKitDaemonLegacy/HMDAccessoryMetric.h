@class HMFTimer, HMDAccessorySessionMetric, HMDAccessory, NSString, HMDAccessoryDiagnosticsMetric, NSObject;
@protocol OS_dispatch_queue;

@interface HMDAccessoryMetric : HMFObject <HMFLogging, HMFTimerDelegate>

@property (readonly, weak) HMDAccessory *accessory;
@property (retain, nonatomic) HMFTimer *accessoryMetricTimer;
@property (readonly, nonatomic) double timerInterval;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDAccessorySessionMetric *sessionMetric;
@property (readonly, nonatomic) HMDAccessoryDiagnosticsMetric *diagnosticsMetric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0;
- (void)submitMetricAndStop;

@end
