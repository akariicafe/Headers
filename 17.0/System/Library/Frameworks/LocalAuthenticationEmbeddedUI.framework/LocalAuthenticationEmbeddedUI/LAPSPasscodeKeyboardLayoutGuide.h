@class NSLayoutConstraint;

@interface LAPSPasscodeKeyboardLayoutGuide : UILayoutGuide {
    NSLayoutConstraint *_keyboardLayoutHeightLC;
}

- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (double)_defaultHeightConstant;
- (void)_handleKeyboardFrameChange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_owningViewFrameInWindowCoordinates;
- (void)_setupKeyboardObservers;
- (void)_updateKeyboardLayoutGuide:(id)a0 animated:(BOOL)a1;

@end
