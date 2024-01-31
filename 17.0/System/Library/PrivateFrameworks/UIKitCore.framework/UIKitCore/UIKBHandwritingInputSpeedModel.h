@class NSMutableArray;

@interface UIKBHandwritingInputSpeedModel : NSObject {
    NSMutableArray *_recordedIntervals;
    NSMutableArray *_recordedSpeeds;
    double _lastStrokeTimeStamp;
    double _lastTouchTimeStamp;
    struct CGPoint { double x; double y; } _lastTouchLocation;
    NSMutableArray *_pointsCurrentStroke;
    BOOL _duringStroke;
}

@property (readonly, nonatomic) BOOL autoConfirmationEnabled;
@property (readonly, nonatomic) double minTimeout;
@property (readonly, nonatomic) double maxTimeout;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } handwritingFrame;

- (id)init;
- (void).cxx_destruct;
- (void)addPoint:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1;
- (void)beginStroke;
- (void)endCharacter;
- (void)endStroke;
- (double)smoothValueFromArray:(id)a0;
- (double)speedForCurrentStroke;
- (double)timeoutForNextPage;
- (void)updatePreferences;

@end
