@class PTMetalContext;
@protocol MTLComputePipelineState;

@interface PTUtil : NSObject {
    PTMetalContext *_metalContext;
    id<MTLComputePipelineState> _renderDisparity;
    id<MTLComputePipelineState> _kernelCopy;
    id<MTLComputePipelineState> _multiplyTex;
    id<MTLComputePipelineState> _addConstant;
    id<MTLComputePipelineState> _reciprocal;
    id<MTLComputePipelineState> _fillWithColor;
    id<MTLComputePipelineState> _drawTurboLegend;
    id<MTLComputePipelineState> _drawTurboLegendYUV;
    id<MTLComputePipelineState> _gaussianNoise;
    id<MTLComputePipelineState> _sobelFilter;
    id<MTLComputePipelineState> _renderRect;
    id<MTLComputePipelineState> _renderLine;
    id<MTLComputePipelineState> _visualizeCircleUsingRect;
    id<MTLComputePipelineState> _gaussianFilter3x3;
    id<MTLComputePipelineState> _rotateTexture;
}

+ (struct { void /* unknown type, empty encoding */ x0[3]; })adjustIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 fromImageSize:(struct CGSize { double x0; double x1; })a1 toViewPortSize:(struct CGSize { double x0; double x1; })a2;
+ (id)findMipmapLevel:(id)a0 largerThan:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
+ (id)findMipmapLevel:(id)a0 largerThan:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 fromLevel:(int)a2;
+ (int)getRotationDegreesFromAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
+ (struct { void /* unknown type, empty encoding */ x0[4]; })mirrorMatrix4x4OverX:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
+ (int)orientationForTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 size:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
+ (unsigned int)orientationFromTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
+ (unsigned int)orientationFromTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 inverse:(BOOL)a1;
+ (struct { void /* unknown type, empty encoding */ x0[4]; })perspectiveProjectionFieldOfView:(SEL)a0 aspectRatio:(float)a1 depthNearFar:(float)a2 reverseZ:(BOOL)a3;
+ (struct { void /* unknown type, empty encoding */ x0[4]; })perspectiveProjectionFromIntrinsics:(SEL)a0 colorSize:(struct { void /* unknown type, empty encoding */ x0[3]; })a1 depthNearFar:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 reverseZ:(BOOL)a3;
+ (struct { void /* unknown type, empty encoding */ x0[4]; })projectionMatrixForOrientation:(SEL)a0 intrinsics:(int)a1 fromImageSize:(struct { void /* unknown type, empty encoding */ x0[3]; })a2 viewportSize:(struct CGSize { double x0; double x1; })a3 reverseZ:(struct CGSize { double x0; double x1; })a4 depthNearFar:(BOOL)a5;
+ (id)temporaryDirectory:(id)a0;
+ (struct { void /* unknown type, empty encoding */ x0[4]; })transformFromRotation:(SEL)a0 translation:(struct { void /* unknown type, empty encoding */ x0[3]; })a1;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (int)addConstant:(id)a0 inTex:(id)a1 outTex:(id)a2 value:(float)a3;
- (int)gaussianFilter3x3:(id)a0 inRGB:(id)a1 outRGB:(id)a2;
- (int)_drawTurboLegendTick:(id)a0 outTexture:(id)a1 rect:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 maxValue:(float)a3;
- (int)copyTex:(id)a0 inTex:(id)a1 outTex:(id)a2;
- (int)drawTurboLegend:(id)a0 outLuma:(id)a1 outChroma:(id)a2 rect:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a3 maxValue:(float)a4;
- (int)drawTurboLegend:(id)a0 outRGBA:(id)a1 rect:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 maxValue:(float)a3;
- (int)fillWithColor:(SEL)a0 color:(id)a1 outTex:(id)a2;
- (int)gaussianNoise:(id)a0 inNoise:(id)a1 outTex:(id)a2;
- (int)multiplyTex:(id)a0 inTex:(id)a1 outTex:(id)a2 multiplier:(float)a3;
- (int)reciprocalTex:(id)a0 inTex:(id)a1 outTex:(id)a2 epsilon:(float)a3;
- (int)renderDisparity:(id)a0 inDisparity:(id)a1 outYUV:(id)a2 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a3 drawLegend:(BOOL)a4;
- (int)renderLine:(id)a0 line:(SEL)a1 color:(id)a2 outTexture:(id)a3;
- (int)renderRect:(id)a0 rect:(SEL)a1 color:(id)a2 fill:(BOOL)a3 outTexture:(id)a4;
- (void)rotateTexture:(id)a0 inTex:(id)a1 outTex:(id)a2 rotationDegrees:(int)a3;
- (int)sobelFilterSingleChannelColor:(id)a0 input:(id)a1 output:(id)a2 scale:(float)a3;
- (int)visualizeCircleUsingRect:(SEL)a0 center:(id)a1 radius:(float)a2 outTexture:(id)a3;

@end
