@class PTRenderEffectOutput, PTRenderEffectInput;
@protocol PTRenderEffect;

@interface PTRenderEffectContainer : NSObject

@property (retain, nonatomic) id<PTRenderEffect> renderEffect;
@property (retain, nonatomic) PTRenderEffectInput *renderEffectInput;
@property (retain, nonatomic) PTRenderEffectOutput *renderEffectOutput;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0 renderEffect:(id)a1 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (id)initWithMetalContext:(id)a0 rgbaOutputPixelFormat:(unsigned long long)a1 depthOutputPixelFormat:(unsigned long long)a2 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3;

@end
