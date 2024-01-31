@class NSArray, FCPuzzleTypeRecordSource, FCHeldRecords, FCAssetManager;
@protocol FCPuzzleTypeFetchOperationDelegate, FCContentContext;

@interface FCPuzzleTypeFetchOperation : FCMultiStepFetchOperation

@property (retain, nonatomic) NSArray *puzzleTypeIDs;
@property (retain, nonatomic) FCHeldRecords *heldPuzzleTypeRecords;
@property (retain, nonatomic) FCPuzzleTypeRecordSource *puzzleTypeRecordSource;
@property (retain, nonatomic) FCAssetManager *assetManager;
@property (retain, nonatomic) id<FCContentContext> context;
@property (weak, nonatomic) id<FCPuzzleTypeFetchOperationDelegate> delegate;
@property BOOL overrideTargetsCachePolicy;
@property unsigned long long targetsCachePolicy;
@property double targetsMaximumCachedAge;

- (void)customizeChildOperation:(id)a0 forFetchStep:(SEL)a1;
- (id)completeFetchOperation;
- (id)init;
- (void).cxx_destruct;
- (id)fetchPuzzleTypeRecordsWithCompletion:(id /* block */)a0;
- (id)initWithPuzzleTypeIDs:(id)a0 puzzleTypeRecordSource:(id)a1 assetManager:(id)a2 context:(id)a3 delegate:(id)a4;

@end
