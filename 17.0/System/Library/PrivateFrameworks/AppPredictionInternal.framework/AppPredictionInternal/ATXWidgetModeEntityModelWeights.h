@class NSDictionary, ATXModeEntityTrialClientWrapper;

@interface ATXWidgetModeEntityModelWeights : NSObject {
    NSDictionary *_widgetModeEntityModelWeights;
    ATXModeEntityTrialClientWrapper *_modeEntityTrialClientWrapper;
}

- (id)abGroup;
- (id)init;
- (void).cxx_destruct;
- (double)classConditionalProbability;
- (double)globalPopularity;
- (double)modePopularity;
- (int)numOfDays;
- (double)posteriorProbability;
- (double)weightForWidgetProbability;

@end
