@interface UITextNonEditableInteraction : UITextInteraction {
    long long _mode;
}

- (BOOL)_shouldAllowEnforcedTouchTypeForTouch:(id)a0 forGestureRecognizer:(id)a1;
- (void)_performGestureType:(long long)a0 state:(long long)a1 location:(struct CGPoint { double x0; double x1; })a2 locationOfFirstTouch:(struct CGPoint { double x0; double x1; })a3 forTouchType:(long long)a4;
- (BOOL)interaction_gestureRecognizerShouldBegin:(id)a0;
- (id)initWithMode:(long long)a0;
- (void)doubleTapInUneditable:(id)a0;
- (void)toggleSelectionCommands;
- (void)oneFingerTapInUneditableAccelerated:(id)a0;
- (void)_oneFingerTapInUneditableActionAtLocation:(struct CGPoint { double x0; double x1; })a0 textInput:(id)a1 canReplaceText:(BOOL)a2 modifierFlags:(long long)a3;
- (void)_oneFingerTapInUneditableAcceleratedActionAtLocation:(struct CGPoint { double x0; double x1; })a0 textInput:(id)a1 canReplaceText:(BOOL)a2;
- (void)oneFingerTapInUneditable:(id)a0;
- (BOOL)_shouldAllowOneFingerTapInUneditable:(id)a0;

@end
