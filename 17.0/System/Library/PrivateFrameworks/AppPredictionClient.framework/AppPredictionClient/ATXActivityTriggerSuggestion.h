@class NSString, NSArray, ATXActivity, ATXActivitySuggestionClient;

@interface ATXActivityTriggerSuggestion : NSObject <ATXActivitySuggestion> {
    ATXActivitySuggestionClient *_activitySuggestionClient;
}

@property (readonly, nonatomic) ATXActivity *activity;
@property (readonly, copy, nonatomic) NSString *uuidString;
@property (readonly, nonatomic) unsigned long long location;
@property (readonly, nonatomic) NSArray *triggers;
@property (readonly, nonatomic) NSString *localizedTriggerSuggestionText;
@property (readonly, copy, nonatomic) NSString *suggestionUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_localizableStringForModeSemanticType:(long long)a0;
- (id)_localizedStringForDrivingTriggerFromBundle:(id)a0 semanticType:(long long)a1 userModeName:(id)a2;
- (id)_localizedStringForGameControllerTriggerFromBundle:(id)a0 semanticType:(long long)a1 userModeName:(id)a2;
- (id)_localizedStringForLocationTriggerFromBundle:(id)a0 semanticType:(long long)a1 userModeName:(id)a2;
- (id)_localizedStringForScreenActivityTriggerFromBundle:(id)a0 semanticType:(long long)a1 userModeName:(id)a2;
- (id)_localizedStringForSleepingTriggerFromBundle:(id)a0 semanticType:(long long)a1 userModeName:(id)a2;
- (id)_localizedStringForSmartActivationFromBundle:(id)a0 semanticType:(long long)a1 userModeName:(id)a2;
- (id)_localizedStringForWorkoutTriggerFromBundle:(id)a0 semanticType:(long long)a1 userModeName:(id)a2;
- (id)initWithActivity:(id)a0 activitySuggestionClient:(id)a1;
- (BOOL)isEqualToATXActivityTriggerSuggestion:(id)a0;

@end
