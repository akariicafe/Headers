@class UILabel, NSString, MPVolumeSlider, NSTimer, UIView, UIImageView, UIActivityIndicatorView, MPAVRoutingTableViewCellSubtitleTextState;
@protocol MPAVRoutingTableViewCellDelegate;

@interface MPAVRoutingTableViewCell : MPAVClippingTableViewCell <MPAVRoutingThemeableCellView> {
    UIImageView *_iconImageView;
    UILabel *_routeNameLabel;
    UILabel *_subtitleTextLabel;
    NSTimer *_subtitleTextUpdateTimer;
    UIActivityIndicatorView *_spinnerView;
    UIImageView *_smartAudioImageView;
    UIImageView *_checkmarkImageView;
    UIImageView *_chevronImageView;
    UIView *_expandTargetView;
}

@property (retain, nonatomic) MPAVRoutingTableViewCellSubtitleTextState *subtitleTextState;
@property (weak, nonatomic) id<MPAVRoutingTableViewCellDelegate> delegate;
@property (nonatomic) BOOL mirroringSwitchVisible;
@property (nonatomic) unsigned long long mirroringStyle;
@property (nonatomic) unsigned long long iconStyle;
@property (nonatomic, getter=isPendingSelection) BOOL pendingSelection;
@property (nonatomic) BOOL isDisplayedAsPicked;
@property (nonatomic) BOOL useSmartAudioCheckmarkStyle;
@property (nonatomic) BOOL provideOwnSeparator;
@property (nonatomic) double subtitleViewAlpha;
@property (retain, nonatomic) MPVolumeSlider *volumeSlider;
@property (nonatomic, getter=isShowingVolumeSlider) BOOL showingVolumeSlider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)titleView;
- (void)_updateAccessory;
- (void)dealloc;
- (void)prepareForReuse;
- (void)setTintColor:(id)a0;
- (id)separatorView;
- (id)_iconImageForRoute:(id)a0;
- (void)setAccessoryType:(long long)a0;
- (id)_iconImageForRoutes:(id)a0;
- (void).cxx_destruct;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)iconView;
- (void)layoutSubviews;
- (id)subtitleView;
- (void)_configureLabel:(id)a0;
- (void)_animateSubtitleLabelToNextAvailableText;
- (id)_batteryTextForRoute:(id)a0;
- (id)_checkmarkAccessibilityLabelForSmartAudio;
- (id)_checkmarkImageForSmartAudio;
- (id)_checkmarkImageNameForSmartAudio;
- (void)_configureDetailLabel:(id)a0;
- (id)_pairedDeviceTextForRoute:(id)a0;
- (BOOL)_shouldShowSeparateBatteryPercentagesForBatteryLevel:(id)a0;
- (void)_updateSpinnerColor;
- (void)_updateSubtitleTextLabelForRouteItem:(id)a0;
- (void)didTapToExpand;
- (void)updateForEndpoint:(id)a0 routeItem:(id)a1 inferLocalizedModelName:(BOOL)a2;
- (id)volumeView;

@end
