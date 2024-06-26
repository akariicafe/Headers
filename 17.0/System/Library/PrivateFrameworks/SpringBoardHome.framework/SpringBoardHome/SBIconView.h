@class NSDate, UITapGestureRecognizer, SBHIconImageCache, SBFolderIconImageCache, NSMutableArray, SBHRecentsDocumentExtensionProvider, UIFont, SBIconContinuityItem, UIDragInteraction, UIDropInteraction, NSCountedSet, UIColor, UILongPressGestureRecognizer, UIViewController, _UILegibilitySettings, SBIcon, NSURL, SBIconFocusEffectPlatterView, SBIconImageCrossfadeView, UIView, SBIconImageView, NSArray, UIFocusEffect, NSString, NSObject, UIContextMenuInteraction, SBCloseBoxView, SBFolderIcon, UIViewPropertyAnimator, NSHashTable, UILabel, SBHIconEditingSettings, UIImage, UIPointerInteraction;
@protocol UIFocusEnvironment, UIFocusItem, SBIconContinuityInfo, UIDragSession, SBIconLabelView, SBIconListLayoutProvider, OS_os_activity, SBIconListLayout, SBIconViewDelegate, SBHIconViewConfigurationInteraction, BSInvalidatable, SBIconAccessoryView, SBIconLabelViewFactory, SBIconLabelAccessoryView, SBIconViewActionDelegate, NSCopying, UIFocusItemContainer, SBIconViewSnapshotProviding, SBIconViewCustomImageViewControlling;

@interface SBIconView : UIView <UIPointerInteractionDelegate, UIDropInteractionDelegate, UIDragInteractionDelegate, _UISettingsKeyObserver, UIGestureRecognizerDelegate, SBCloseBoxViewDelegate, UIContextMenuInteractionDelegate, SBSHardwareButtonEventConsuming, SBHIconViewConfigurationInteractionDelegate, SBIconViewCustomImageViewControllerObserving, SBHFocusProxyable, SBIconObserver, SBReusableView, SBIconAccessoryInfoProvider> {
    SBIcon *_icon;
    SBIconImageView *_iconImageView;
    SBIconImageCrossfadeView *_crossfadeView;
    UIView *_snapshotContainerView;
    UIView *_temporarySnapshotContainerViewForDragPreview;
    UIView<SBIconAccessoryView> *_accessoryView;
    SBCloseBoxView *_closeBox;
    UIView<SBIconLabelView> *_labelView;
    UIView<SBIconLabelAccessoryView> *_labelAccessoryView;
    UIView *_dropGlow;
    SBIconFocusEffectPlatterView *_focusEffectPlatterView;
    SBHIconEditingSettings *_iconEditingSettings;
    UILabel *_iconIndexLabel;
    id<SBIconViewSnapshotProviding> _snapshotProvider;
    unsigned char _drawsLabel : 1;
    unsigned char _isEditing : 1;
    unsigned char _discardClose : 2;
    unsigned char _pauseReasons : 5;
    unsigned char _isGrabbed : 1;
    unsigned char _isOverlapping : 1;
    unsigned char _isFocused : 1;
    unsigned char _refusesRecipientStatus : 1;
    unsigned char _highlighted : 1;
    unsigned char _launchDisabled : 1;
    unsigned char _suppressesDisabledPresentation : 1;
    unsigned char _iconWasTappedWhenDisabled : 1;
    unsigned char _isJittering : 1;
    unsigned char _allowJitter : 1;
    unsigned char _allowCloseBox : 1;
    unsigned char _touchDownInIcon : 1;
    unsigned char _hideLabel : 1;
    unsigned char _hideLabelAccessoryView : 1;
    unsigned char _iconContentScalingEnabled : 1;
    unsigned char _forcingIconContentScalingEnabled : 1;
    unsigned char _startsDragMoreQuickly : 1;
    unsigned char _isDragging : 1;
    unsigned char _isDragLifted : 1;
    unsigned char _folderIconFrozen : 1;
    unsigned char _showingCloseBox : 1;
    unsigned char _allowsAccessoryView : 1;
    unsigned char _allowsProgressState : 1;
    unsigned char _showingAccessoryView : 1;
    unsigned char _allowsLabelArea : 1;
    unsigned char _allowsPassthroughHitTesting : 1;
    unsigned char _showsDropGlow : 1;
    unsigned char _hasSetIconImageInfo : 1;
    unsigned char _showsSquareCorners : 1;
    unsigned char _disableContextMenuInteraction : 1;
    unsigned char _disallowsBlockedForScreenTimeExpiration : 1;
    unsigned char _reallyHasPopover : 2;
    unsigned char _imageLoadingBehavior : 2;
    unsigned char _disallowCursorInteraction : 1;
    unsigned char _customIconImageViewHitTestingDisabled : 1;
    unsigned char _labelStyle : 2;
    unsigned char _allIconElementsButLabelHidden : 1;
    unsigned char _displaysIconStatusInLabel : 1;
    unsigned char _userVisibilityStatus : 2;
    unsigned char _wantsFocusProxyView : 1;
    double _iconContentScale;
    UIView *_scalingContainer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _visibleImageRect;
    NSHashTable *_observers;
    NSCountedSet *_forbidEditingModeReasons;
    NSHashTable *_forbidAccessoryUpdatesAssertions;
    struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } _iconImageInfo;
    SBHRecentsDocumentExtensionProvider *_recentsDocumentExtensionProvider;
    NSMutableArray *_performAfterContextMenuBlocks;
    NSArray *_droppingURLs;
    NSHashTable *_droppingAssertions;
    NSHashTable *_contextMenuInteractionConfigurations;
    NSHashTable *_dismissingContextMenuInteractionConfigurations;
    NSObject<OS_os_activity> *_iconContextMenuActivity;
    struct os_activity_scope_state_s { unsigned long long opaque[2]; } _iconContextMenuActivityState;
    NSCountedSet *_activePointerRegions;
    id<SBIconLabelViewFactory> _iconLabelViewFactory;
}

@property (class, readonly, nonatomic) Class contentContainerViewClass;
@property (class, readonly, copy, nonatomic) NSString *defaultIconLocation;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } defaultIconImageSize;
@property (class, readonly, nonatomic) double defaultIconImageCornerRadius;
@property (class, readonly, nonatomic) BOOL supportsDragInteraction;
@property (class, readonly, nonatomic) BOOL supportsPreviewInteraction;
@property (class, readonly, nonatomic) BOOL supportsTapGesture;
@property (class, readonly, nonatomic) BOOL supportsCursorInteraction;
@property (class, readonly, nonatomic) double iconLiftAlpha;
@property (class, readonly, nonatomic) BOOL allowsLabelAccessoryView;
@property (class, readonly, nonatomic) unsigned long long defaultImageLoadingBehavior;

@property (readonly, nonatomic) UIPointerInteraction *iconViewCursorInteraction;
@property (readonly, nonatomic) UIPointerInteraction *closeBoxCursorInteraction;
@property (readonly, nonatomic) UIPointerInteraction *accessoryViewCursorInteraction;
@property (readonly, nonatomic) UIDropInteraction *dropInteraction;
@property (readonly, nonatomic) UIDragInteraction *dragInteraction;
@property (weak, nonatomic) id<UIDragSession> liftingDragSession;
@property (readonly, nonatomic) UIView *contentContainerView;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (copy, nonatomic) NSDate *lastTouchDownDate;
@property (retain, nonatomic) UIViewPropertyAnimator *accessoryViewAnimator;
@property (nonatomic, getter=isOverlapping) BOOL overlapping;
@property (readonly, nonatomic) long long displayedLabelAccessoryType;
@property (readonly, nonatomic) UILongPressGestureRecognizer *editingModeGestureRecognizer;
@property (readonly, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (retain, nonatomic) id<BSInvalidatable> homeButtonPressConsumingAssertion;
@property (nonatomic) BOOL lastContextMenuInteractionFailedToLoad;
@property (retain, nonatomic) id<SBHIconViewConfigurationInteraction> currentConfigurationInteraction;
@property (retain, nonatomic) id<SBHIconViewConfigurationInteraction> currentStackConfigurationInteraction;
@property (retain, nonatomic) UIViewPropertyAnimator *closeBoxAnimator;
@property (copy, nonatomic) NSArray *fetchedApplicationShortcutItems;
@property (retain, nonatomic) id<SBIconLabelViewFactory> iconLabelViewFactory;
@property (readonly, copy, nonatomic) NSString *representedFolderIconLocation;
@property (readonly, nonatomic) BOOL canBeginDrags;
@property (readonly, nonatomic) BOOL shouldTapGestureRecognizeAlongsideDragInteractionGestures;
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifierForShortcuts;
@property (readonly, copy, nonatomic) NSURL *applicationBundleURLForShortcuts;
@property (readonly, copy, nonatomic) NSArray *effectiveApplicationShortcutItems;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maxLabelSize;
@property (nonatomic) long long labelStyle;
@property (nonatomic) BOOL displaysIconStatusInLabel;
@property (retain, nonatomic) SBIcon *icon;
@property (weak, nonatomic) id<SBIconViewDelegate> delegate;
@property (weak, nonatomic) id<SBIconViewActionDelegate> overrideActionDelegate;
@property (copy, nonatomic) NSString *location;
@property (nonatomic) unsigned long long configurationOptions;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double iconImageAlpha;
@property (readonly, nonatomic) double effectiveIconImageAlpha;
@property (nonatomic) double iconAccessoryAlpha;
@property (nonatomic) double iconLabelAlpha;
@property (nonatomic) BOOL allIconElementsButLabelHidden;
@property (copy, nonatomic) NSArray *applicationShortcutItems;
@property (readonly, nonatomic) UIView *labelAccessoryView;
@property (readonly, nonatomic) BOOL shouldShowLabelAccessoryView;
@property (readonly, nonatomic) BOOL allowsLabelAccessoryView;
@property (readonly, nonatomic) long long currentLabelAccessoryType;
@property (readonly, nonatomic) double labelAccessoryTotalWidth;
@property (nonatomic, getter=isLabelAccessoryHidden) BOOL labelAccessoryHidden;
@property (readonly, nonatomic) double baselineOffsetFromBottom;
@property (readonly, nonatomic) double firstLineBaseline;
@property (readonly, nonatomic) double lastLineBaseline;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) BOOL allowsEditingAnimation;
@property (nonatomic) double editingAnimationStrength;
@property (nonatomic) BOOL allowsCloseBox;
@property (readonly, nonatomic) BOOL canShowCloseBox;
@property (readonly, nonatomic) BOOL shouldShowCloseBox;
@property (readonly, nonatomic, getter=isShowingContextMenu) BOOL showingContextMenu;
@property (nonatomic) BOOL allowsBlockedForScreenTimeExpiration;
@property (readonly, nonatomic) UIImage *iconImageSnapshot;
@property (readonly, nonatomic) UIView *iconImageSnapshotView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } iconImageFrame;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } iconImageCenter;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } iconImageVisibleSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } iconImageSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } iconViewSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } cursorHitTestPadding;
@property (readonly, nonatomic) BOOL isCursorActive;
@property (readonly, nonatomic) BOOL allowsTapWhileEditing;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL allowsLabelArea;
@property (nonatomic) BOOL allowsPassthroughHitTesting;
@property (nonatomic, getter=isCustomIconImageViewHitTestingDisabled) BOOL customIconImageViewHitTestingDisabled;
@property (nonatomic, getter=isLabelHidden) BOOL labelHidden;
@property (nonatomic) BOOL showsSquareCorners;
@property (readonly, nonatomic, getter=isTouchDownInIcon) BOOL touchDownInIcon;
@property (nonatomic, getter=isGrabbed) BOOL grabbed;
@property (readonly, nonatomic, getter=isDropping) BOOL dropping;
@property (nonatomic) BOOL showsImageAndLabelDuringDrop;
@property (readonly, nonatomic) UIView *dropContainerView;
@property (nonatomic) BOOL refusesRecipientStatus;
@property (readonly, nonatomic) BOOL showsDropGlow;
@property (readonly, getter=isCrossfadingImageWithView) BOOL crossfadingImageWithView;
@property (readonly, nonatomic) UIView<SBIconLabelView> *labelView;
@property (retain, nonatomic) UIFont *labelFont;
@property (readonly, nonatomic) long long currentAccessoryType;
@property (nonatomic) BOOL allowsAccessoryView;
@property (readonly, nonatomic) BOOL shouldShowAccessoryView;
@property (readonly, nonatomic) BOOL canShowAccessoryView;
@property (copy, nonatomic) id<NSCopying> overrideBadgeNumberOrString;
@property (readonly, nonatomic) SBIconContinuityItem *continuityItem;
@property (retain, nonatomic) id<SBIconContinuityInfo> continuityInfo;
@property (nonatomic) double iconContentScale;
@property (nonatomic, getter=isIconContentScalingEnabled) BOOL iconContentScalingEnabled;
@property (nonatomic) BOOL startsDragMoreQuickly;
@property (readonly, nonatomic) double dragInteractionLiftDelay;
@property (readonly, nonatomic) BOOL dragsSupportSystemDragsByDefault;
@property (readonly, nonatomic) Class expectedIconImageViewClass;
@property (nonatomic) unsigned long long customIconImageViewControllerPriority;
@property (readonly, nonatomic) UIViewController<SBIconViewCustomImageViewControlling> *customIconImageViewController;
@property (retain, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (readonly, nonatomic) id<SBIconListLayout> listLayout;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } iconImageInfo;
@property (retain, nonatomic) SBHIconImageCache *iconImageCache;
@property (retain, nonatomic) SBFolderIconImageCache *folderIconImageCache;
@property (retain, nonatomic) SBFolderIcon *folderIcon;
@property (nonatomic) unsigned long long folderBackgroundStyle;
@property (retain, nonatomic) UIView *folderIconBackgroundView;
@property (nonatomic, getter=isFolderIconFrozen) BOOL folderIconFrozen;
@property (readonly, nonatomic) unsigned long long visibleMiniIconCount;
@property (readonly, nonatomic) unsigned long long visibleMiniIconListIndex;
@property (readonly, nonatomic) unsigned long long firstVisibleMiniIconIndex;
@property (readonly, nonatomic) unsigned long long centerVisibleMiniIconIndex;
@property (readonly, nonatomic) unsigned long long lastVisibleMiniIconIndex;
@property (readonly, nonatomic, getter=isAnimatingScrolling) BOOL animatingScrolling;
@property (retain, nonatomic) UIColor *accessibilityTintColor;
@property (readonly, nonatomic) long long progressState;
@property (nonatomic) BOOL allowsProgressState;
@property (readonly, nonatomic) BOOL supportsConfigurationCard;
@property (readonly, nonatomic, getter=isShowingConfigurationCard) BOOL showingConfigurationCard;
@property (readonly, nonatomic) BOOL supportsStackConfigurationCard;
@property (readonly, nonatomic, getter=isShowingStackConfigurationCard) BOOL showingStackConfigurationCard;
@property (nonatomic) unsigned long long imageLoadingBehavior;
@property (nonatomic) unsigned long long debugIconIndex;
@property (nonatomic) BOOL iconImageSizeMatchesBoundsSize;
@property (readonly, copy, nonatomic) NSString *backgroundViewGroupNameBase;
@property (nonatomic) unsigned long long userVisibilityStatus;
@property (nonatomic) struct SBIconApproximateLayoutPosition { unsigned long long horizontal; unsigned long long vertical; } approximateLayoutPosition;
@property (readonly, nonatomic) UIView<UIFocusItem> *focusProxyView;
@property (nonatomic) BOOL wantsFocusProxyView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL canBecomeFocused;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, copy, nonatomic) UIFocusEffect *focusEffect;
@property (readonly, nonatomic) long long focusGroupPriority;
@property (readonly, nonatomic) BOOL isTransparentFocusItem;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;

+ (id)_jitterXTranslationAnimationWithStrength:(double)a0;
+ (double)labelAccessoryViewAdditionalRightMarginForType:(long long)a0;
+ (long long)closeBoxTypeForView:(id)a0;
+ (struct CGSize { double x0; double x1; })maxLabelSizeForIconImageSize:(struct CGSize { double x0; double x1; })a0 contentSizeCategory:(id)a1 options:(unsigned long long)a2;
+ (struct CGSize { double x0; double x1; })defaultIconViewSize;
+ (BOOL)_alwaysShowsAccessoryOfType:(long long)a0;
+ (void)activateShortcut:(id)a0 withBundleIdentifier:(id)a1 forIconView:(id)a2;
+ (id)_jitterXTranslationAnimationWithAmount:(double)a0;
+ (Class)defaultViewClassForAccessoryType:(long long)a0;
+ (struct CGSize { double x0; double x1; })maxLabelSizeForListLayout:(id)a0 iconImageSize:(struct CGSize { double x0; double x1; })a1 contentSizeCategory:(id)a2 options:(unsigned long long)a3;
+ (void)configureLabelImageParametersBuilder:(id)a0 forIcon:(id)a1 location:(id)a2;
+ (Class)defaultViewClassForLabelAccessoryType:(long long)a0;
+ (struct CGSize { double x0; double x1; })maxLabelSizeForIconImageSize:(struct CGSize { double x0; double x1; })a0;
+ (double)_labelHeight;
+ (void)setDebugContinuityItem:(id)a0;
+ (id)componentBackgroundViewOfType:(long long)a0 compatibleWithTraitCollection:(id)a1 initialWeighting:(double)a2;
+ (BOOL)isIconTapGestureRecognizer:(id)a0;
+ (struct CGSize { double x0; double x1; })defaultIconViewSizeForIconImageSize:(struct CGSize { double x0; double x1; })a0 configurationOptions:(unsigned long long)a1;
+ (double)defaultIconImageScale;
+ (id)_jitterRotationAnimationWithStrength:(double)a0;
+ (id)draggedItemBundleIdentifiersInDrag:(id)a0;
+ (id)applicationIconMultitaskingMenu;
+ (id)applicationIconSplitViewMenu;
+ (id)labelConfigurationForListLayout:(id)a0 contentSizeCategory:(id)a1 options:(unsigned long long)a2;
+ (id)_jitterYTranslationAnimationWithStrength:(double)a0;
+ (BOOL)_shouldAlwaysHaveContentContainerView;
+ (id)defaultLegibilitySettings;
+ (double)_defaultDragInteractionLiftDelay;
+ (long long)defaultWidgetBackgroundRecipe;
+ (id)groupNameBaseForComponentBackgroundViewOfType:(long long)a0;
+ (id)componentBackgroundViewOfType:(long long)a0;
+ (id)_jitterYTranslationAnimationWithAmount:(double)a0;
+ (double)defaultMaxLabelHeight;
+ (Class)_closeBoxClassForType:(long long)a0;
+ (id)applicationIconStageManagerMenu;
+ (id)dragContextForDragItem:(id)a0;
+ (struct CGPoint { double x0; double x1; })defaultIconImageCenterForIconImageSize:(struct CGSize { double x0; double x1; })a0;
+ (id)applicationShortcutService;
+ (double)labelAccessoryViewBaseRightMargin;
+ (id)_jitterRotationAnimationWithAmount:(double)a0;
+ (id)debugContinuityItem;
+ (id)componentBackgroundView;
+ (double)labelMaximumHeightForContentSizeCategory:(id)a0;
+ (struct CGSize { double x0; double x1; })maxLabelSizeForListLayout:(id)a0 contentSizeCategory:(id)a1 options:(unsigned long long)a2;
+ (id)applicationIconMultitaskingMenus;
+ (id)homeScreenService;
+ (BOOL)showsPopovers;
+ (double)defaultMaxLabelWidthDeltaForContentSizeCategory:(id)a0;

- (double)effectiveOverallAlpha;
- (void)_applyIconEditingSettings;
- (void)_handleMakeFullscreenKeyShortcut:(id)a0;
- (void)_refreshAccessoryViewNotification:(id)a0;
- (id)effectiveListLayoutProvider;
- (void)presentStackConfigurationCard;
- (id)_makeIconImageView;
- (void)_updateLabelArea;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForLabelHighlight;
- (void)_updateIconImageViewAnimated:(BOOL)a0;
- (void)_applyIconContentScale:(double)a0;
- (id)actionDelegate;
- (void)performTap;
- (void)dismissConfigurationCard;
- (void)setContinuityInfo:(id)a0 animated:(BOOL)a1;
- (id)startForbiddingAccessoryUpdatesWithReason:(id)a0 animated:(BOOL)a1;
- (void)_handleTap;
- (BOOL)_selfOrCustomViewCanBecomeFocused;
- (void)_configureIconImageView:(id)a0;
- (void)_createCloseBoxIfNecessary;
- (BOOL)canReceiveGrabbedIcon:(id)a0;
- (BOOL)isContextMenuInteractionActive;
- (void)_createAccessoryViewIfNecessary;
- (void)purgeCachedEditingViewData;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForVisibleImage;
- (void)_startTrackingSupportedMultitaskingShortcutActionsIfAppropriateWithOldIcon:(id)a0;
- (void)_accessoryViewTapGestureChanged:(id)a0;
- (void)_boldTextStatusDidChange:(id)a0;
- (id)reuseDelegate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForImageView;
- (void)addGesturesAndInteractionsIfNecessary;
- (void)dismissContextMenuWithCompletion:(id /* block */)a0;
- (void)setLocation:(id)a0 animated:(BOOL)a1;
- (BOOL)focusProxyCanBecomeFocused;
- (BOOL)_isFolderIconFreezingSupported;
- (BOOL)isDragLifted;
- (void)_updateCustomIconImageViewControllerHitTesting;
- (void)setCustomIconImageViewController:(id)a0;
- (void)iconInteractedWhenDisabled;
- (void)_updateLabelAccessoryView;
- (void)configureMatchingIconView:(id)a0;
- (void)editingModeGestureRecognizerDidFire:(id)a0;
- (void)_destroyAccessoryView;
- (void)configurationInteractionDidCommit:(id)a0;
- (void)_removeJitter;
- (id)badgeParallaxSettings;
- (void)_handleAddWindowToSetCommand:(id)a0;
- (void)_enableContentContainerView;
- (void)_unregisterForAddWidgetRequests;
- (id)recentsDocumentExtensionProvider;
- (void)_applyEditingStateAnimated:(BOOL)a0;
- (void)_applyOverallAlpha:(double)a0;
- (id)claimBindingsForDropSession:(id)a0;
- (void)scrollToFirstGapAnimated:(BOOL)a0;
- (id)pauseReasonsDescriptions;
- (struct CGPoint { double x0; double x1; })_centerForCloseBox;
- (id)matchingIconViewByAddingConfigurationOptions:(unsigned long long)a0 removingConfigurationOptions:(unsigned long long)a1;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (id)containerViewControllerForConfigurationInteraction:(id)a0;
- (void)_dragInteraction:(id)a0 liftAnimationDidChangeDirection:(long long)a1;
- (void)_invalidateHomeButtonPressConsumingAssertion;
- (void)setupFocusEffectPlatterView;
- (id)newCaptureOnlyBackgroundView;
- (BOOL)_hideIconLabelForCustomIconImageViewController;
- (id)dragDelegate;
- (void)_updateJitter;
- (BOOL)disallowCursorInteraction;
- (id)initWithConfigurationOptions:(unsigned long long)a0 listLayoutProvider:(id)a1;
- (id)prepareForIconDrop;
- (id)defaultDragPreview;
- (void)_updateAfterManualIconImageInfoChangeInvalidatingLayout:(BOOL)a0;
- (void)configurationInteractionWillEnd:(id)a0;
- (double)_labelVerticalOffset;
- (void)configureCustomIconImageViewController:(id)a0;
- (id)_folderIconImageView;
- (void)_updateConfigurationForIconImageView:(id)a0;
- (void)dragInteraction:(id)a0 session:(id)a1 willAddItems:(id)a2 forInteraction:(id)a3;
- (void)setPaused:(BOOL)a0 forReason:(unsigned long long)a1;
- (BOOL)shouldActivateApplicationShortcutItem:(id)a0 atIndex:(unsigned long long)a1;
- (id)_labelImageParameters;
- (void)setDisallowCursorInteraction:(BOOL)a0;
- (struct CGSize { double x0; double x1; })iconViewSizeForIconImageSize:(struct CGSize { double x0; double x1; })a0;
- (id)_pointerStyleForAppIcon;
- (id)currentImageView;
- (double)effectiveIconContentScale;
- (id)_visiblyActiveDataSource;
- (BOOL)_shouldShowLabel;
- (BOOL)_isShowingCloseBox;
- (void)dragSession:(id)a0 didEndWithOperation:(unsigned long long)a1;
- (void)setAllowsCloseBox:(BOOL)a0 withAnimation:(long long)a1;
- (double)_labelBaselineOffsetFromImage;
- (void)_backgroundContrastDidChange:(id)a0;
- (id)badgeString;
- (void)configurationInteractionDidEnd:(id)a0;
- (void)setShowsFocusEffect:(BOOL)a0;
- (void)_updateIconContentScale;
- (void)_setShowingAccessoryView:(BOOL)a0;
- (void)_animateCloseBoxWithAnimation:(long long)a0 animationBlock:(id /* block */)a1;
- (void)popStackConfigurationCard;
- (void)prepareToCrossfadeImageWithView:(id)a0 anchorPoint:(struct CGPoint { double x0; double x1; })a1 options:(unsigned long long)a2;
- (id)dragItems;
- (void)_checkAndRemoveCloseBoxAfterAnimation;
- (void)dragSession:(id)a0 willEndWithOperation:(unsigned long long)a1;
- (void)popConfigurationCard;
- (void)tapGestureDidChange:(id)a0;
- (void)setCrossfadeCornerRadius:(double)a0;
- (id)homeScreenContentViewForConfigurationInteraction:(id)a0;
- (void)_contextMenuConfigurationWillDismiss:(id)a0;
- (BOOL)_hasPopover;
- (void)setCrossfadeViewFadeFraction:(double)a0;
- (void)_applyIconAccessoryAlpha:(double)a0;
- (void)_addJitter;
- (void)setIconGridImageAlpha:(double)a0;
- (void)cleanUpAfterDropAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })iconImageVisibleFrame;
- (id)sourceIconViewForConfigurationInteraction:(id)a0;
- (void)setBoundsSizeFromIconImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)setDragging:(BOOL)a0 updateImmediately:(BOOL)a1;
- (id)draggingLaunchURL;
- (id)draggingLaunchActions;
- (long long)draggingStartLocation;
- (double)effectiveBrightness;
- (void)presentConfigurationCard;
- (void)_updateAllComponentAlphasAnimated:(BOOL)a0;
- (id)shortcutsDelegate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_focusEffectBoundsForFocused:(BOOL)a0 withFocusOutset:(double)a1;
- (id)_multitaskingAppShortcutService;
- (BOOL)_delegateTapAllowed;
- (void)performAfterContextMenusDismissUsingBlock:(id /* block */)a0;
- (void)_updateLaunchDisabled;
- (void)dismissStackConfigurationCardImmediately;
- (void)setMorphFraction:(double)a0;
- (long long)_widgetBackgroundMaterialForDataSource:(id)a0;
- (void)_updateCloseBoxWithAnimation:(long long)a0;
- (id)displayedLabelFont;
- (long long)_closeBoxType;
- (void)dragSessionWillBegin:(id)a0;
- (void)earlyTerminateContextMenuDismissAnimation;
- (void)_acquireHomeButtonPressConsumingAssertionIfNecessary;
- (void)_removeUnknownSubviews;
- (void)_toggleContentContainerViewIfNecessary;
- (id)_legibilitySettingsWithStyle:(long long)a0 primaryColor:(id)a1;
- (void)_updateCursorInteractionsEnabled;
- (void)setIconFadeFraction:(double)a0;
- (void)dragInteraction:(id)a0 session:(id)a1 willEndWithOperation:(unsigned long long)a2;
- (void)cleanupAfterCrossfade;
- (BOOL)_dragInteraction:(id)a0 canExcludeCompetingGestureRecognizer:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBoundingRectForConfigurationInteraction:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)setIconImageAndAccessoryAlpha:(double)a0;
- (void)customImageViewControllerWantsLabelHiddenDidChange:(id)a0;
- (void)updateCustomIconImageViewController;
- (void)_setTemporarySnapshotViewForDragPreview:(id)a0;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (BOOL)_hideIconLabelForContextMenu;
- (void)_updateDragInteractionLiftDelay;
- (id)URLsForDropSession:(id)a0;
- (BOOL)_dragInteraction:(id)a0 competingGestureRecognizerShouldDelayLift:(id)a1;
- (void)startForbiddingEditingModeWithReason:(id)a0;
- (id)markAsDropping;
- (void)prepareToCrossfadeImageWithView:(id)a0 options:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_focusEffectBounds;
- (void)_closeBoxTapGestureChanged:(id)a0;
- (id)dropDelegate;
- (id)representativeIconViewForModalInteractions;
- (void)setCrossfadeFraction:(double)a0;
- (void)cancelDrag;
- (void)_handleActivateAppExposeKeyShortcut:(id)a0;
- (void)_configureViewAsFolderIconImageView:(id)a0;
- (BOOL)_isForcingIconContentScalingEnabled;
- (id)behaviorDelegate;
- (void)setTouchDownInIcon:(BOOL)a0;
- (void)_setForcingIconContentScalingEnabled:(BOOL)a0;
- (void)_applyIconLabelAlpha:(double)a0;
- (id)contextMenuInteraction:(id)a0 configuration:(id)a1 dismissalPreviewForItemWithIdentifier:(id)a2;
- (double)effectiveIconAccessoryAlpha;
- (void)iconImageViewWillBeginAsynchronousImageLoadForIcon:(id)a0;
- (id)_automationID;
- (id)_legibilitySettingsWithParameters:(id)a0;
- (id)referenceIconViewForConfigurationInteraction:(id)a0;
- (void)_recursiveNotifyInteractionTintColorDidChangeForReasons:(unsigned long long)a0;
- (void)dismissConfigurationCardImmediately;
- (double)_additionalLiftScale;
- (void)endForbiddingEditingModeWithReason:(id)a0;
- (void)_updateLabel;
- (void)_updateCustomIconImageViewController:(BOOL)a0;
- (void)setIcon:(id)a0 animated:(BOOL)a1;
- (BOOL)_shouldEnableGroupBlending;
- (id)contextMenuInteraction:(id)a0 configuration:(id)a1 highlightPreviewForItemWithIdentifier:(id)a2;
- (BOOL)_debugContinuity;
- (BOOL)isLabelTextBold;
- (void)dismissStackConfigurationCard;
- (id)createNewIconLabelViewFactory;
- (void)_handleAddWidgetRequest:(id)a0;
- (void)_updateCloseBoxAnimated:(BOOL)a0;
- (BOOL)_isCursorInteractionEnabled;
- (BOOL)isTimedOut;
- (struct CGSize { double x0; double x1; })accessorySize;
- (id)_contextMenuInteraction:(id)a0 previewForIconWithConfigurationOptions:(unsigned long long)a1 highlighted:(BOOL)a2;
- (void)iconImageViewDidEndAsynchronousImageLoadForIcon:(id)a0;
- (void)_toggleGroupBlendingIfNecessary;
- (double)iconImageCornerRadius;
- (id)_iconImageView;
- (struct CGPoint { double x0; double x1; })_focusEffectCenter;
- (void)configureForLabelAllowed:(BOOL)a0;
- (BOOL)_shouldHaveContentContainerView;
- (void)removeForbidAccessoryUpdatesAssertion:(id)a0;
- (void)_updateBrightness;
- (void)_contextMenuConfigurationDidPresent:(id)a0;
- (void)_notifyObserversSizeDidChange;
- (void)_applyIconImageAlpha:(double)a0;
- (struct CGPoint { double x0; double x1; })_centerForAccessoryView;
- (void)_contextMenuConfigurationWillPresent:(id)a0 forInteraction:(id)a1;
- (id)labelImageWithParameters:(id)a0;
- (void)configurationInteractionDidBegin:(id)a0;
- (id)_legibilitySettingsWithPrimaryColor:(id)a0;
- (void)_updateFrameToIconViewSize;
- (id)_labelImage;
- (id)_pointerStyleForWidgetIcon;
- (void)_handleMakeSplitRightKeyShortcut:(id)a0;
- (void)_handleTapWithModifierFlags:(long long)a0;
- (id)initWithConfigurationOptions:(unsigned long long)a0;
- (void)_updateAccessoryViewAnimated:(BOOL)a0;
- (id)defaultDragPreviewWithParameters:(id)a0;
- (void)removeDroppingAssertion:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForLabelAccessoryViewWithLabelFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 labelImage:(id)a1 labelImageParameters:(id)a2 imageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)cancelDragLift;
- (void)_registerForAddWidgetRequestsIfNecessary;
- (void)setShowsDropGlow:(BOOL)a0 animator:(id)a1;
- (id)_pointerStyleForLibraryAdditionalItemsIndicatorIcon;
- (void)_destroyAccessoryView:(id)a0;
- (BOOL)pointMostlyInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForLabel;
- (void)_setShowingCloseBox:(BOOL)a0;
- (id)containerViewForConfigurationInteraction:(id)a0;
- (void)_handleMakeSplitLeftKeyShortcut:(id)a0;
- (void)removeAllIconAnimations;
- (void)_disableContentContainerView;
- (void)configureLabelImageParametersBuilder:(id)a0;
- (void)_contextMenuConfigurationDidDismiss:(id)a0;
- (void)_updateAllComponentAlphas;
- (BOOL)_contextMenuInteractionShouldAllowDragAfterDismiss:(id)a0;
- (BOOL)closeBoxShouldTrack:(id)a0;
- (void)_insertIconImageView:(id)a0;
- (id)matchingIconViewWithConfigurationOptions:(unsigned long long)a0;
- (void)_destroyIconImageView;
- (void)setDragLifted:(BOOL)a0;
- (void)updateParallaxSettings;
- (void)removeAssertion:(id)a0;
- (id)newComponentBackgroundViewOfType:(long long)a0;
- (void)consumeSinglePressUpForButtonKind:(long long)a0;
- (id)labelConfiguration;
- (unsigned long long)supportedIconGridSizeClasses;
- (void)_fetchApplicationShortcutItemsIfAppropriate;
- (void)_updateProgressAnimated:(BOOL)a0;
- (double)effectiveIconLabelAlpha;
- (void)_delegateTouchEnded:(BOOL)a0;
- (id)dragPreviewForItem:(id)a0 session:(id)a1;
- (void)_configureLabelAccessoryViewForType:(long long)a0;
- (void)_recursivelyUpdateBackdropMaskFrames;
- (BOOL)_isShowingAccessoryView;
- (id)configurationUIDelegate;
- (void)setOverrideBadgeNumberOrString:(id)a0 animated:(BOOL)a1;
- (void)clearIconImageInfo;
- (id)dragInteraction:(id)a0 itemsForAddingToSession:(id)a1 withTouchAtPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)_contextMenuInteraction:(id)a0 overrideSuggestedActionsForConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)setDragging:(BOOL)a0;
- (void)dealloc;
- (BOOL)dragInteraction:(id)a0 sessionIsRestrictedToDraggingApplication:(id)a1;
- (void)removeObserver:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleImageRelativeFrameForMiniIconAtIndex:(unsigned long long)a0;
- (BOOL)_dragInteraction:(id)a0 shouldDelayCompetingGestureRecognizer:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForMiniIconAtIndex:(unsigned long long)a0;
- (id)_dragInteraction:(id)a0 sessionPropertiesForSession:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)iconLaunchEnabledDidChange:(id)a0;
- (void)setBackgroundAndIconGridImageAlpha:(double)a0;
- (id)succinctDescriptionBuilder;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)dragInteraction:(id)a0 item:(id)a1 willAnimateCancelWithAnimator:(id)a2;
- (void)dragInteraction:(id)a0 session:(id)a1 didEndWithOperation:(unsigned long long)a2;
- (void)prepareForReuse;
- (void)scrollToGapOrTopIfFullOfPage:(unsigned long long)a0 animated:(BOOL)a1;
- (void)scrollToTopOfPage:(unsigned long long)a0 animated:(BOOL)a1;
- (long long)_dropInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (void)dragInteraction:(id)a0 sessionWillBegin:(id)a1;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)scrollToTopOfFirstPageAnimated:(BOOL)a0;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (void)iconAccessoriesDidUpdate:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void)configurationInteractionWillBegin:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dropInteraction:(id)a0 sessionDidEnter:(id)a1;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void)iconImageDidUpdate:(id)a0;
- (void)setFloatyFolderCrossfadeFraction:(double)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)isFolderIcon;
- (id)tintColor;
- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)dragInteraction:(id)a0 willAnimateLiftWithAnimator:(id)a1 session:(id)a2;
- (void)cleanupAfterFloatyFolderCrossfade;
- (void)dropInteraction:(id)a0 sessionDidExit:(id)a1;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)prepareToCrossfadeWithFloatyFolderView:(id)a0 allowFolderInteraction:(BOOL)a1;
- (id)dragInteraction:(id)a0 sessionForAddingItems:(id)a1 withTouchAtPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)dragInteraction:(id)a0 previewForCancellingItem:(id)a1 withDefault:(id)a2;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (id)contentSizeCategory;
- (id)folder;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)succinctDescription;
- (double)_continuousCornerRadius;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)isDragging;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void)layoutSubviews;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)addObserver:(id)a0;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)didMoveToWindow;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
