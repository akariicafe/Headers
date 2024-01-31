@class NSMapTable, PXAssetsDataSourceManager, UIContextMenuInteraction, UIViewController, PXAssetActionManager, UIScrollView, NSString, PXUIMediaProvider, PXPhotosDetailsContext, UITargetedPreview, PXSearchQueryMatchInfo, PXContentPrivacyController, PXAssetReference;
@protocol PXOneUpPresentationDelegate, PXAssetImportStatusManager, PXOneUpPresentationImplementationDelegate;

@interface PXOneUpPresentation : PXObservable <UIContextMenuInteractionDelegate> {
    struct { BOOL respondsToPhotosDetailsContext; BOOL respondsToPrivacyController; BOOL respondsToInitialAssetReference; BOOL respondsToCanStartPreviewingForContextMenuInteraction; BOOL respondsToAllowsActionsForContextMenuInteraction; BOOL respondsToAllowsMultiSelectMenuForInteraction; BOOL respondsToAllowsPreviewCommittingForContextMenuInteraction; BOOL respondsToCommitPreviewForContextMenuInteraction; BOOL respondsToWillStartPreviewingForContextMenuInteraction; BOOL respondsToWillEndPreviewingForContextMenuInteraction; BOOL respondsToAccessoriesForContextMenuInteraction; BOOL respondsToSecondaryIdentifiersForConfiguration; BOOL respondsToStyleForContextMenuInteraction; BOOL respondsToCurrentImageForAssetReference; BOOL respondsToRegionOfInterestForAssetReference; BOOL respondsToScrollAssetReferenceToVisible; BOOL respondsToSetHiddenAssetReferences; BOOL respondsToShouldAutoPlay; BOOL respondsToShouldShowSelectionContextMenu; BOOL respondsToPreventShowInAllPhotos; BOOL respondsToActionManager; BOOL respondsToActionManagerForPreviewing; BOOL respondsToActionContext; BOOL respondsToImportStatusManager; BOOL respondsToOrigin; BOOL respondsToScrollView; BOOL respondsToSearchContext; BOOL respondsToMatchedQueryStrings; BOOL respondsToAssetUUIDsAllowedToHighlight; BOOL respondsToMatchedSceneIdentifiers; BOOL respondsToMatchedAudioIdentifiers; BOOL respondsToMatchedHumanActionIdentifiers; BOOL respondsToMatchedPersonLocalIdentifiers; } _delegateFlags;
    struct { BOOL respondsToPresentingViewControllerViewWillAppear; BOOL respondsToPresentingViewControllerViewIsAppearing; BOOL respondsToPresentingViewControllerViewDidAppear; BOOL respondsToPresentingViewControllerViewWillDisappear; BOOL respondsToPresentingViewControllerViewDidDisappear; BOOL respondsToCanStart; BOOL respondsToLastViewedAssetReference; BOOL respondsToCanStop; BOOL respondsToInvalidatePresentingGeometry; BOOL respondsToHandlePresentingPinchGestureRecognizer; } _implementationDelegateFlags;
}

@property (retain, nonatomic) UIViewController *currentPreviewViewController;
@property (retain, nonatomic) UITargetedPreview *interactionTargetedPreview;
@property (retain, nonatomic) NSMapTable *contextMenuStateByConfiguration;
@property (weak, nonatomic, setter=_setImplementationDelegate:) id<PXOneUpPresentationImplementationDelegate> _implementationDelegate;
@property (readonly, weak, nonatomic) UIViewController *presentingViewController;
@property (readonly, nonatomic) long long origin;
@property (weak, nonatomic) UIViewController *originalPresentingViewController;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (weak, nonatomic) id<PXOneUpPresentationImplementationDelegate> implementationDelegate;
@property (readonly, nonatomic) PXAssetsDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider;
@property (readonly, nonatomic) PXPhotosDetailsContext *photosDetailsContext;
@property (readonly, nonatomic) PXContentPrivacyController *privacyController;
@property (readonly, nonatomic) PXAssetReference *initialAssetReference;
@property (readonly, nonatomic) PXAssetActionManager *actionManager;
@property (readonly, nonatomic) PXAssetActionManager *actionManagerForPreviewing;
@property (readonly, nonatomic) long long actionContext;
@property (readonly, nonatomic) id<PXAssetImportStatusManager> importStatusManager;
@property (readonly, nonatomic) BOOL shouldAutoPlay;
@property (readonly, nonatomic) BOOL preventShowInAllPhotosAction;
@property (readonly, nonatomic) BOOL wantsShowInLibraryButton;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) PXSearchQueryMatchInfo *searchQueryMatchInfo;
@property (weak, nonatomic) id<PXOneUpPresentationDelegate> delegate;
@property (readonly, nonatomic) BOOL canStart;
@property (readonly, nonatomic) PXAssetReference *lastViewedAssetReference;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) BOOL canStop;
@property (readonly, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (readonly, nonatomic) BOOL isContextMenuInteractionActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedDefaultImplementationDelegate;
+ (id)navigationControllerWithRootViewController:(id)a0;
+ (void)viewController:(id)a0 willPresentOneUpInViewController:(id)a1;

- (void)commitPreviewViewController:(id)a0;
- (void)presentingViewControllerViewDidDisappear:(BOOL)a0;
- (id)contextMenuInteraction:(id)a0 configuration:(id)a1 dismissalPreviewForItemWithIdentifier:(id)a2;
- (id)contextMenuInteraction:(id)a0 configuration:(id)a1 highlightPreviewForItemWithIdentifier:(id)a2;
- (id)init;
- (void)stopAnimated:(BOOL)a0;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (id)_contextMenuInteraction:(id)a0 accessoriesForMenuWithConfiguration:(id)a1;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (BOOL)handlePresentingPinchGestureRecognizer:(id)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)presentingViewControllerViewWillAppear:(BOOL)a0;
- (id)initWithPresentingViewController:(id)a0;
- (void)setHiddenAssetReferences:(id)a0;
- (id)previewViewControllerAllowingActions:(BOOL)a0;
- (void)presentingViewControllerViewIsAppearing:(BOOL)a0;
- (void)setState:(long long)a0;
- (void)presentingViewControllerViewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)regionOfInterestForAssetReference:(id)a0;
- (BOOL)startWithConfigurationHandler:(id /* block */)a0;
- (void)invalidatePresentingGeometry;
- (void)didDismissPreviewViewController:(id)a0 committing:(BOOL)a1;
- (void)presentingViewControllerViewDidAppear:(BOOL)a0;
- (BOOL)canStartAnimated:(BOOL)a0;
- (void)_updateImplementationDelegate;
- (id)currentImageForAssetReference:(id)a0;
- (void)preventTargetedContextMenuDismissalAnimation;
- (void)scrollAssetReferenceToVisible:(id)a0;
- (void)waitUntilPresentationCanStartAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
