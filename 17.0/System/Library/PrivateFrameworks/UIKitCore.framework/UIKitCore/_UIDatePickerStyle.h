@interface _UIDatePickerStyle : NSObject

@property (readonly, nonatomic) double horizontalDatePadding;
@property (readonly, nonatomic) double horizontalTimeColumnPadding;
@property (readonly, nonatomic) double horizontalWeekMonthDayPadding;
@property (readonly, nonatomic) double horizontalWeekdayTimePadding;
@property (readonly, nonatomic) double horizontalPaddingForAMPM;
@property (readonly, nonatomic) long long datePickerModalPresentationStyle;
@property (readonly, nonatomic) double overlayPlatterCornerRadius;
@property (readonly, nonatomic) double overlayPlatterInitialScale;
@property (readonly, nonatomic) double overlayPlatterInitialHeight;
@property (readonly, nonatomic) double overlayPlatterDefaultSpacing;
@property (readonly, nonatomic) double overlayPlatterDefaultMargin;
@property (readonly, nonatomic) BOOL overlayPlatterWantsShadowView;
@property (readonly, nonatomic) double inlineDateViewMinimumWidth;
@property (readonly, nonatomic) double inlineTimeViewMinimumWidth;
@property (readonly, nonatomic) double inlineDatePickerMaximumWidth;
@property (readonly, nonatomic) double inlineTimeAndDateSpacing;
@property (readonly, nonatomic) double compactLabelCornerRadius;
@property (readonly, nonatomic) double compactDateLabelPlatterHorizontalPadding;
@property (readonly, nonatomic) double compactDateLabelPlatterVerticalPadding;
@property (readonly, nonatomic) double inlineDatePickerMinimumMargin;

- (void)addSubview:(id)a0 toOverlayBackgroundView:(id)a1;
- (id)createOverlayBackgroundView;
- (struct CGSize { double x0; double x1; })idealLayoutFittingSizeForDatePickerMode:(long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })maximumWidthOverhangForProposedLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
