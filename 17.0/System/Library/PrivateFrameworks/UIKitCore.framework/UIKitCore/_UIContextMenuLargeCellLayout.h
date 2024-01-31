@class UIColor, NSArray, UIHoverStyle, NSString, _UIContextMenuCellContentView, NSLayoutConstraint;

@interface _UIContextMenuLargeCellLayout : NSObject <_UIContextMenuCellLayout>

@property (weak, nonatomic) _UIContextMenuCellContentView *contentView;
@property (retain, nonatomic) NSArray *managedConstraints;
@property (retain, nonatomic) NSLayoutConstraint *topToFirstBaseline;
@property (retain, nonatomic) NSLayoutConstraint *lastBaselineToBottom;
@property (retain, nonatomic) NSLayoutConstraint *leadingToLabelStackViewLeading;
@property (retain, nonatomic) NSLayoutConstraint *decorationViewCenterX;
@property (retain, nonatomic) NSLayoutConstraint *iconViewCenterXToTrailing;
@property (retain, nonatomic) NSLayoutConstraint *labelStackViewTrailingToiconViewCenterX;
@property (retain, nonatomic) NSLayoutConstraint *minHeightConstraint;
@property (readonly, nonatomic) long long layoutSize;
@property (readonly, nonatomic) long long labelTextAlignment;
@property (readonly, nonatomic) unsigned long long labelMaximumNumberOfLines;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } backgroundViewInsets;
@property (readonly, nonatomic) UIColor *preferredContentColorForCurrentState;
@property (readonly, nonatomic) UIColor *preferredBackgroundColorForCurrentState;
@property (readonly, nonatomic) UIHoverStyle *hoverStyle;
@property (readonly, nonatomic) long long focusStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentView:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)preferredIconFontUsingBoldFont:(BOOL)a0;
- (BOOL)_hasTrailingAccessory;
- (void)installConstraints;
- (void)removeConstraints;
- (void)setControlState:(unsigned long long)a0 withAnimationCoordinator:(id)a1;

@end
