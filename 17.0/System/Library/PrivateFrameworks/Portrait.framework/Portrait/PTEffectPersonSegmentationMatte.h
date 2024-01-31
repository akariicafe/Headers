@class PTMetalContext, PTUtil, PTGuidedFilter, PTMSRResize;
@protocol MTLTexture, PTEffectPersonSegmentation;

@interface PTEffectPersonSegmentationMatte : NSObject {
    PTMetalContext *_metalContext;
    PTUtil *_util;
    PTGuidedFilter *_guidedFilterSegmentation;
    id<MTLTexture> _guideRGBAUpscaleSegmentation;
    id<MTLTexture> _guideRGBACoefficientsSegmentation;
    struct PTEffectPixelBufferDescriptor { struct CGSize { double width; double height; } size; unsigned int pixelFormatType; } _outputDescriptor;
    id<PTEffectPersonSegmentation> _personSegmentation;
    PTMSRResize *_msrColorPyramid;
}

+ (unsigned long long)segmentationType;
+ (struct CGSize { double x0; double x1; })segmentationSizeForColorSize:(struct CGSize { double x0; double x1; })a0;
+ (struct PTEffectPixelBufferDescriptor { struct CGSize { double x0; double x1; } x0; unsigned int x1; })upscaledSegmentationMatteFormatForColorSize:(struct CGSize { double x0; double x1; })a0;

- (void).cxx_destruct;
- (int)runPersonSegmentationToOutPersonSegmentationMatteBuffer:(struct __CVBuffer { } *)a0 inRGBA:(struct __CVBuffer { } *)a1;
- (id)initWithMetalContext:(id)a0 colorSize:(struct CGSize { double x0; double x1; })a1 msrColorPyramid:(id)a2 cvmNetwork:(id)a3 effectQuality:(long long)a4 sharedResources:(id)a5;

@end
