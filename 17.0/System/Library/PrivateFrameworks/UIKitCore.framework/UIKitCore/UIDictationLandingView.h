@class NSString, CADisplayLink, UITextRange, NSOperation;
@protocol UITextCursorAssertion;

@interface UIDictationLandingView : UIView <_UIBasicAnimationFactory> {
    UITextRange *_range;
    id _placeholder;
    BOOL _didHaveText;
    double _angle;
    double _diameter;
    CADisplayLink *_displayLink;
    double _startTime;
    double _shrinkStartTime;
    BOOL _shrinking;
    NSOperation *_afterShrinkCompletionInvocation;
}

@property (nonatomic) BOOL didSkipLanding;
@property (retain, nonatomic) id<UITextCursorAssertion> hideCursorAssertion;
@property (nonatomic) BOOL willInsertResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (double)diameterForLineHeight:(double)a0;
+ (double)widthForLineHeight:(double)a0;
+ (long long)fallbackPlaceholderLength;
+ (id)activeInstance;

- (id)_timingFunctionForAnimation;
- (void)dealloc;
- (void)rotateBy:(double)a0;
- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (double)fadeOutDuration;
- (void)advanceLanding:(id)a0;
- (id)_currentTextInputView;
- (void)_invalidatDisplayLink;
- (BOOL)canStopLanding;
- (void)clearRotation;
- (BOOL)delegateWasEmpty;
- (void)errorShakeDidFinish;
- (BOOL)hasActivePlaceholder;
- (void)hideCursor;
- (void)performRemoteSelector:(SEL)a0;
- (void)showCursor;
- (void)shrinkWithCompletion:(id)a0;
- (void)startDisplayLinkIfNecessary;
- (void)startLandingIfNecessary;
- (void)stopLanding;
- (void)stopLandingForError;
- (void)updatePosition;

@end
