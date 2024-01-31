@class NSString, _TtC10CoreIDVPAD21PADInternalClassifier;

@interface _PADClassifier : NSObject <PADClassifier> {
    _TtC10CoreIDVPAD21PADInternalClassifier *_classifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)cancelWithCompletion:(id /* block */)a0;
- (void)enableAccessibilityOptions;
- (void)finishLivenessWithSelfie:(id)a0 performIDMatching:(BOOL)a1 completion:(id /* block */)a2;
- (void)pauseLiveness;
- (void)prepareToResumeLiveness;
- (void)processLivenessFrame:(id)a0 withOptions:(struct PADClassifierFrameOptions { BOOL x0; BOOL x1; BOOL x2; })a1 taOptions:(long long)a2;
- (void)restartLivenessGesture;
- (void)resumeLiveness;
- (void)skipLivenessGesture;
- (void)startLiveness:(id)a0 onGestureStart:(id /* block */)a1 onIncorrectGestureDetected:(id /* block */)a2 onGesturesFinished:(id /* block */)a3;
- (void)startLivenessVideoProcessing:(id)a0 onGestureStart:(id /* block */)a1 onGesturesFinished:(id /* block */)a2;
- (void)finishLivenessWithSelfie:(id)a0 idMatchingFaceprints:(id)a1 completion:(id /* block */)a2;
- (void)processRecordedLivenessFrame:(id)a0 withPRD:(BOOL)a1 FAC:(BOOL)a2;
- (void)skipRecordedLivenessGesture;

@end
