@class FCPuzzleRecordSource, NSArray, FCPuzzleTypeController, FCHeldRecords, NSDictionary, FCAssetManager;
@protocol FCPuzzleFetchOperationDelegate, FCCoreConfiguration, FCCoreConfigurationManager;

@interface FCPuzzleFetchOperation : FCMultiStepFetchOperation

@property (retain, nonatomic) NSArray *puzzleIDs;
@property (retain, nonatomic) FCHeldRecords *heldPuzzleRecords;
@property (retain, nonatomic) FCPuzzleRecordSource *puzzleRecordSource;
@property (retain, nonatomic) FCAssetManager *assetManager;
@property (weak, nonatomic) id<FCPuzzleFetchOperationDelegate> delegate;
@property (retain, nonatomic) FCPuzzleTypeController *puzzleTypeController;
@property (retain, nonatomic) id<FCCoreConfigurationManager> configurationManager;
@property (retain, nonatomic) NSDictionary *fetchedPuzzleTypes;
@property BOOL overrideTargetsCachePolicy;
@property unsigned long long targetsCachePolicy;
@property double targetsMaximumCachedAge;
@property (copy, nonatomic) id<FCCoreConfiguration> configuration;

- (void)customizeChildOperation:(id)a0 forFetchStep:(SEL)a1;
- (id)completeFetchOperation;
- (id)init;
- (id)fetchConfigWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)determineAppropriateFetchStepsWithCompletion:(id /* block */)a0;
- (id)fetchPuzzleRecordsWithCompletion:(id /* block */)a0;
- (id)initWithPuzzleIDs:(id)a0 puzzleTypeController:(id)a1 puzzleRecordSource:(id)a2 assetManager:(id)a3 configurationManager:(id)a4 delegate:(id)a5;

@end
