@class NSMutableIndexSet, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PXGAssetImageCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableIndexSet *_activeRequestIDs;
    NSMutableSet *_activeAssets;
    NSMutableArray *_entries;
    NSMutableArray *_reusableEntries;
}

- (id)init;
- (BOOL)getCachedImage:(struct CGImage **)a0 withOrientation:(unsigned int *)a1 outIsDegraded:(BOOL *)a2 forAsset:(id)a3 targetSize:(struct CGSize { double x0; double x1; })a4 contentMode:(long long)a5 forRequestID:(int)a6;
- (void)_cacheImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1 isDegraded:(BOOL)a2 forRequestID:(int)a3 outCGImage:(out struct CGImage **)a4;
- (void)clearCachedImagesForRequestIDs:(id)a0;
- (id)description;
- (struct CGImage { } *)cacheCGImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1 isDegraded:(BOOL)a2 forRequestID:(int)a3;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)clearAllCachedImages;

@end
