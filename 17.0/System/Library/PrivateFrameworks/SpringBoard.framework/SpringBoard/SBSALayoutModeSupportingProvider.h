@class SBSALayoutTransitionProvider;

@interface SBSALayoutModeSupportingProvider : SBSABasePreferencesProvider {
    SBSALayoutTransitionProvider *_activeTransitionProvider;
}

- (void).cxx_destruct;
- (void)_transitionToLayoutModeIfNecessary:(long long)a0 context:(id)a1;
- (id)preferencesFromContext:(id)a0;

@end
