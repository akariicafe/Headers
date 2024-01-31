@class UIView, SBHStackConfigurationViewController, SBHViewControllerTransition, SBHStackConfiguration, NSString, SBHWidgetSettings, UIViewController, SBIconView;
@protocol SBHStackConfigurationInteractionDelegate, SBHStackConfigurationViewControllerAppearanceDelegate, SBIconViewProviding, SBIconListLayoutProvider, SBLeafIconDataSource, SBHWidgetSheetViewControllerPresenter, SBHIconViewConfigurationInteractionDelegate;

@interface SBHStackConfigurationInteraction : NSObject <SBHStackConfigurationViewControllerDelegate, SBHViewControllerTransitionDelegate, SBIconViewObserver, SBHIconViewConfigurationInteraction>

@property (copy, nonatomic) SBHStackConfiguration *configuration;
@property (readonly, nonatomic) SBIconView *iconView;
@property (readonly, weak, nonatomic) id<SBIconViewProviding> iconViewProvider;
@property (readonly, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (readonly, nonatomic) SBHViewControllerTransition *transition;
@property (readonly, nonatomic) SBHWidgetSettings *widgetSettings;
@property (retain, nonatomic) UIViewController *containerViewController;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) SBHStackConfigurationViewController *configurationViewController;
@property (readonly, nonatomic) id<SBLeafIconDataSource> configuredDataSource;
@property (weak, nonatomic) id<SBHWidgetSheetViewControllerPresenter> presenter;
@property (weak, nonatomic) id<SBHIconViewConfigurationInteractionDelegate> delegate;
@property (weak, nonatomic) id<SBHStackConfigurationInteractionDelegate> stackConfigurationDelegate;
@property (weak, nonatomic) id<SBHStackConfigurationViewControllerAppearanceDelegate> appearanceDelegate;
@property (nonatomic) BOOL showsDoneButton;
@property (nonatomic) BOOL showsAddButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iconViewDidBecomeWindowless:(id)a0;
- (void)beginConfiguration;
- (void)_folderExpansionAnimationWillBegin:(id)a0;
- (void)iconViewSizeDidChange:(id)a0;
- (void)iconViewWasDiscarded:(id)a0;
- (void)iconViewWasRecycled:(id)a0;
- (void).cxx_destruct;
- (BOOL)stackConfigurationViewController:(id)a0 allowsRemovalOfIconDataSource:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentBoundingFrame;
- (void)_endConfigurationAnimated:(BOOL)a0;
- (void)_handleTransitionWillProgressToEndState:(BOOL)a0;
- (double)_padApertureOutsetFromWidgetWithGridSize:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sourceContentFrame;
- (id)animatorForTransition:(id)a0;
- (void)endConfiguration;
- (void)endConfigurationImmediately;
- (id)initWithConfiguration:(id)a0 iconView:(id)a1 iconViewProvider:(id)a2 listLayoutProvider:(id)a3;
- (void)popConfiguration;
- (void)prepareTransition:(id)a0;
- (void)stackConfigurationViewController:(id)a0 didCommitStackConfiguration:(id)a1;
- (void)stackConfigurationViewController:(id)a0 didRemoveSuggestedWidgetIcon:(id)a1;
- (id)stackConfigurationViewController:(id)a0 dragPreviewForIconView:(id)a1;
- (id)stackConfigurationViewController:(id)a0 draggedIconForIdentifier:(id)a1;
- (BOOL)stackConfigurationViewController:(id)a0 dragsSupportSystemDragsForIconView:(id)a1;
- (double)stackConfigurationViewController:(id)a0 iconContentScaleForGridSizeClass:(unsigned long long)a1;
- (void)stackConfigurationViewController:(id)a0 iconView:(id)a1 dragLiftAnimationDidChangeDirection:(long long)a2;
- (void)stackConfigurationViewController:(id)a0 iconView:(id)a1 willAnimateDragLiftWithAnimator:(id)a2 session:(id)a3;
- (void)stackConfigurationViewController:(id)a0 isConsumingDropSession:(id)a1;
- (id)stackConfigurationViewController:(id)a0 promoteSuggestedWidget:(id)a1 withinStack:(id)a2;
- (id)stackConfigurationViewController:(id)a0 targetedDragPreviewForIconView:(id)a1 item:(id)a2 session:(id)a3 previewParameters:(id)a4;
- (void)stackConfigurationViewControllerDidReceiveUserTouch:(id)a0;
- (void)stackConfigurationViewControllerDoneButtonTapped:(id)a0;
- (long long)stackConfigurationViewControllerIconViewComponentBackgroundViewType:(id)a0;
- (void)stackConfigurationViewControllerRequestsDismissal:(id)a0;
- (void)stackConfigurationViewControllerRequestsPresentAddWidgetSheet:(id)a0;
- (void)stackConfigurationViewControllerWillAnimateWidgetInsertion:(id)a0;
- (void)transitionDidProgressToEndState:(id)a0;
- (void)transitionDidReturnToBeginningState:(id)a0;
- (void)transitionWillProgressToEndState:(id)a0;
- (void)transitionWillReturnToBeginningState:(id)a0;
- (id)windowForIconDragPreviewsForStackConfigurationViewController:(id)a0 forWindowScene:(id)a1;

@end
