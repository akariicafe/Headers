@interface REMAppStoreDataViewConfigurationsInvocationResult : REMStoreInvocationResult <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long createdOrCompletedRemindersCountThreshold;
@property (readonly, nonatomic) unsigned long long numberOfForegroundsThreshold;
@property (readonly, nonatomic) double timeIntervalOfInterest;
@property (readonly, nonatomic) double timeIntervalSinceInitialForeground;
@property (readonly, nonatomic) double timeIntervalSinceLastPrompt;
@property (readonly, nonatomic) double timeIntervalSinceLastFetch;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCreatedOrCompletedRemindersCountThreshold:(unsigned long long)a0 numberOfForegroundsThreshold:(unsigned long long)a1 timeIntervalOfInterest:(double)a2 timeIntervalSinceInitialForeground:(double)a3 timeIntervalSinceLastPrompt:(double)a4 timeIntervalSinceLastFetch:(double)a5;

@end
