@class NSMutableArray;

@interface ATXInferredModesAccumulator : NSObject {
    NSMutableArray *_inferredModeStartingEvents;
    NSMutableArray *_usageInsightsInferredModeEvents;
}

- (id)init;
- (void).cxx_destruct;
- (void)recordInferredModeEndEvent:(id)a0;
- (void)recordInferredModeStartEvent:(id)a0;
- (id)usageInsightsInferredATXModeEvents;

@end
