@class NSString, NSArray, NSDictionary;
@protocol TRINamespaceFactorProviding;

@interface TRINamespaceFactorProviderChain : NSObject <TRINamespaceFactorProviding> {
    NSString *_namespaceName;
    NSArray *_providerChain;
    id<TRINamespaceFactorProviding> _installedProvider;
    id<TRINamespaceFactorProviding> _rolloutProvider;
    id<TRINamespaceFactorProviding> _experimentProvider;
    id<TRINamespaceFactorProviding> _devOverrideProvider;
    id<TRINamespaceFactorProviding> _bmltProvider;
    NSDictionary *_aliasMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)factorProviderWithPaths:(id)a0 namespaceName:(id)a1 excludingTreatmentLayers:(unsigned long long)a2;
+ (id)factorProviderWithPaths:(id)a0 namespaceName:(id)a1 resolver:(id)a2;
+ (id)factorProviderWithPaths:(id)a0 namespaceName:(id)a1;

- (BOOL)isRegistered;
- (id)experimentId;
- (id)treatmentId;
- (id)factorNamesWithObfuscation:(id)a0;
- (id)providerForTreatmentLayer:(unsigned long long)a0;
- (id)_dealiasedFactorLevelForFactorLevel:(id)a0 unaliasedName:(id)a1;
- (int)deploymentId;
- (unsigned int)namespaceCompatibilityVersion;
- (id)namespaceName;
- (void)dispose;
- (id)levelForFactor:(id)a0;
- (void)cacheFactorLevels;
- (unsigned int)namespaceId;
- (BOOL)hasAnyTreatmentInLayers:(unsigned long long)a0;
- (void)computeTreatmentAssetIndexes:(id *)a0 withAssociatedExperimentIds:(id *)a1 andFactorPackAssetIds:(id *)a2 withAssociatedRolloutDeployments:(id *)a3 withExperimentFactorNames:(id *)a4 andRolloutFactorNames:(id *)a5 forFactors:(id)a6 usingFilter:(id /* block */)a7;
- (id)initWithNamespaceName:(id)a0 typedProviderChain:(id)a1 paths:(id)a2;
- (id)levelForFactor:(id)a0 outProvider:(id *)a1;
- (id)initWithNamespaceName:(id)a0 typedProviderChain:(id)a1 paths:(id)a2 excludingTreatmentLayers:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)rolloutId;
- (id)factorLevels;
- (id)promotableFactorPackId;

@end
