@interface PERevertPreset : PEEditAction

- (long long)actionType;
- (BOOL)forceRunAsUnadjustedAsset;
- (void)applyToLoadResult:(id)a0 completion:(id /* block */)a1;

@end
