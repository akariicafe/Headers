@class TSDMetalTextureInfo;
@protocol MTLDevice;

@interface TSDMetalEdgeDistanceFieldMorphEffect : NSObject {
    BOOL _didTeardown;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _outgoingTextBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _incomingTextBounds;
    struct { float r; float g; float b; float a; } _outgoingTextColor;
    struct { float r; float g; float b; float a; } _incomingTextColor;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _outgoingTextureEdgeInsetsAdjustmentMatrix;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _incomingTextureEdgeInsetsAdjustmentMatrix;
    struct { double skew; double skewOffset; double scale; } _textureAdjustment;
    BOOL _didSetupTextureAdjustment;
    id<MTLDevice> _metalDevice;
}

@property (readonly, nonatomic) TSDMetalTextureInfo *outgoingTextureInfo;
@property (readonly, nonatomic) TSDMetalTextureInfo *incomingTextureInfo;
@property (nonatomic) BOOL isTextStyleIdenticalExceptSize;

+ (void)didEndWithDevice:(id)a0;
+ (void)willBeginWithDevice:(id)a0 pixelFormat:(unsigned long long)a1 motionBlur:(BOOL)a2 motionBlurIgnoreTextureOpacity:(BOOL)a3;

- (void)dealloc;
- (void)teardown;
- (void).cxx_destruct;
- (void)setupIfNecessary;
- (void)encodeWith:(id)a0 morphPercent:(double)a1 MVPMatrix:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a2 opacity:(double)a3 generateTextureMatrices:(BOOL)a4;
- (void)encodeWith:(id)a0 morphPercent:(double)a1 MVPMatrix:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a2 opacity:(double)a3 outgoingTextureMatrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 incomingTextureMatrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a5;
- (id)initWithOutgoingTR:(id)a0 incomingTR:(id)a1 metalContext:(id)a2 motionBlur:(BOOL)a3 motionBlurIgnoreTextureOpacity:(BOOL)a4 capabilities:(id)a5;
- (id)initWithOutgoingTextureName:(id)a0 outgoingTextureSize:(struct CGSize { double x0; double x1; })a1 outgoingTextBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 outgoingColor:(struct { float x0; float x1; float x2; float x3; })a3 incomingTextureName:(id)a4 incomingTextureSize:(struct CGSize { double x0; double x1; })a5 incomingTextBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 incomingColor:(struct { float x0; float x1; float x2; float x3; })a7 metalContext:(id)a8 motionBlur:(BOOL)a9 motionBlurIgnoreTextureOpacity:(BOOL)a10 capabilities:(id)a11;
- (struct CGContext { } *)newContextFromTexture:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_actualPixelBoundsOfTexturedRectangle:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_affineTransformWithTextureAdjustment:(struct { double x0; double x1; double x2; })a0 textureSize:(struct CGSize { double x0; double x1; })a1;
- (double)p_errorFromApplyingTextureAdjustment:(struct { double x0; double x1; double x2; })a0 toOutgoingScanlineCenters:(struct CGPoint { double x0; double x1; } *)a1 outgoingScanlineZeroes:(struct CGPoint { double x0; double x1; } *)a2 incomingScanlineCenters:(struct CGPoint { double x0; double x1; } *)a3 incomingScanlineZeroes:(struct CGPoint { double x0; double x1; } *)a4 samples:(unsigned long long)a5;
- (double)p_errorFromApplyingTextureAdjustment:(struct { double x0; double x1; double x2; })a0 toOutgoingValue:(double)a1 incomingValue:(double)a2 sample:(unsigned long long)a3 sampleCount:(unsigned long long)a4;
- (BOOL)p_fillScanlineCenters:(struct CGPoint { double x0; double x1; } *)a0 scanlineMinMaxZeroes:(struct CGPoint { double x0; double x1; } *)a1 samples:(unsigned long long)a2 fromTexture:(id)a3 textureSize:(struct CGSize { double x0; double x1; })a4;
- (struct { double x0; double x1; double x2; })textureMatchingTextureAdjustment;

@end
