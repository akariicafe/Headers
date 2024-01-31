@class NSArray, PHAssetDeleteOptions, PHBatchPerformChanges;

@interface PHBatchAssetExpunger : NSObject {
    NSArray *_assets;
    PHAssetDeleteOptions *_deleteOptions;
    PHBatchPerformChanges *_batchPerformChanges;
}

+ (id)batchAssetExpungerWithAssets:(id)a0 deleteOptions:(id)a1 library:(id)a2 topLevelSelector:(SEL)a3;

- (void).cxx_destruct;
- (void)_batchExpungeInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithAssets:(id)a0 deleteOptions:(id)a1 library:(id)a2 batchSize:(unsigned long long)a3;
- (BOOL)performChangesAndWait:(id *)a0;
- (void)performChangesWithCompletionHandler:(id /* block */)a0;

@end
