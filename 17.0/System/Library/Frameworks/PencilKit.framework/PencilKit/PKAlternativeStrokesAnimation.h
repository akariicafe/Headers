@class PKShape, NSArray;

@interface PKAlternativeStrokesAnimation : NSObject {
    BOOL _accepted;
    BOOL _forceDone;
    PKShape *_shape;
    NSArray *_strokes;
    double _startTime;
    double _crossFadeStartTime;
    double _fadeDuration;
    double _originalStrokeDimmingFactor;
}

- (void).cxx_destruct;

@end
