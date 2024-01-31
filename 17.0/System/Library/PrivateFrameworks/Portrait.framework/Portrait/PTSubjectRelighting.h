@class NSDictionary, SRLv2Plist;
@protocol MTLComputePipelineState, MTLBuffer;

@interface PTSubjectRelighting : NSObject {
    id<MTLComputePipelineState> _srlV2GlobalHistogramLivePhotos;
    id<MTLComputePipelineState> _srlV2FaceHistogramLivePhotos;
    id<MTLComputePipelineState> _srlV2CalcCoefficientsLivePhotos;
    id<MTLBuffer> _srlV2GlobalStatsBuffer;
    id<MTLBuffer> _srlV2FaceStatsBuffer;
    id<MTLBuffer> _srlV2CoeffsBuffer;
    SRLv2Plist *_srlV2Plist;
    NSDictionary *_plistSRL;
    struct SubjectRelightingV2FaceParams { void /* unknown type, empty encoding */ origin; void /* unknown type, empty encoding */ size; float sT[6]; float orientation; } _faceParams[4];
}

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0 effectUtil:(id)a1 util:(id)a2 prewarmOnly:(BOOL)a3;
- (int)runSRLForLivePhotosWithInputBuffer:(id)a0 lumaTexture:(id)a1 chromaTexture:(id)a2 skinMaskTexture:(id)a3 personMaskTexture:(id)a4 skinToneClassification:(id)a5 validROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 expBias:(float)a7 faceExpRatio:(float)a8 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a9;
- (id)samplePosDebug;
- (id)srlV2CoeffsBuffer;

@end
