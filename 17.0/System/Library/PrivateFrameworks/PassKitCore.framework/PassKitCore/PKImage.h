@class NSData;

@interface PKImage : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _shouldTile;
    BOOL _shouldStretch;
    struct PKEdgeInsets { double top; double left; double bottom; double right; } _capInsets;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) struct CGImage { } *imageRef;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) long long orientation;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) BOOL tiles;
@property (readonly, nonatomic) BOOL stretches;
@property (readonly, nonatomic) struct PKEdgeInsets { double x0; double x1; double x2; double x3; } capInsets;

+ (id)imageNamed:(id)a0 inBundle:(id)a1;
+ (id)URLForImageNamed:(id)a0 inBundle:(id)a1 scale:(double *)a2;
+ (id)URLForImageNamed:(id)a0 inBundle:(id)a1 scale:(double *)a2 preferredScreenScale:(double)a3 suffix:(id)a4;
+ (id)hashOfImageNamed:(id)a0 inBundle:(id)a1;
+ (id)imageNamed:(id)a0 inBundle:(id)a1 screenScale:(double)a2 suffix:(id)a3;
+ (id)newImageNamed:(id)a0 inBundle:(id)a1;
+ (id)newImageNamed:(id)a0 inBundle:(id)a1 screenScale:(double)a2 suffix:(id)a3;
+ (id)passesImageNamed:(id)a0;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isTiledWhenStretchedToSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithData:(id)a0 scale:(double)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(long long)a2;
- (id)imageHash;
- (BOOL)isEqualToImage:(id)a0;
- (void)_queue_createImageRefIfNecessary;
- (id)blurredImageWithRadius:(unsigned long long)a0 constraints:(id)a1;
- (id)croppedImageWithInsets:(struct PKEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct CGSize { double x0; double x1; })downscaleSizeMatchingScale:(double)a0;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1 withBlendMode:(int)a2 alpha:(double)a3;
- (id)imageWithoutCapInsets;
- (void)preheatBitmapData;
- (id)resizableImageByStretchingWithCapInsets:(struct PKEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)resizableImageByTilingCenterPixel;
- (id)resizableImageByTilingWithCapInsets:(struct PKEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)resizedImageWithConstraints:(id)a0;

@end
