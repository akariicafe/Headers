@interface LAUITextField : UITextField

@property (nonatomic) BOOL shouldHideSelectionRects;
@property (nonatomic) BOOL shouldHideEditMenu;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)a0;
- (id)selectionRectsForRange:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;

@end
