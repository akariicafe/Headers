@class NSMutableDictionary;

@interface ATXTVWidgetLogHarvester : NSObject {
    NSMutableDictionary *_tvWidgetMetrics;
}

+ (id)_stringForWidgetSuggestionEventType:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)sendToCoreAnalytics;
- (id)dryRunResult;
- (void)generateTVWidgetMetrics;
- (id)shouldSuggestTVWidgetWithDefaults:(id)a0;

@end
