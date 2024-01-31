@class NSString, NSProgress, NSArray, NSError, PXImportController, NSMutableArray;

@interface PXImportDeleteAction : PXImportConcurrentAction {
    NSArray *_assets;
    NSMutableArray *_removedAssets;
}

@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *sessionUuid;
@property (weak, nonatomic) PXImportController *importController;
@property (nonatomic) BOOL didSucceed;

+ (id)new;

- (id)init;
- (void)dealloc;
- (void)finish;
- (void)start;
- (id)performAction;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithAssets:(id)a0;
- (BOOL)canDeleteAssets;
- (void)_handleDeletionFinished:(id)a0;
- (void)_performMockAction;
- (void)_performRealAction;
- (void)_preAction;
- (void)_startObservingDeleteProgress;
- (void)_stopObservingDeleteProgress;
- (void)didRemoveAssets:(id)a0;
- (void)sendActionProgress:(double)a0;

@end
