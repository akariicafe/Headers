@class NSArray, NSMutableDictionary, PTHandGestureDetector;

@interface PTEffectReactionProvider : NSObject <PTHandGestureDelegate> {
    NSMutableDictionary *_personIdentifierToPerson;
    PTHandGestureDetector *_gestureDetector;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastFrameTimeStamp;
}

@property (retain) NSArray *latestGestures;
@property (retain) NSArray *latestReactions;
@property (nonatomic) float gestureDetectionFPS;

- (void).cxx_destruct;
- (void)gesturesAvailable:(id)a0 forTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithFrameSize:(struct CGSize { double x0; double x1; })a0 sharedResources:(id)a1 asyncInitQueue:(id)a2 externalHandDetectionsEnabled:(BOOL)a3;
- (BOOL)runGestureDetectionForTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)updateWithFrame:(struct __CVBuffer { } *)a0 withTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 withRotationDegrees:(int)a2 withDetectedHands:(id)a3 withDetectedFaces:(id)a4;

@end
