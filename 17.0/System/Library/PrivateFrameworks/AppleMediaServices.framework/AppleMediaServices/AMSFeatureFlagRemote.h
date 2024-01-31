@interface AMSFeatureFlagRemote : AMSFeatureFlag

+ (id)fetchRemoteFlagState;

- (BOOL)isRemote;
- (void)_updateInternalEnabledState;
- (void)_updateDevelopmentPhase;
- (void)_activateFlag;
- (long long)_developmentPhase;
- (id)_preferencesKey;

@end
