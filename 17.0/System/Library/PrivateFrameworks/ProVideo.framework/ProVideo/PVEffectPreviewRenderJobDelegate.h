@class PVEffect, NSString, PVRendererBase, PVVideoCompositingContext;

@interface PVEffectPreviewRenderJobDelegate : NSObject <PVRenderJobDelegate> {
    PVEffect *m_effect;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } m_time;
    struct CGImage { } *m_input;
    struct HGRef<HGNode> { struct HGNode *m_Obj; } m_inputHGNode;
    struct CGSize { double width; double height; } m_outputSize;
    id /* block */ m_completionHandler;
    PVRendererBase *m_pvRenderer;
    struct HGRef<HGCVBitmap> { struct HGCVBitmap *m_Obj; } m_outputCVBitmap;
    struct PVImageProperties { unsigned int cvPixelFormat; int bitsPerPixel; unsigned int alphaInfo; struct CGColorSpace *cgColorSpaceRef; } m_imageCreationProperties;
}

@property (readonly) unsigned int jobTypeTag;
@property (readonly) PVVideoCompositingContext *videoCompositingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)cleanupCaches;
+ (unsigned int)jobTypeTag;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGImage { } *)_makeResultImage;
- (void)_setupInputHGNode:(const void *)a0 frameStats:(void *)a1;
- (void)buildGraph:(void *)a0 renderContext:(const void *)a1 frameStats:(void *)a2;
- (void)finishCancelledJob;
- (void)finishCompletedJob;
- (id)initWEffect:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 inputImage:(struct CGImage { } *)a2 outputSize:(struct CGSize { double x0; double x1; })a3 completionHandler:(id /* block */)a4 pvRenderer:(id)a5;
- (int)jobPriority;
- (unsigned long long)packedFamilyCode;
- (void)renderJobFinished:(struct HGRef<PVRenderJob> { struct PVRenderJob *x0; })a0;
- (int)renderThreadPriority;
- (void)setupDestinationBuffers:(void *)a0 renderContext:(const void *)a1 frameStats:(void *)a2;

@end
