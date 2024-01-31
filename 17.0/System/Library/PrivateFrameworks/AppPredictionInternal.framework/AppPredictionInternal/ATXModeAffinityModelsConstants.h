@class NSDictionary, ATXModeEntityTrialClientWrapper;

@interface ATXModeAffinityModelsConstants : NSObject {
    NSDictionary *_modeAffinityModelsConstants;
    ATXModeEntityTrialClientWrapper *_modeEntityTrialClientWrapper;
}

- (id)init;
- (void).cxx_destruct;
- (int)numOfDaysToComputeEntityOccurenceFeatures;
- (int)numOfDaysToComputeEntityOccurenceFeaturesForContacts;
- (double)scalingFactorForModeGlobalPriors;

@end
