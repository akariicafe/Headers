@class SBSAInterfaceElementPropertyIdentity, SBSAElementLayoutTransition;

@interface SBSAKeyLinePreferencesProvider : SBSABasePreferencesProvider {
    long long _lastKnownConsensusBackgroundLuma;
    SBSAElementLayoutTransition *_lastChangingElementLayoutTransition;
    SBSAInterfaceElementPropertyIdentity *_pendingMitosisKeyLineSuppressionUnhidePropertyIdentity;
    long long _mitosisSuppressionState;
}

- (void).cxx_destruct;
- (id)behaviorSettingsForProperty:(id)a0;
- (id)preferencesFromContext:(id)a0;

@end
