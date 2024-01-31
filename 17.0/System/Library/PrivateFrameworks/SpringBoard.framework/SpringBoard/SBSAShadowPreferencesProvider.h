@interface SBSAShadowPreferencesProvider : SBSABasePreferencesProvider

- (long long)_shadowStyleForContainerDescription:(id)a0 elementContext:(id)a1 useHeavyShadowForTransition:(BOOL)a2 isFirstContainer:(BOOL)a3;
- (BOOL)_stretchProviderPresentInStack;
- (id)preferencesFromContext:(id)a0;

@end
