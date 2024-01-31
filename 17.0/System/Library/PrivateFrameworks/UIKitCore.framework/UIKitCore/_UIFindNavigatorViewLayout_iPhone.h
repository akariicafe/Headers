@class UIView, NSLayoutConstraint, UIStackView;

@interface _UIFindNavigatorViewLayout_iPhone : _UIFindNavigatorViewLayout {
    UIStackView *_verticalStackView;
    UIStackView *_findStackView;
    UIStackView *_replaceStackView;
    UIStackView *_nextPrevStackView;
    UIView *_nextPrevSpacerView;
    NSLayoutConstraint *_doneSpaceConstraint;
    NSLayoutConstraint *_replaceButtonWidthConstraint;
}

@property (readonly, nonatomic) BOOL usesSmallScreenStyle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferredVerticalStackViewFrame;
- (void)_setAndActivateConstraints;
- (void)prepareForLayout;
- (void)setReplaceFieldVisible:(BOOL)a0;

@end
