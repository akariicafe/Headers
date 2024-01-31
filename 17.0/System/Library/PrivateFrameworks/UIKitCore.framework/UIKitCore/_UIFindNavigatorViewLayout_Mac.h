@class UIStackView, UISwitch, UISegmentedControl, UIView, NSLayoutConstraint;

@interface _UIFindNavigatorViewLayout_Mac : _UIFindNavigatorViewLayout {
    UIStackView *_verticalStackView;
    UIStackView *_findStackView;
    UIStackView *_replaceStackView;
    UIStackView *_firstLineControlsStackView;
    UIStackView *_secondLineControlsStackView;
    UIView *_doneButtonSpacer;
    NSLayoutConstraint *_lineEqualWidthsConstraint;
}

@property (retain, nonatomic) UISwitch *replaceToggleSwitch;
@property (retain, nonatomic) UISegmentedControl *nextPreviousSegmentedControl;
@property (retain, nonatomic) UISegmentedControl *replaceReplaceAllSegmentedControl;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)prepareForLayout;
- (void)setReplaceFieldVisible:(BOOL)a0;
- (BOOL)showsReplaceInOptionsMenu;

@end
