@class UIView, UIScrollView, CCUISensorAttributionPrivacyHeaderView, UITapGestureRecognizer, NSSet, NSArray, CCUISensorAttributionSensorButton, MTMaterialView, CCUISensorAttributionCompactControl;
@protocol CCUIHeaderPocketViewSensorAttributionDelegate;

@interface CCUISensorAttributionExpandedViewController : UIViewController {
    BOOL _prepared;
}

@property (retain, nonatomic) UITapGestureRecognizer *dismissTapGestureRecognizer;
@property (retain, nonatomic) MTMaterialView *materialView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) CCUISensorAttributionCompactControl *clonedCompactControl;
@property (retain, nonatomic) CCUISensorAttributionPrivacyHeaderView *privacyHeaderView;
@property (nonatomic) double firstRowYOffset;
@property (retain, nonatomic) NSSet *activeAndRecentSensorActivityData;
@property (retain, nonatomic) NSArray *entityAndWebsiteViews;
@property (retain, nonatomic) NSArray *separatorViews;
@property (retain, nonatomic) CCUISensorAttributionSensorButton *topMostCameraButton;
@property (retain, nonatomic) CCUISensorAttributionSensorButton *topMostMicButton;
@property (retain, nonatomic) CCUISensorAttributionSensorButton *topMostLocButton;
@property (retain, nonatomic) NSArray *subsequentSensorButtons;
@property (weak, nonatomic) id<CCUIHeaderPocketViewSensorAttributionDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;

- (void)_animateSeparatorViews:(BOOL)a0;
- (void)_applyCompactAlphaForSensorButton:(id)a0 isTopMost:(BOOL)a1;
- (void)_cachePrivacyHeaderExpandedLayout;
- (void)setExpanded:(BOOL)a0 animated:(BOOL)a1;
- (void)_animateTopmostSensorButton:(id)a0 toExpanded:(BOOL)a1;
- (void)_showClonedCompactControl:(id)a0;
- (void)_animateBackgroundBlurWeighting:(BOOL)a0;
- (void)_applyAlphaAndStylingToEntityOrWebsiteView:(id)a0 expanded:(BOOL)a1;
- (void)viewDidLoad;
- (void)_applyCompactAppearanceToAllViews;
- (void)_applyCompactLayoutToSensorButton:(id)a0;
- (void)_applySeparatorAlphaExpanded:(BOOL)a0;
- (void)_removeClonedCompactPillViewAndNotifyDelegate;
- (void)_applyAlphaAndBlurToFirstEntityViewExpanded:(BOOL)a0;
- (void)_applyPrivacyHeaderLayoutExpanded:(BOOL)a0;
- (BOOL)_cacheTopmostSensorButtonIfNotAlreadySet:(id)a0 sensorData:(id)a1;
- (void)_animateAllSensorButtonsForExpanded:(BOOL)a0;
- (void)_applyPrivacyHeaderAlphaAndBlurRadius:(BOOL)a0;
- (void)recognizedDismissTapGesture:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)_animateEntityAndWebsiteViews:(BOOL)a0;
- (void).cxx_destruct;
- (void)_clonedPillButtonPressed:(id)a0;
- (void)_applyAlphaAndBlurToSubsequentEntityAndWebsiteViewsExpanded:(BOOL)a0;
- (void)_applyLayoutOfEntityAndWebsiteViewsExpanded:(BOOL)a0;
- (void)_animatePrivacyHeader:(BOOL)a0;
- (void)_animateSubsequentSensorIcon:(id)a0 toExpanded:(BOOL)a1;
- (void)_recreateViewsForAttributionsAndCacheExpandedFrames;
- (id)_makeHeaderSeparatorView;
- (void)_reduceMotionSetExpanded:(BOOL)a0 animated:(BOOL)a1;
- (id)_topMostButtons;
- (BOOL)isExpanded;
- (id)_iconInCompactViewForSensorType:(unsigned long long)a0;
- (void)_reduceMotionPrepareForPresentation;
- (void)_animateCompactControlAlpha:(BOOL)a0;
- (void)_applySeparatorsLayoutExpanded:(BOOL)a0;
- (void)prepareForInteractionWithClonedCompactControl:(id)a0;
- (void)sensorAttributionsChanged:(id)a0;

@end
