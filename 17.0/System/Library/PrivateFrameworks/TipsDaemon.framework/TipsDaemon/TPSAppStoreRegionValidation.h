@interface TPSAppStoreRegionValidation : TPSRegionsValidation

- (void)validateWithCompletion:(id /* block */)a0;
- (void)getCurrentStateWithCompletion:(id /* block */)a0;
- (id)getCurrentState;
- (BOOL)hasStoreFrontRegionPrefix:(id)a0 fromRegions:(id)a1;

@end
