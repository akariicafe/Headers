@interface HDHeadphoneExposureStatisticUpdateResult : NSObject

@property (readonly, nonatomic) BOOL includedSeries;
@property (readonly, nonatomic) BOOL canTriggerNotification;

+ (id)_resultWithIncludedSeries:(BOOL)a0 canTriggerNotification:(BOOL)a1;
+ (id)_resultWithIncludedSeries:(BOOL)a0 samples:(id)a1;
+ (id)resultForAggregation;
+ (id)resultForEmptySamplesAdded;
+ (id)resultForSamplesAdded:(id)a0 includedSeries:(BOOL)a1;
+ (id)resultForSamplesJournaled:(id)a0;

- (id)_initWithIncludedSeries:(BOOL)a0 canTriggerNotification:(BOOL)a1;
- (void)combineWithResult:(id)a0;

@end
