@class PTRenderPipeline, NSDate;
@protocol PTRenderState, MTLDevice;

@interface PIPortraitVideoRenderer : NSObject {
    PTRenderPipeline *_renderPipeline;
    id<PTRenderState> _renderState;
}

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) struct { long long width; long long height; } colorSize;
@property (readonly, nonatomic) struct { long long width; long long height; } disparitySize;
@property (readonly, nonatomic) int quality;
@property (readonly, nonatomic) long long debugMode;
@property (nonatomic, getter=isInUse) BOOL inUse;
@property (retain, nonatomic) NSDate *lastUseTime;

+ (void)prewarmRendererForDevice:(id)a0 colorSize:(struct { long long x0; long long x1; })a1 disparitySize:(struct { long long x0; long long x1; })a2 quality:(int)a3 debugMode:(long long)a4 globalRenderingMetadata:(id)a5;
+ (void)renderOnDevice:(id)a0 colorSize:(struct { long long x0; long long x1; })a1 disparitySize:(struct { long long x0; long long x1; })a2 quality:(int)a3 debugMode:(long long)a4 globalRenderingMetadata:(id)a5 usingBlock:(id /* block */)a6;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 colorSize:(struct { long long x0; long long x1; })a1 disparitySize:(struct { long long x0; long long x1; })a2 quality:(int)a3 debugMode:(long long)a4;
- (void)prepareToRenderWithMetadata:(id)a0;

@end
