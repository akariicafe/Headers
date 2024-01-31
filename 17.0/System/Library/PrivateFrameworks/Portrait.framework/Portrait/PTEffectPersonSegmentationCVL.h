@class NSString, PTMetalContext;

@interface PTEffectPersonSegmentationCVL : NSObject <PTEffectPersonSegmentation> {
    PTMetalContext *_metalContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lastNetworkVersion;
+ (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })segmentationSizeForColorSize:(struct CGSize { double x0; double x1; })a0;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0 colorSize:(struct CGSize { double x0; double x1; })a1 sharedResources:(id)a2;
- (id)runPersonSegmentationForPixelBuffer:(struct __CVBuffer { } *)a0;

@end
