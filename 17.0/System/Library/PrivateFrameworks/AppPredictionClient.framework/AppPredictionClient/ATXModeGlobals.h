@class NSDictionary;

@interface ATXModeGlobals : NSObject <ATXLocationParameters> {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (int)predictedLocationsOfInterestUpdateInterval;
- (id)init;
- (BOOL)isAutomationTriggerSuggestionsForFocusEnabled;
- (id)initWithAssetClass:(Class)a0;
- (int)currentLocationUpdateInterval;
- (int)predictedExitTimesUpdateInterval;
- (int)homeLOISearchRadius;
- (int)workLOISearchRadius;
- (int)locationOfInterestSearchRadius;
- (int)frequentLOIMinimumVisits;
- (int)previousLOIExpirationTime;
- (void).cxx_destruct;
- (BOOL)isSetupSuggestionsForFocusEnabled;
- (int)locationOfInterestUpdateInterval;

@end
