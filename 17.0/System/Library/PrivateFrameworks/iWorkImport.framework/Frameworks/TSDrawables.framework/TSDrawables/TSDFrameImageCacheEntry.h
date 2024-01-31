@class TSDFrameSpec;

@interface TSDFrameImageCacheEntry : NSObject {
    struct CGImage *mImages[4];
}

@property (readonly, nonatomic) TSDFrameSpec *frameSpec;
@property (readonly, nonatomic) double assetScale;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) double viewScale;

- (void)dealloc;
- (struct CGImage { } *)newImageForCALayer:(BOOL)a0 mask:(BOOL)a1;
- (void)setImage:(struct CGImage { } *)a0 forCALayer:(BOOL)a1 mask:(BOOL)a2;
- (id)initWithFrame:(id)a0 size:(struct CGSize { double x0; double x1; })a1 viewScale:(double)a2;
- (int)p_cacheIndexForCALayer:(BOOL)a0 mask:(BOOL)a1;

@end
