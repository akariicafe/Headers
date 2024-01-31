@class NSMutableSet, NSMutableDictionary;

@interface TRIPurgeableConstructs : NSObject

@property (readonly) NSMutableSet *namespaceNamesPurgeableAtNamespaceLevel;
@property (readonly) NSMutableDictionary *eagerPurgeableFactorsByNamespaceName;
@property (readonly) NSMutableDictionary *cacheDeleteableFactorsByNamespaceName;

- (void).cxx_destruct;
- (id)initWithPurgeabilityLevel:(int)a0 purgeableNamespacesProvider:(id)a1 paths:(id)a2;

@end
