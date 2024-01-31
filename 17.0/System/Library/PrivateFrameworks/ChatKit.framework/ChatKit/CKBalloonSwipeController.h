@class CKBalloonView, UIViewPropertyAnimator, CKTranscriptBalloonCell, CKSwipeActionIndicator;

@interface CKBalloonSwipeController : NSObject

@property (retain, nonatomic) CKBalloonView *balloonView;
@property (weak, nonatomic) CKTranscriptBalloonCell *cell;
@property (retain, nonatomic) UIViewPropertyAnimator *balloonResetAnimator;
@property (retain, nonatomic) CKSwipeActionIndicator *replyIndicator;
@property (nonatomic) double initialBalloonX;
@property (nonatomic) BOOL isGestureCommittedToAction;
@property (nonatomic) double offsetDelta;
@property (copy, nonatomic) id /* block */ onSwipeCompletion;
@property (copy, nonatomic) id /* block */ onSwipeChanged;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)_resetPropertyAnimatorsIfNeeded;
- (void)_beginReplyWithSwipeVelocity:(struct CGPoint { double x0; double x1; })a0;
- (void)_doPulseAnimationWithHaptic:(BOOL)a0;
- (void)_gestureBegan:(id)a0 forCell:(id)a1;
- (void)_gestureChanged:(id)a0 forCell:(id)a1;
- (void)_gestureFinished:(id)a0 forCell:(id)a1;
- (void)_playHaptic;
- (void)_swipeValueChanged:(double)a0;
- (id)initWithBalloonView:(id)a0 forCell:(id)a1 swipeCompletionHandler:(id /* block */)a2 swipeChangedHandler:(id /* block */)a3;
- (double)initialIndicatorX;
- (void)swipeToReplyGestureHandler:(id)a0;

@end
