@class NSDictionary, IHKFeatureVector;

@interface PISliderNetAdjustmentsJob : PISliderNetBaseJob {
    NSDictionary *_adjustments;
    float _similarityScore;
    IHKFeatureVector *_sourceStyleFeatureVector;
    IHKFeatureVector *_sourceContentFeatureVector;
}

- (id)cacheKey;
- (id)result;
- (void).cxx_destruct;
- (void)cleanUp;
- (BOOL)networkProcessingWithResultingPixelBuffer:(struct __CVBuffer { } *)a0 error:(out id *)a1;
- (BOOL)prepare:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;

@end
