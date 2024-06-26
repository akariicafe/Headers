@class QLItem, NSString, DMFApplicationPolicyMonitor, QLPreviewContext, QLLoadingItemViewController, QLErrorItemViewController, QLDownloadingItemViewController, QLScreenTimeItemViewController, DMFCategoryPolicyMonitor, NSObject, QLItemViewController;
@protocol OS_dispatch_queue, QLItemPresenterViewControllerDelegate;

@interface QLItemPresenterViewController : QLItemAggregatedViewController <QLDownloadingItemViewControllerDelegate, QLItemViewControllerPresentingDelegate> {
    BOOL _shouldDeferAppearanceUpdates;
    BOOL _isPeekingSession;
    BOOL _failureOccurred;
    BOOL _isReadyForDisplay;
    BOOL _shouldHandleLoadingView;
    id /* block */ _readyBlock;
    NSObject<OS_dispatch_queue> *previewLoadingQueue;
}

@property (retain, nonatomic) QLErrorItemViewController *errorViewController;
@property (retain, nonatomic) QLLoadingItemViewController *loadingViewController;
@property (retain, nonatomic) QLDownloadingItemViewController *downloadingController;
@property (retain, nonatomic) QLScreenTimeItemViewController *screenTimeController;
@property (copy, nonatomic) id /* block */ loadingCompletionHandler;
@property (retain, nonatomic) QLItem *previewItem;
@property (retain) id contents;
@property (retain) QLPreviewContext *context;
@property (nonatomic) BOOL printing;
@property (copy, nonatomic) NSString *hostApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *parentApplicationDisplayIdentifier;
@property (retain, nonatomic) DMFApplicationPolicyMonitor *screenTimeApplicationMonitor;
@property (retain, nonatomic) DMFCategoryPolicyMonitor *screenTimeCategoryMonitor;
@property (weak, nonatomic) id<QLItemPresenterViewControllerDelegate> delegate;
@property (retain, nonatomic) QLItemViewController *previewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) QLItemPresenterViewController *itemPresenterViewController;

- (id)init;
- (BOOL)isLoading;
- (BOOL)isLoaded;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)additionalItemViewControllerDescription;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)loadingFailed;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewDidDisappear:(BOOL)a0;
- (void)previewItemViewController:(id)a0 didFailWithError:(id)a1;
- (void)previewWillAppear:(BOOL)a0;
- (void)previewWillDisappear:(BOOL)a0;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (void)transitionDidFinish:(BOOL)a0 didComplete:(BOOL)a1;
- (void)transitionDidStart:(BOOL)a0;
- (void)transitionWillFinish:(BOOL)a0 didComplete:(BOOL)a1;
- (void)updatePreviewItemDisplayState:(id)a0;
- (void)_didReceiveNewScreenTimePolicy:(long long)a0;
- (void)_cancelAllDeferredApperanceUpdates;
- (BOOL)_currentPreviewControllerIsErrorViewController;
- (void)_didReceiveNewScreenTimeApplicationPolicies:(id)a0 error:(id)a1;
- (void)_didReceiveNewScreenTimeCategoryPolicy:(id)a0 error:(id)a1;
- (void)_hideScreenTimeViewControllerIfNeeded;
- (void)_performLoadingCompletionHandlerWithError:(id)a0;
- (void)_performReadyBlockIfNedded;
- (BOOL)_processIsEntitledToCheckScreenTimePolicy;
- (BOOL)_processIsEntitledToConfigureScreenTime;
- (void)_queryScreenTimeCategoryPolicy;
- (void)_queryScreenTimePolicyForBundleIdentifier:(id)a0;
- (void)_setupScreenTimeApplicationHandling;
- (void)_setupScreenTimeCategoryHandling;
- (void)_setupScreenTimeHandling;
- (BOOL)_shouldApplyScreenTimeMoviePolicyForItem:(id)a0;
- (void)_showLoadingViewControllerDeferredIfNeeded;
- (void)_showReadyToDisplayPreviewViewControllerDeferredIfNeeded:(id)a0;
- (void)_showScreenTimeViewControllerWithPolicy:(long long)a0;
- (void)_startLoadingPreviewWithContents:(id)a0;
- (BOOL)canAnimateFromDetailViewToFullScreenPreview;
- (void)downloadingItemViewControllerDidFinishLoadingPreviewItem:(id)a0 withContents:(id)a1;
- (BOOL)downloadingItemViewControllerShouldForceAutodownloadFile:(id)a0;
- (id)initForPrinting:(BOOL)a0;
- (id)initWithHostApplicationBundleIdentifier:(id)a0 parentApplicationDisplayIdentifier:(id)a1;
- (void)isReadyForDisplayWithCompletionHandler:(id /* block */)a0;
- (id)screenTimePolicyBundleIdentifier;
- (void)showErrorViewController;
- (void)showPreviewProviderViewController;
- (void)showPreviewViewController:(id)a0;
- (void)showPreviewViewController:(id)a0 animatingWithCrossfade:(BOOL)a1;
- (void)showPreviewViewController:(id)a0 animatingWithCrossfade:(BOOL)a1 updatingIsReadyForDisplay:(BOOL)a2;

@end
