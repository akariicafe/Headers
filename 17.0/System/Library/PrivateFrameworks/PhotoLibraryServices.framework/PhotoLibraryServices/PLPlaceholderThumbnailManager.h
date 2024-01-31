@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface PLPlaceholderThumbnailManager : NSObject {
    NSCache *_placeholderDataCache;
    NSCache *_placeholderImageCache;
    NSObject<OS_dispatch_queue> *_isolation;
}

+ (id)sharedManager;

- (id)init;
- (id)placeholderDataForFormat:(unsigned short)a0 photoImageSize:(struct CGSize { double x0; double x1; })a1 width:(int *)a2 height:(int *)a3 bytesPerRow:(int *)a4 dataWidth:(int *)a5 dataHeight:(int *)a6 imageDataOffset:(int *)a7;
- (void).cxx_destruct;
- (id)_cacheKeyForFormat:(id)a0 photoImageSize:(struct CGSize { double x0; double x1; })a1 photoImageColor:(id)a2;
- (id)_placeholderImageWithColor:(id)a0;
- (id)newPlaceholderImageForFormat:(unsigned short)a0 photoImageSize:(struct CGSize { double x0; double x1; })a1;

@end
