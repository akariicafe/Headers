@class NSIndexSet, NSMutableDictionary;

@interface _CPLEngineScopeCache : NSObject {
    NSMutableDictionary *_scopeCache;
    NSMutableDictionary *_scopeByLocalIndex;
    NSMutableDictionary *_scopeByCloudIndex;
    NSMutableDictionary *_scopeByStableIndex;
    NSIndexSet *_validLocalIndexes;
    NSIndexSet *_validCloudIndexes;
}

- (id)init;
- (id)validLocalIndexes;
- (id)validCloudIndexes;
- (id)scopeWithCloudIndex:(long long)a0;
- (void)cacheValidLocalIndexes:(id)a0;
- (id)scopeWithIdentifier:(id)a0;
- (id)scopeWithStableIndex:(long long)a0;
- (void)cacheScope:(id)a0 forScopeStorage:(id)a1;
- (void).cxx_destruct;
- (void)cacheValidCloudIndexes:(id)a0;
- (id)scopeWithLocalIndex:(long long)a0;

@end
