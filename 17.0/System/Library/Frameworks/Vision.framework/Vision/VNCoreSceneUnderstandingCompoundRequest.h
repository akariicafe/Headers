@class VNCoreSceneUnderstandingCompoundRequestDetectorConfiguration;

@interface VNCoreSceneUnderstandingCompoundRequest : VNCompoundRequest {
    VNCoreSceneUnderstandingCompoundRequestDetectorConfiguration *_detectorConfiguration;
}

+ (void)_evaluateOriginalVNGenerateObjectnessBasedSaliencyImageRequest:(id)a0 configurations:(id)a1;
+ (void)_evaluateOriginalVNGenerateImageFeaturePrintRequest:(id)a0 configurations:(id)a1;
+ (Class)configurationClass;
+ (void)_evaluateOriginalVN5kJNH3eYuyaLxNpZr5Z7zi:(id)a0 configurations:(id)a1;
+ (void)_evaluateOriginalVNCreateSceneprintRequest:(id)a0 configurations:(id)a1;
+ (void)_evaluateOriginalVNRecognizeObjectsRequest:(id)a0 configurations:(id)a1;
+ (void)_evaluateOriginalVNClassifyJunkImageRequest:(id)a0 configurations:(id)a1;
+ (void)_evaluateOriginalVNSceneClassificationRequest:(id)a0 configurations:(id)a1;
+ (id)compoundRequestsForOriginalRequests:(id)a0 withPerformingContext:(id)a1 error:(id *)a2;
+ (void)_evaluateOriginalVNCreateImageFingerprintsRequest:(id)a0 configurations:(id)a1;
+ (void)_evaluateOriginalVN6Mb1ME89lyW3HpahkEygIG:(id)a0 configurations:(id)a1;
+ (void)_evaluateOriginalVNClassifyImageRequest:(id)a0 configurations:(id)a1;
+ (void)_evaluateOriginalVNClassifyCityNatureImageRequest:(id)a0 configurations:(id)a1;
+ (void)_evaluateOriginalVNGenerateAttentionBasedSaliencyImageRequest:(id)a0 configurations:(id)a1;
+ (void)_evaluateOriginalVNClassifyImageAestheticsRequest:(id)a0 configurations:(id)a1;

- (id)initWithDetectorType:(id)a0 configuration:(id)a1;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (BOOL)allowsCachingOfResults;

@end
