@class HDHeadphoneAudioExposureBucketCollection, NSNumber;

@interface HDHeadphoneExposureStatisticsResult : NSObject

@property (readonly, nonatomic) HDHeadphoneAudioExposureBucketCollection *cache;
@property (readonly, nonatomic) BOOL eligbleForUserNotification;
@property (readonly, nonatomic) NSNumber *prunedCount;
@property (nonatomic) BOOL needsRebuildOnNextUnlock;

+ (id)resultWithCache:(id)a0 eligbleForUserNotification:(BOOL)a1;
+ (id)resultForAppendedSamplesDuringStartup;
+ (id)resultWithCache:(id)a0 prunedCount:(id)a1;

- (id)_initWithCache:(id)a0 eligbleForUserNotification:(BOOL)a1 prunedCount:(id)a2;
- (id)copyWithEligbleForUserNotificationOverride:(BOOL)a0;
- (void).cxx_destruct;

@end
