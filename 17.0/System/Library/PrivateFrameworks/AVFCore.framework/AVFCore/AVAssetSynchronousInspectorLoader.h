@class AVAssetInspector;

@interface AVAssetSynchronousInspectorLoader : AVAssetInspectorLoader {
    AVAssetInspector *_assetInspector;
}

- (BOOL)isExportable;
- (BOOL)isPlayable;
- (id)lyrics;
- (BOOL)isReadable;
- (unsigned long long)hash;
- (void)dealloc;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)assetInspector;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (BOOL)isComposable;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 keysForCollectionKeys:(id)a1 completionHandler:(id /* block */)a2;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)isEqual:(id)a0;
- (id)initWithAssetInspector:(id)a0;

@end
