@class NSArray, NSString;

@interface NCToggleControlPair : UIView <PLContentSizeCategoryAdjusting, MTMaterialGrouping>

@property (readonly, nonatomic) NSArray *toggleControls;
@property (copy, nonatomic) NSString *clearAllText;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *materialGroupNameBase;

- (BOOL)adjustForContentSizeCategoryChange;
- (double)_effectiveValueForMinValue:(double)a0 withFont:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_handleTouchUpInside:(id)a0 withEvent:(id)a1;
- (double)_effectiveInterControlPadding;
- (id)_leadingToggleControl;
- (id)_trailingToggleControl;
- (id)initWithLeadingToggleControl:(id)a0 trailingToggleControl:(id)a1;
- (void)setLeadingControlExpanded:(BOOL)a0 animated:(BOOL)a1;

@end
