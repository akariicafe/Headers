@class HMDHome, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDThreadNetworkStatusReporter : NSObject <HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) HMDHome *home;
@property (nonatomic) unsigned long long threadNetworkPeriodicCheckFrequencyInMins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)run;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (void)_checkIfThreadNetworkIsRunningWithCompletion:(id /* block */)a0;
- (void)_runThreadNetworkStatusPeriodicUpdate;
- (void)_scheduleThreadNetworkStatusPeriodicUpdate;

@end
