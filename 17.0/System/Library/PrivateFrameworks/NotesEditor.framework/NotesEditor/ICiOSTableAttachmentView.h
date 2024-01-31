@interface ICiOSTableAttachmentView : ICTableAttachmentView

- (id)accessibilityLabel;
- (id)targetForAction:(SEL)a0 withSender:(id)a1;
- (id)accessibilityElements;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setHighlightColor:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (BOOL)isAccessibilityElement;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)viewDidMoveToSuperview;
- (void)setHighlightPatternRegexFinder:(id)a0;
- (id)tableAttachmentViewController;

@end
