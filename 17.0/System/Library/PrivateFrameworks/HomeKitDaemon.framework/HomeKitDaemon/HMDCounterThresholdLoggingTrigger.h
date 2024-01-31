@class NSString;
@protocol HMDEWSLogging;

@interface HMDCounterThresholdLoggingTrigger : NSObject <HMMCounterObserver>

@property (readonly, nonatomic) long long threshold;
@property (readonly, nonatomic) NSString *counterName;
@property (readonly, nonatomic) BOOL uploadImmediately;
@property (readonly, nonatomic) id<HMDEWSLogging> ewsLogger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updatedCounter:(id)a0 fromOldValue:(long long)a1 toNewValue:(long long)a2;
- (id)initWithThreshold:(long long)a0 counterName:(id)a1 ewsLogger:(id)a2;
- (id)initWithThreshold:(long long)a0 counterName:(id)a1 uploadImmediately:(BOOL)a2 ewsLogger:(id)a3;
- (void)logThresholdTrigger:(id)a0 triggerValue:(unsigned long long)a1;

@end
