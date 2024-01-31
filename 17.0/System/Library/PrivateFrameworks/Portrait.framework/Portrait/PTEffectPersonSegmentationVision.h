@class PTMetalContext, NSString, VNSequenceRequestHandler, VNGeneratePersonSegmentationRequest, VNSession;

@interface PTEffectPersonSegmentationVision : NSObject <PTEffectPersonSegmentation> {
    PTMetalContext *_metalContext;
    VNSession *_visionSession;
    VNSequenceRequestHandler *_visionRequestHandler;
    VNGeneratePersonSegmentationRequest *_personSegmentationRequest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })segmentationSizeForColorSize:(struct CGSize { double x0; double x1; })a0;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0 colorSize:(struct CGSize { double x0; double x1; })a1;
- (id)runPersonSegmentationForPixelBuffer:(struct __CVBuffer { } *)a0;

@end
