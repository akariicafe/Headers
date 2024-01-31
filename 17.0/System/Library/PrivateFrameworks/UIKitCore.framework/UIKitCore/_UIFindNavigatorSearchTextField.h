@interface _UIFindNavigatorSearchTextField : UISearchTextField

@property (nonatomic) BOOL keyboardDidAppear;

+ (id)_newlineImageForSize:(struct CGSize { double x0; double x1; })a0 withTraitCollection:(id)a1;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (long long)keyboardAppearance;
- (id)undoManager;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_availableTextRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forEditing:(BOOL)a1 accountForRightView:(BOOL)a2;
- (void)willMoveToWindow:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_availableTextRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forEditing:(BOOL)a1;
- (BOOL)_canResignIfContainsFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rightViewRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_applyRightViewOffsetIfApplicable:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)text;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_baselineLeftViewRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_showsClearButtonWhenNonEmpty:(BOOL)a0;
- (void)layoutSubviews;
- (void)insertNewline;
- (BOOL)_isTextRectWideEnoughForRightView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canResignFirstResponder;
- (BOOL)_delegateShouldScrollToVisibleWhenBecomingFirstResponder;

@end
