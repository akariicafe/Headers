@class VCPCoreMLRequest, VCPHandGestureMitigator, VCPCoreMLFeatureProviderGestureVideo;

@interface VCPHandGestureClassifier : NSObject {
    VCPCoreMLFeatureProviderGestureVideo *_featureProvider;
    VCPCoreMLRequest *_gestureCoreMLRequest;
    VCPHandGestureMitigator *_mitigator;
    float _minHandSize;
}

+ (float)enableFlip;
+ (id)twoHandGestureTypes;

- (id)init;
- (void)reset;
- (void).cxx_destruct;
- (id)existingGroupIDs;
- (id)initWithMinHandSize:(float)a0;
- (int)processLeftHand:(id)a0 rightHand:(id)a1 results:(id)a2 resultsFlip:(id)a3 faceRects:(id)a4;
- (int)processPerson:(int)a0 withObservations:(id)a1 andFaceRects:(id)a2;
- (int)rotationInDegrees;
- (void)setHandGestureForHand:(id)a0 withResult:(id)a1 andMapping:(id)a2;
- (void)setRotationInDegrees:(int)a0;

@end
