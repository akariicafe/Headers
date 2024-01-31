@class NSMutableDictionary, NSDictionary, VGFrameSelector, VGFaceCaptureOptions;

@interface VGFaceFittingFrameSelector : NSObject {
    VGFrameSelector *_yawSelector;
    VGFrameSelector *_pitchSelector;
    NSMutableDictionary *_expressionsSelector;
    BOOL _selectionCompleted;
    unsigned long long _frameCount;
    NSDictionary *_facekitSemantics;
    VGFaceCaptureOptions *_options;
}

- (id)finish;
- (id)currentState;
- (void).cxx_destruct;
- (id)enrolledPoses;
- (float)_calculateFacePitchWithRotationMatrix:(const void *)a0;
- (float)_calculateFaceYawWithRotationMatrix:(const void *)a0;
- (id)addPoseWithCaptureData:(id)a0 tracking:(id)a1 externalTracking:(BOOL)a2;
- (id)allPoseSelectors;
- (id)expressionSelectors;
- (id)finishAndWriteToPath:(id)a0;
- (id)initWithOptions:(id)a0 faceKitSemantics:(struct __CFDictionary { } *)a1;
- (id)neutralSelectors;
- (id)posesFromSelectors:(id)a0;
- (BOOL)startFaceExpressionCapture:(unsigned long long)a0;

@end
