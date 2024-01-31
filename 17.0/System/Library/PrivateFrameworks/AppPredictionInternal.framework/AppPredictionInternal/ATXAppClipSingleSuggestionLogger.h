@class NSMutableArray;
@protocol ATXPETEventTracker2Protocol;

@interface ATXAppClipSingleSuggestionLogger : NSObject

@property (retain, nonatomic) id<ATXPETEventTracker2Protocol> tracker;
@property (retain, nonatomic) NSMutableArray *positiveEventBuffer;
@property (retain, nonatomic) NSMutableArray *negativeEventBuffer;

- (id)init;
- (id)initWithTracker:(id)a0;
- (void).cxx_destruct;
- (id)_appClipEngagementMetricWithBundleId:(id)a0 urlHash:(id)a1 interactionType:(int)a2 consumerSubType:(id)a3;
- (void)_flushEventBuffer:(id)a0 numEventsToSample:(long long)a1 isNegative:(BOOL)a2;
- (void)_logAppClipEngagementMetric:(id)a0;
- (void)flushEventBuffers;
- (void)handleSingleSuggestion:(id)a0;

@end
