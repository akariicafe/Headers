@class NSString;
@protocol VFXStencilInfo, VFXRERenderTargetInfo;

@interface VFXREDrawCallContextImpl : NSObject <VFXREDrawCallContext>

@property (nonatomic) void *_textureTable;
@property (nonatomic) void *_bufferTable;
@property (nonatomic) void *_samplerTable;
@property (nonatomic) void *_constantTable;
@property (nonatomic) const void *_viewports;
@property (nonatomic) const struct RenderTargetInfo { struct RenderPipelineDescriptorData { unsigned int x0; int x1[8]; int x2; } x0; BOOL x1; unsigned int x2; } *_renderTargetInfo;
@property (readonly, nonatomic) BOOL isDrawingDepthOnly;
@property (readonly, nonatomic) BOOL isDrawingBlur;
@property (readonly, nonatomic) id<VFXRERenderTargetInfo> renderTargetInfo;
@property (readonly, nonatomic) id<VFXStencilInfo> stencilInfo;
@property (readonly, nonatomic) BOOL useDitherFade;
@property (readonly, nonatomic) BOOL renderToCompositeLayer;
@property (readonly, nonatomic) BOOL enableClipping;
@property (readonly, nonatomic) BOOL renderForBlur;
@property (readonly, nonatomic) BOOL enableBreakthrough;
@property (readonly, nonatomic) BOOL enableNearFieldVignetting;
@property (readonly, nonatomic) float fadeOpacity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buffer:(int)a0 :(id)a1 :(long long *)a2 :(long long *)a3;
- (const char *)constantData:(int)a0;
- (BOOL)constantOffsetAndSize:(int)a0 :(id)a1 :(long long *)a2 :(long long *)a3;
- (id)sampler:(int)a0 :(id)a1;
- (void)setLateLatchingPatchHandler:(id /* block */)a0;
- (id)texture:(int)a0 :(id)a1;
- (void)viewports:(const void **)a0 :(long long *)a1;

@end
