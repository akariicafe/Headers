@class NSString;
@protocol HMDEWSLogging;

@interface HMDCounterRateLoggingTrigger : NSObject <HMMCounterObserver>

@property (readonly, nonatomic) long long windowSize;
@property (readonly, nonatomic) long long windowThreshold;
@property (readonly, nonatomic) NSString *counterName;
@property (readonly, nonatomic) BOOL uploadImmediately;
@property (readonly, nonatomic) id /* block */ timeSourceBlock;
@property (readonly, nonatomic) id<HMDEWSLogging> ewsLogger;
@property (readonly, nonatomic) long long intervalSize;
@property (nonatomic) unsigned long long *intervalCounts;
@property (nonatomic) unsigned long long windowCount;
@property (nonatomic) unsigned long long maxWindowCount;
@property (nonatomic) unsigned long long lastUpdatedInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)updatedCounter:(id)a0 fromOldValue:(long long)a1 toNewValue:(long long)a2;
- (id)initWithThreshold:(long long)a0 windowSize:(long long)a1 counterName:(id)a2 ewsLogger:(id)a3;
- (id)initWithThreshold:(long long)a0 windowSize:(long long)a1 counterName:(id)a2 uploadImmediately:(BOOL)a3 ewsLogger:(id)a4;
- (id)initWithThreshold:(long long)a0 windowSize:(long long)a1 counterName:(id)a2 uploadImmediately:(BOOL)a3 ewsLogger:(id)a4 timeSourceBlock:(id /* block */)a5;
- (void)logRateTrigger:(id)a0 triggerValue:(unsigned long long)a1;

@end
