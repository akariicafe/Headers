@class NSString, NSArray, SBFluidSwitcherItemContainerFooterView, SBHomeGrabberRotationView, SBAppSwitcherSettings, CAShapeLayer, SBFTouchPassThroughView, SBFluidSwitcherIconOverlayView, SBSwitcherShelfViewController;
@protocol SBFluidSwitcherSpaceOverlayAccessoryViewDelegate;

@interface SBFluidSwitcherSpaceOverlayAccessoryView : SBFTouchPassThroughClippingView <SBFluidSwitcherItemContainerFooterViewDelegate> {
    SBFTouchPassThroughView *_contentView;
    SBAppSwitcherSettings *_settings;
    SBFluidSwitcherItemContainerFooterView *_footerView;
    CAShapeLayer *_focusIndicatorLayer;
    SBFluidSwitcherIconOverlayView *_iconOverlayView;
}

@property (readonly, weak, nonatomic) id<SBFluidSwitcherSpaceOverlayAccessoryViewDelegate> delegate;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) double contentScale;
@property (retain, nonatomic) SBHomeGrabberRotationView *homeGrabberView;
@property (nonatomic) BOOL drawsFocusIndicator;
@property (nonatomic) BOOL drawsFooter;
@property (nonatomic) BOOL uniqueIconsOnly;
@property (nonatomic) BOOL wantsPointerInteractions;
@property (nonatomic) double iconHitTestOutset;
@property (nonatomic) unsigned long long iconAlignment;
@property (nonatomic) double titleAndIconOpacity;
@property (nonatomic) double titleOpacity;
@property (nonatomic) unsigned long long footerStyle;
@property (nonatomic) unsigned long long multiWindowIndicatorRoleMask;
@property (copy, nonatomic) NSArray *titleItems;
@property (retain, nonatomic) SBSwitcherShelfViewController *shelfViewController;
@property (nonatomic) double contentViewScale;
@property (nonatomic) struct CGPoint { double x; double y; } contentViewOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_updateFooterVisibility;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)prepareForReuse;
- (void)_updateFooterAnimated:(BOOL)a0;
- (void)itemContainerFooterView:(id)a0 didSelectTitleItem:(id)a1;
- (void)_configureDebugBorder;
- (void)removeIconOverlay;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (double)_inverseContentScale;
- (void)_updateContentViewLayout;
- (void)_updateFocusIndicator;
- (void)setTitleItems:(id)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void)configureOverlayForIconZoomWithView:(id)a0 crossfadeViews:(id)a1;

@end
