@class NSString;
@protocol TRINamespaceResolving, TRIPaths;

@interface TRIPurgeableFactorPacksEnumerator : NSObject <TRIPurgeableFactorPacksEnumerating> {
    id<TRIPaths> _paths;
    id<TRINamespaceResolving> _namespaceResolver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enumerateExperimentFactorPackPurgeCandidatesFromNamespaceNames:(id)a0 purgeableFactorFilterBlock:(id /* block */)a1 block:(id /* block */)a2;
- (void)enumerateRolloutFactorPackPurgeCandidatesFromNamespaceNames:(id)a0 purgeableFactorFilterBlock:(id /* block */)a1 block:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_enumerateOnDemandFactorsWithIsRollout:(BOOL)a0 namespaceName:(id)a1 block:(id /* block */)a2;
- (id)initWithPaths:(id)a0 namespaceResolver:(id)a1;

@end
