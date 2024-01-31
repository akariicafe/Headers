@interface SBSARenderingAndCloningPreferencesProvider : SBSABasePreferencesProvider {
    long long _previousContainerRenderingStyle;
    long long _previousCurtainRenderingStyle;
    long long _previousCloningStyle;
}

- (id)preferencesFromContext:(id)a0;

@end
