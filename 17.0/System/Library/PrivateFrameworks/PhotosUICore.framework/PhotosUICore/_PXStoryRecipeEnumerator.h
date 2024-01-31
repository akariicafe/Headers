@class PHPhotoLibrary, NSString, NSMutableDictionary;

@interface _PXStoryRecipeEnumerator : NSObject {
    unsigned long long _batchSize;
    PHPhotoLibrary *_photoLibrary;
    NSString *_scheme;
    NSMutableDictionary *_identifierMap;
}

@property (copy, nonatomic) id /* block */ block;

- (void)_flush;
- (void).cxx_destruct;
- (BOOL)didEnumerateRecipeDisplayAsset:(id)a0 error:(id *)a1;
- (void)didFinishEnumeratingRecipeDisplayAssets;
- (id)initWithBatchSize:(unsigned long long)a0 photoLibrary:(id)a1 scheme:(id)a2 block:(id /* block */)a3;

@end
