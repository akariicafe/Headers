@class SearchUIRowModel, TLKProminenceView, NSString;
@protocol SearchUIHomeScreenEngagementDelegate, SearchUIFeedbackDelegate;

@interface SearchUIHomeScreenAppIconView : SBIconView <SBIconViewDelegate, SBIconDelegate>

@property (retain) SearchUIRowModel *rowModel;
@property (retain) TLKProminenceView *placeholderView;
@property (retain) TLKProminenceView *focusHighlightView;
@property BOOL labelNeedsUpdateOnMovingToWindow;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (weak, nonatomic) id<SearchUIHomeScreenEngagementDelegate> engagementDelegate;
@property (nonatomic) unsigned long long variant;
@property (nonatomic) BOOL addRoundedKeyboardHighlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cacheForVariant:(unsigned long long)a0;

- (void)tlk_updateForAppearance:(id)a0;
- (void)icon:(id)a0 launchFromLocation:(id)a1 context:(id)a2;
- (void)updateWithRowModel:(id)a0;
- (long long)_focusItemDeferralMode;
- (void)setFocusHighlightFrame;
- (void)hidePlaceholder:(BOOL)a0;
- (id)parallaxSettingsForShortcutsPresentationWithIconView:(id)a0;
- (void)iconViewWillBeginDrag:(id)a0 session:(id)a1;
- (void)iconImageViewWillBeginAsynchronousImageLoadForIcon:(id)a0;
- (void)_updateLabel;
- (unsigned long long)imageLoadingBehavior;
- (void)iconImageViewDidEndAsynchronousImageLoadForIcon:(id)a0;
- (void)_dynamicUserInterfaceTraitDidChange;
- (BOOL)shouldHideShortcutsForAppIcon:(id)a0;
- (BOOL)iconView:(id)a0 shouldActivateApplicationShortcutItem:(id)a1 atIndex:(unsigned long long)a2;
- (long long)iconView:(id)a0 draggingStartLocationWithProposedStartLocation:(long long)a1;
- (id)init;
- (void)iconTapped:(id)a0;
- (BOOL)iconViewShouldIncludeUninstallShortcutItem:(id)a0;
- (BOOL)shouldUseSecureWindowForShortcutsPresentationWithIconView:(id)a0;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (id)delegate;
- (id)focusEffect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })highlightFrame;
- (void)launchIcon;
- (BOOL)canBecomeFocused;
- (void)removePlaceholderAndSetShadowAnimated:(BOOL)a0;
- (void)iconTapped:(id)a0 modifierFlags:(long long)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)_launchWithModifierFlags:(long long)a0;
- (id)shortcutsDelegateForIconView:(id)a0;
- (BOOL)iconViewShouldBeginShortcutsPresentation:(id)a0;
- (BOOL)iconViewCanBeginDrags:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)didEngageWithTriggerEvent:(unsigned long long)a0 destination:(unsigned long long)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)layoutSubviews;
- (BOOL)currentIconIsPlaceholder;
- (BOOL)isTimedOutForIcon:(id)a0;
- (void)didMoveToWindow;
- (id)focusGroupIdentifier;

@end
