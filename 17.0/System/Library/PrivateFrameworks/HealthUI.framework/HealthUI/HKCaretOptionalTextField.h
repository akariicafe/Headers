@interface HKCaretOptionalTextField : UITextField

@property (nonatomic) BOOL allowsSelection;
@property (nonatomic) BOOL disableActions;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (double)actualMinimumFontSize;

@end
