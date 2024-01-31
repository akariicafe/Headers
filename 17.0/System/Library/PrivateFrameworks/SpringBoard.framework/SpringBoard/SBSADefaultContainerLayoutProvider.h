@class NSMutableArray;

@interface SBSADefaultContainerLayoutProvider : SBSABasePreferencesProvider {
    NSMutableArray *_orderedContainerDescriptions;
}

- (id)defaultTransitionSettings;
- (void).cxx_destruct;
- (void)_updateContainerViewDescription:(id)a0 transitionDescriptions:(id)a1 context:(id)a2;
- (double)_calculateCornerRadiusForContainerDescription:(id)a0 context:(id)a1;
- (unsigned long long)_indexOfContainerViewDescriptionWithIdentifier:(id)a0;
- (void)_pruneContainerDescriptionWithIdentifier:(id)a0;
- (void)_updateContainerDescriptionAtIndex:(unsigned long long)a0 transitionDescriptions:(id)a1 context:(id)a2 updateReason:(out id *)a3;
- (void)_updateContainerViewDescriptionInCollection:(id)a0;
- (id)behaviorSettingsForProperty:(id)a0;
- (id)preferencesFromContext:(id)a0;

@end
