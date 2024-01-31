@interface CoreIDVPAD.PADInternalClassifier : NSObject {
    void /* unknown type, empty encoding */ classifier;
    void /* unknown type, empty encoding */ gestureStartBlock;
    void /* unknown type, empty encoding */ incorrectGestureDetectedBlock;
    void /* unknown type, empty encoding */ onGesturesFinishedBlock;
    void /* unknown type, empty encoding */ selfieCompletionBlock;
    void /* unknown type, empty encoding */ selfieCompletionBlockAccessSemaphore;
    void /* unknown type, empty encoding */ isClassifierLoading;
    void /* unknown type, empty encoding */ onClassifierLoaded;
}

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

@end
