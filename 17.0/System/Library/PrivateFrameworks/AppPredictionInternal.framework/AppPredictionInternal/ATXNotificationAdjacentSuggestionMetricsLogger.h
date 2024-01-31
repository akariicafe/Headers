@class ATXNotificationAndSuggestionDatastore;

@interface ATXNotificationAdjacentSuggestionMetricsLogger : NSObject {
    ATXNotificationAndSuggestionDatastore *_datastore;
}

- (id)init;
- (id)initWithDatastore:(id)a0;
- (void).cxx_destruct;
- (void)logNotificationAdjacentSuggestionMetrics;
- (void)logNotificationAdjacentSuggestionMetricsWithXPCActivity:(id)a0;

@end
