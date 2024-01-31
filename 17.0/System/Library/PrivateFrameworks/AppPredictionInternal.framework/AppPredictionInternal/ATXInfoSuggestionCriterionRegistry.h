@class NSDictionary;

@interface ATXInfoSuggestionCriterionRegistry : NSObject {
    NSDictionary *_registry;
}

- (id)init;
- (BOOL)isSourceIdentifierRegistered:(id)a0;
- (long long)confidenceLevelForCriterion:(id)a0 sourceIdentifier:(id)a1;
- (id)availableCriterionIdentifiersForSourceIdentifier:(id)a0;
- (void).cxx_destruct;

@end
