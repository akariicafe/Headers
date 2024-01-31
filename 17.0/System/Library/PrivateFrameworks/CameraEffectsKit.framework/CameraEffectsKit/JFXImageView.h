@class JTImage, UIView;

@interface JFXImageView : UIView

@property (nonatomic) long long currentImageViewType;
@property (retain, nonatomic) UIView *imageView;
@property (retain, nonatomic) JTImage *jtImage;
@property (nonatomic) long long imageViewType;
@property (nonatomic) BOOL preferIOSurfaceForYUV;
@property (nonatomic) BOOL preferMetalKit;
@property (nonatomic) BOOL enableDebugDrawing;
@property (nonatomic) BOOL disableIOSurface;
@property (nonatomic) BOOL disableMetalKit;

+ (id)colorFromImageViewType:(long long)a0;
+ (id)colorFromRenderingType:(long long)a0;
+ (BOOL)normalizedQuadVertices:(struct { struct { } x0[4]; } *)a0 viewSize:(struct CGSize { double x0; double x1; })a1 textureSize:(struct CGSize { double x0; double x1; })a2 contentMode:(long long)a3;

- (void)setContentMode:(long long)a0;
- (void)flipX;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateDebugDrawing;
- (id)initWithCoder:(id)a0;
- (void)JFXImageView_commonInit;
- (long long)preferredImageViewTypeForImage:(id)a0;
- (void)reconfigureImageView;
- (id)stringFromImageViewType:(long long)a0;
- (void)updateImageViewImage;

@end
