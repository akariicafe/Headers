@class MTVisualStylingProvider, NSArray, NSString, UIImage, BCUIChargeRing, UILabel, NSNumberFormatter;
@protocol UIViewControllerTransitionCoordinator;

@interface BCUIRingItemView : UIView <MTVisualStylingRequiring, BCUIBatteryDeviceDisplaying> {
    BCUIChargeRing *_chargeRing;
    UILabel *_chargeLabel;
    NSNumberFormatter *_percentChargeFormatter;
    MTVisualStylingProvider *_visualStylingProvider;
}

@property (nonatomic) long long ringItemViewStyle;
@property (nonatomic) double ringLineWidth;
@property (nonatomic) double ringScale;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long percentCharge;
@property (nonatomic, getter=isCharging) BOOL charging;
@property (nonatomic, getter=isLowCharge) BOOL lowCharge;
@property (nonatomic, getter=isLowPowerModeEnabled) BOOL lowPowerModeEnabled;
@property (retain, nonatomic) UIImage *glyph;
@property (nonatomic) double scaleFactor;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isEmpty) BOOL empty;
@property (weak, nonatomic) id<UIViewControllerTransitionCoordinator> transitionCoordinator;

+ (double)_ringLabelPaddingForContentSizeCategory:(id)a0;
+ (BOOL)isAX1PlusLayoutRequiredForContentSizeCategory:(id)a0;
+ (BOOL)isAX3PlusLayoutRequiredForContentSizeCategory:(id)a0;

- (struct CGSize { double x0; double x1; })_sizeForChargeRingWithStyle:(long long)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withPreferredContentSizeCategory:(id)a2;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)_beginAutomaticallyUpdatingChargeLabelVisualStyling;
- (id)_visualStylingProviderForCategory:(long long)a0;
- (void)_updateFontForChargeLabelForStyle:(long long)a0 andContentSizeCategory:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForChargeRingWithSize:(struct CGSize { double x0; double x1; })a0 chargeLabelSize:(struct CGSize { double x0; double x1; })a1 style:(long long)a2 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 scale:(double)a4;
- (id)_chargeRing;
- (id)_lazyPercentChargeFormatter;
- (BOOL)_isPercentSymbolEnabledForRingItemStyle:(long long)a0 andContentSizeCategory:(id)a1;
- (void)_updateVisualStylingWithProvidersFromStylingProvider:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForChargeLabelWithSize:(struct CGSize { double x0; double x1; })a0 baseLineOffsetFromBoundsTop:(double)a1 chargeRingSize:(struct CGSize { double x0; double x1; })a2 style:(long long)a3 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 scale:(double)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_largestPossibleFrameForChargeLabelGivenBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 chargeRingSize:(struct CGSize { double x0; double x1; })a1 andRingLabelPadding:(double)a2;
- (void)_stopAutomaticallyUpdatingVisualStyling;
- (id)_percentChargeString:(long long)a0;
- (void)layoutSubviews;
- (void)_configureChargeLabelForStyle:(long long)a0;
- (struct CGSize { double x0; double x1; })_sizeForChargeLabel:(id)a0 withStyle:(long long)a1 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 scale:(double)a3;
- (void)didMoveToWindow;

@end
