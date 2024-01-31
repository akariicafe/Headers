@class UISelectionFeedbackGenerator, UIControl;
@protocol MPDetailScrubControllerDelegate, MPDetailedScrubbing;

@interface MPDetailScrubController : NSObject {
    BOOL _didBeginTracking;
    BOOL _needsCommit;
    float _accumulatedDelta;
    struct CGPoint { double x; double y; } _previousLocationInView;
    struct CGPoint { double x; double y; } _beginLocationInView;
    struct CGPoint { double x; double y; } _lastCommittedLocationInView;
    float _currentValue;
    UISelectionFeedbackGenerator *_feedbackGenerator;
}

@property (weak, nonatomic) UIControl<MPDetailedScrubbing> *scrubbingControl;
@property (weak, nonatomic) id<MPDetailScrubControllerDelegate> delegate;
@property (nonatomic) double duration;
@property (nonatomic) double scrubbingVerticalRange;
@property (nonatomic) BOOL detailedScrubbingEnabled;
@property (readonly, nonatomic) BOOL durationAllowsForDetailedScrubbing;
@property (readonly, nonatomic) BOOL isTracking;
@property (readonly, nonatomic) long long currentScrubSpeed;

- (void)_endScrubbing;
- (id)init;
- (void)cancelTrackingWithEvent:(id)a0;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (float)_minimumScale;
- (void)_beginScrubbing;
- (void)_commitValue:(float)a0;
- (float)_scaleForIdealValueForVerticalPosition:(double)a0;
- (id)initWithScrubbingControl:(id)a0;
- (float)scaleForVerticalPosition:(double)a0;

@end
