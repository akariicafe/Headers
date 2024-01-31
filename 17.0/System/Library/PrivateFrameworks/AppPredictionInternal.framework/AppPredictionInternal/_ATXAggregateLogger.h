@class _ATXBundleIdSet;

@interface _ATXAggregateLogger : NSObject {
    _ATXBundleIdSet *_bundleIdSet;
    long long _buildType;
}

+ (id)sharedInstance;
+ (void)yesWithProbabilityStopMocking;
+ (id)predictedItemOutcomesMapping;
+ (id)stringForPredictedItemOutcome:(unsigned long long)a0;
+ (id)notificationOutcomesMapping;
+ (id)predictionOutcomesMapping;
+ (id)quietingSuggestionOutcomesMapping;
+ (id)propertyStringForLaunchReason:(id)a0;
+ (id)stringForPredictionOutcome:(unsigned long long)a0;
+ (BOOL)isConversionOutcome:(unsigned long long)a0;
+ (BOOL)yesWithProbability:(double)a0;
+ (long long)getBuildType;
+ (void)yesWithProbabilityAlwaysSays:(BOOL)a0;
+ (id)suggestionCountsArray;

- (void)logAppLaunch:(id)a0 bundleId:(id)a1;
- (id)init;
- (void)logPredictionEventWith:(id)a0 outcome:(unsigned long long)a1 forABGroup:(id)a2 consumerType:(unsigned long long)a3 andSubType:(unsigned char)a4;
- (void)logQuietingSuggestionOutcome:(long long)a0;
- (void)logLaunchEventWithLaunchReason:(id)a0 predicted:(BOOL)a1 position:(long long)a2;
- (void)logSuggestionCounts:(id)a0;
- (void)logInputs:(const float *)a0 andScore:(float)a1 withOutcome:(unsigned long long)a2;
- (void)logNotificationInteraction:(long long)a0 orbed:(BOOL)a1 onscreen:(BOOL)a2;
- (void).cxx_destruct;
- (void)logPromotingSuggestionOutcome:(long long)a0;
- (void)logPredictionOfAppWithBundleId:(id)a0 inputs:(const float *)a1 outcome:(unsigned long long)a2 rank:(unsigned long long)a3 score:(float)a4 forABGroup:(id)a5;
- (void)logPredictUninstalledApps:(unsigned long long)a0 consumerSubType:(unsigned char)a1;

@end
