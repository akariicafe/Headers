@class HMDAccessory, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDAccessoryDiagnosticsMetric : HMFObject <HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) HMDAccessory *accessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)state;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)collectAndSubmitMetric;
- (id)initWithAccessory:(id)a0 workQueue:(id)a1;
- (void)resetDiagnosticMetric;

@end
