@interface _REMAppStoreReviewCloudConfigurationStorage : NSObject <REMAppStoreReviewCloudConfiguration>

@property (readonly, nonatomic) unsigned long long appStoreReviewCreatedOrCompletedRemindersCountThreshold;
@property (readonly, nonatomic) unsigned long long appStoreReviewNumberOfForegroundsThreshold;
@property (readonly, nonatomic) double appStoreReviewTimeIntervalOfInterest;
@property (readonly, nonatomic) double appStoreReviewTimeIntervalSinceInitialForeground;
@property (readonly, nonatomic) double appStoreReviewTimeIntervalSinceLastPrompt;
@property (readonly, nonatomic) double appStoreReviewTimeIntervalSinceLastFetch;

- (id)initWithCreatedOrCompletedRemindersCountThreshold:(unsigned long long)a0 numberOfForegroundsThreshold:(unsigned long long)a1 timeIntervalOfInterest:(double)a2 timeIntervalSinceInitialForeground:(double)a3 timeIntervalSinceLastFetch:(double)a4 timeIntervalSinceLastPrompt:(double)a5;

@end
