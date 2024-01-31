@class UITextGestureTuning;

@interface _UIKeyboardBasedTextSelectionInteraction : _UIKeyboardTextSelectionInteraction

@property (readonly, nonatomic) UITextGestureTuning *gestureTuning;

- (void)_createGestureTuningIfNecessary;
- (id)owner;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)beginOneFingerSelectWithTranslation:(struct CGPoint { double x0; double x1; })a0 executionContext:(id)a1;
- (void)oneFingerForcePan:(id)a0;
- (void)didMoveToView:(id)a0;
- (void)transitionFromBlockMagnifyToBlockSelectWithLocation:(struct CGPoint { double x0; double x1; })a0 viaDrag:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)enclosingScrollViewIsScrolling;
- (void)endOneFingerSelectWithExecutionContext:(id)a0;
- (void)oneFingerForcePress:(id)a0;
- (void)updateOneFingerSelectWithTranslation:(struct CGPoint { double x0; double x1; })a0 executionContext:(id)a1;
- (void)_processGestureForCustomHighlighter:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;

@end
