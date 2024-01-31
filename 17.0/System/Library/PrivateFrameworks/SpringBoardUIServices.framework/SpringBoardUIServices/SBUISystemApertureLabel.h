@class NSString, UIColor;

@interface SBUISystemApertureLabel : UILabel {
    NSString *_pendingText;
    UIColor *_pendingTextColor;
}

- (void)setText:(id)a0;
- (void).cxx_destruct;
- (void)setTextColor:(id)a0;
- (void)_animateLayer:(id)a0 andSetValueForKeyPath:(id)a1 fromValue:(id)a2 toValue:(id)a3;
- (struct CGSize { double x0; double x1; })_sizeOfLabelWithNewText:(id)a0 fittingSize:(struct CGSize { double x0; double x1; })a1;
- (id)_springAnimationForKeyPath:(id)a0 fromValue:(id)a1 toValue:(id)a2;
- (void)performTextSwapAnimationWithText:(id)a0 textColor:(id)a1 fittingSize:(struct CGSize { double x0; double x1; })a2 sizeWillChangeBlock:(id /* block */)a3 didSetPropertiesBlock:(id /* block */)a4;

@end
