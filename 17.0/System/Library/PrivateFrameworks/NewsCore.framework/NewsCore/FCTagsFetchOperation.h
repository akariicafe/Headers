@class NSArray, FCTagRecordSource, FCHeldRecords, FCAssetManager;
@protocol FCTagsFetchOperationDelegate;

@interface FCTagsFetchOperation : FCMultiStepFetchOperation {
    NSArray *_tagIDs;
    FCHeldRecords *_heldTagRecords;
    FCHeldRecords *_heldParentTagRecords;
    FCHeldRecords *_heldChildTagRecords;
    FCTagRecordSource *_tagRecordSource;
    FCAssetManager *_assetManager;
    id<FCTagsFetchOperationDelegate> _delegate;
}

@property (nonatomic) BOOL includeChildren;
@property (nonatomic) BOOL includeParents;
@property BOOL overrideTargetsCachePolicy;
@property unsigned long long targetsCachePolicy;
@property double targetsMaximumCachedAge;
@property BOOL overrideChildrenCachePolicy;
@property unsigned long long childrenCachePolicy;
@property double childrenMaximumCachedAge;

- (void)customizeChildOperation:(id)a0 forFetchStep:(SEL)a1;
- (id)completeFetchOperation;
- (id)fetchTagRecordsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithTagIDs:(id)a0 tagRecordSource:(id)a1 assetManager:(id)a2 delegate:(id)a3;
- (id)fetchChildTagRecordsWithCompletion:(id /* block */)a0;
- (id)fetchParentTagRecordsWithCompletion:(id /* block */)a0;

@end
