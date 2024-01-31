@class _UIRoundedRectShadowView, _UIDatePickerStyle, UIView, NSLayoutConstraint, UIDatePicker;

@interface _UIDatePickerOverlayPlatterView : UIView

@property (readonly, nonatomic) _UIRoundedRectShadowView *shadowView;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) UIView *accessoryView;
@property (readonly, nonatomic) UIView *previousContentView;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) NSLayoutConstraint *contentWidthConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *contentHeightConstraint;
@property (readonly, nonatomic) _UIDatePickerStyle *datePickerStyle;
@property (readonly, nonatomic) UIDatePicker *datePicker;
@property (nonatomic) BOOL accessoryViewIgnoresDefaultInsets;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentBounds;

- (void)updateConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)datePickerTransitionAnimation;
- (void)datePickerTransitionCompletion;
- (id)initWithDatePicker:(id)a0 accessoryView:(id)a1;
- (struct CGSize { double x0; double x1; })preferredPlatterSize;
- (void)prepareDatePickerTransitionWithDatePicker:(id)a0;
- (void)replaceDatePicker:(id)a0;

@end
