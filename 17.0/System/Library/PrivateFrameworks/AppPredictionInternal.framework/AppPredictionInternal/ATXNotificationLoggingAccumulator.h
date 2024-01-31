@class NSMutableDictionary;

@interface ATXNotificationLoggingAccumulator : NSObject {
    NSMutableDictionary *_unhandledNotificationReceiveDimensionSets;
    NSMutableDictionary *_summaryMetrics;
}

- (id)init;
- (void).cxx_destruct;
- (void)logToCoreAnalytics;
- (id)_getSummaryMetricForDimensions:(id)a0;
- (id)_popReceiveNotificationDimensionSetForNotificationId:(id)a0;
- (void)handleNextNotification:(id)a0 currentDimensionSet:(id)a1;

@end
