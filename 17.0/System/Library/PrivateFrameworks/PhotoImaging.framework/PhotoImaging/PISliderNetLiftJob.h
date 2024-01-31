@class NSData;

@interface PISliderNetLiftJob : PISliderNetBaseJob {
    NSData *_styleFeatureVectorData;
    NSData *_contentFeatureVectorData;
}

- (id)cacheKey;
- (id)result;
- (void).cxx_destruct;
- (void)cleanUp;
- (BOOL)networkProcessingWithResultingPixelBuffer:(struct __CVBuffer { } *)a0 error:(out id *)a1;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;

@end
