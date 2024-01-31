@class NSArray;

@interface HRETemplateRecommendationGeneratorProcess : HREStandardAsyncRecommendationGenerationProcess

@property (retain, nonatomic) NSArray *rooms;
@property (retain, nonatomic) NSArray *activeTemplates;
@property (retain, nonatomic) NSArray *homeTriggerBuilders;

- (void).cxx_destruct;
- (long long)_diffScoreForTriggerComparison:(id)a0;
- (id)_filterToAllowedObjects:(id)a0 withSourceObjects:(id)a1 withTrigger:(id)a2 template:(id)a3;
- (id)_actionsForDerivingForTemplate:(id)a0 recommendation:(id)a1;
- (id)_createInitialRecommendations:(id)a0 withRecommendation:(id)a1;
- (id)_defineActionsWithActionMap:(id)a0 withActionableObjects:(id)a1;
- (id)_defineProfileActionsForActionableObjects:(id)a0 withActionMap:(id)a1;
- (id)_existingActionSetForTemplate:(id)a0 recommendation:(id)a1;
- (id)_filterRecommendations:(id)a0 fromTemplate:(id)a1;
- (id)_filterSplitRecommendations:(id)a0 characteristicTypePriority:(id)a1;
- (id)_initialRecommendationsForTemplate:(id)a0;
- (id)_splitRecommendationsBySplitStrategy:(id)a0;
- (id)_triggerWithSameConfigurationAsTrigger:(id)a0;
- (id)characteristicActionsForObject:(id)a0 actionMap:(id)a1;
- (id)definiteActionsForCharacteristicActionMap:(id)a0 object:(id)a1;
- (id)generateRecommendations;
- (id)recommendationsWithTemplate:(id)a0;
- (BOOL)shouldGenerateRecommendations;

@end
