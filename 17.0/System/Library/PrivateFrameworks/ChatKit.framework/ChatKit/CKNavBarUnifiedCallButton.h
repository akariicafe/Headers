@class NSArray, UIAction;
@protocol CKNavBarUnifiedCallButtonDelegate;

@interface CKNavBarUnifiedCallButton : UIButton

@property (nonatomic) long long buttonStyle;
@property (nonatomic, getter=isFaceTimeVideoAvailable) BOOL faceTimeVideoAvailable;
@property (nonatomic, getter=isFaceTimeAudioAvailable) BOOL faceTimeAudioAvailable;
@property (nonatomic, getter=isTelephonyAvailable) BOOL telephonyCallAvailable;
@property (nonatomic) BOOL joinPillShouldDisableLabel;
@property (retain, nonatomic) UIAction *faceTimeVideoAction;
@property (retain, nonatomic) UIAction *faceTimeJoinWithVideoAction;
@property (retain, nonatomic) UIAction *faceTimeAudioAction;
@property (retain, nonatomic) UIAction *faceTimeJoinWithAudioAction;
@property (retain, nonatomic) UIAction *telephonyCallAction;
@property (retain, nonatomic) UIAction *openJoinedCallAction;
@property (retain, nonatomic) UIAction *leaveJoinedCallAction;
@property (weak, nonatomic) id<CKNavBarUnifiedCallButtonDelegate> delegate;
@property (retain, nonatomic) NSArray *overrideAudioCallActions;

- (void)_localeDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_backgroundColorForCurrentStyle;
- (void)_configureInsetsForCurrentState;
- (id)_actionsForCurrentStyle;
- (id)_axLabelForCurrentStyle;
- (double)_bottomMarginForCurrentState;
- (void)_configureActionsForCurrentState;
- (void)_configureFrameForCurrentState;
- (double)_cornerRadiusForCurrentStyle;
- (double)_currentLabelPreferredWidth;
- (double)_imageToTextSpacingForCurrentState;
- (BOOL)_isStyledForJoinableCall;
- (BOOL)_isStyledForJoinedCall;
- (id)_joinCallActions;
- (double)_leadingMarginForCurrentState;
- (double)_minimumFontScaleFactorForCurrentStyle;
- (BOOL)_shouldEnableAdjustFontSizeForCurrentStyle;
- (id)_startCallActions;
- (id)_targetImageForCurrentFlags;
- (id)_tintColorForCurrentStyle;
- (id)_titleColorForCurrentStyle;
- (id)_titleForCurrentStyle;
- (id)_titleLabelFontForCurrentStyle;
- (double)_topMarginForCurrentState;
- (double)_trailingMarginForCurrentState;
- (void)_updateForCurrentState;
- (void)applyWolfConstraints;
- (BOOL)shouldUseJoinPillWithLabel;
- (void)updateWithStyle:(long long)a0 availabilityForVideo:(BOOL)a1 audio:(BOOL)a2 telephony:(BOOL)a3;

@end
