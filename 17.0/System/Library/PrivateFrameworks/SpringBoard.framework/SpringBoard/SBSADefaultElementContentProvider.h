@class NSMutableDictionary;

@interface SBSADefaultElementContentProvider : SBSABasePreferencesProvider {
    NSMutableDictionary *_identifiersToElementDescriptions;
    BOOL _wasAnimating;
}

- (id)defaultTransitionSettings;
- (void).cxx_destruct;
- (void)_pruneElementDescriptionWithIdentifier:(id)a0;
- (id)_updatedElementDescriptionAssociatedWithElementContext:(id)a0 transitionDescriptions:(id)a1 context:(id)a2 updateReasons:(id)a3;
- (id)_updatedElementDescriptionFromDescription:(id)a0 associatedElementContext:(id)a1 associatedSnapshotContext:(id)a2 transitionDescriptions:(id)a3 context:(id)a4 updateReasons:(id)a5;
- (id)preferencesFromContext:(id)a0;

@end
