@class NSMutableArray;

@interface ATXFakeCoreAnalyticsLogger : NSObject {
    NSMutableArray *_loggedEvents;
}

+ (id)sharedInstance;
+ (BOOL)hasReceivedEventWithMetricName:(id)a0 partialDictionary:(id)a1;
+ (void)resetEvents;

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasReceivedEventWithMetricName:(id)a0 partialDictionary:(id)a1;
- (double)numberOfReceivedEvents;
- (BOOL)partialDictionaryMatches:(id)a0 eventDictionary:(id)a1;
- (void)resetEvents;
- (void)sendEventWithMetricName:(id)a0 eventDictionary:(id)a1;

@end
