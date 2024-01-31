@interface CPLFeature : NSObject

+ (id)featureWithName:(id)a0;

- (BOOL)disableFeatureInStore:(id)a0 error:(id *)a1;
- (BOOL)enableFeatureInStore:(id)a0 error:(id *)a1;
- (BOOL)handleScopeWhenFeatureIsDisabled:(id)a0 scopeType:(long long)a1 store:(id)a2 error:(id *)a3;
- (BOOL)shouldDisableScopeWhenFeatureIsDisabled:(id)a0;

@end
