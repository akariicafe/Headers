@class UIView, NSString, NSArray, UIImage, UIImageView, NSNumberFormatter, NSMutableDictionary, _UIStaticBatteryView, UILabel;
@protocol UIViewControllerTransitionCoordinator;

@interface BCUIRowView : UIView <MTVisualStylingRequiring, BCUIBatteryDeviceDisplaying> {
    UIImageView *_glyphImageView;
    UILabel *_nameLabel;
    UILabel *_percentChargeLabel;
    NSNumberFormatter *_percentChargeFormatter;
    _UIStaticBatteryView *_batteryView;
    UIView *_separator;
    NSMutableDictionary *_categoriesToVisualStylingProvider;
}

@property (nonatomic, getter=isSeparatorVisible) BOOL separatorVisible;
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

+ (BOOL)isAX3PlusLayoutRequiredForContentSizeCategory:(id)a0;

- (id)init;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (id)_visualStylingProviderForCategory:(long long)a0;
- (void)didMoveToSuperview;
- (id)_lazyPercentChargeFormatter;
- (void)_updateVisualStylingWithProvidersFromStylingProvider:(id)a0;
- (void)_beginAutomaticallyUpdatingVisualStylingForCategory:(long long)a0;
- (void).cxx_destruct;
- (id)_percentChargeString:(long long)a0;
- (void)_stopAutomaticallyUpdatingVisualStylingForCategory:(long long)a0;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_batteryViewFrameforContentSize:(id)a0 percentChargeLabelFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_configureBatteryViewIfNecessary;
- (void)_configureGlyphImageViewIfNecessary;
- (void)_configureNameLabelIfNecessary;
- (void)_configurePercentChargeLabelIfNecessary;
- (void)_configureSeparatorIfNecessary;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_glyphImageViewFrameForContentSizeCategory:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_nameLabelFrameForContentSize:(id)a0 percentChargeLabelFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_percentChargeLabelFrameForContentSizeCategory:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sepatorFrameForContentSize:(id)a0;
- (void)_updateBatteryViewIfNeccessary;
- (void)_updateGlyphImageViewIfNecessary:(id)a0;
- (void)_updateNameLabelIfNecessary:(id)a0;
- (void)_updatePercentChargeLabelIfNecessary:(id)a0;

@end
