@class QLPreviewCollectionHostContext, UIView;
@protocol QLPreviewControllerStateProtocolHostOnly;

@interface QLRemotePreviewCollection : _UIRemoteViewController <QLPreviewCollectionProtocol> {
    id<QLPreviewControllerStateProtocolHostOnly> _stateManager;
    double _edgeNavigationGestureWidth;
    UIView *_touchGrabbingView;
}

@property (retain) id request;
@property (retain) QLRemotePreviewCollection *accessoryViewController;
@property (retain) QLPreviewCollectionHostContext *hostContext;
@property BOOL isAvailable;
@property (nonatomic) BOOL allowInteractiveTransitions;

- (BOOL)isRemote;
- (void)setIsContentManaged:(BOOL)a0;
- (id)accessoryView;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)_updateTouchGrabbingView;
- (void)actionSheetDidDismiss;
- (void)documentMenuActionWillBegin;
- (void)hostApplicationDidBecomeActive;
- (void)hostApplicationDidEnterBackground:(BOOL)a0;
- (void)hostSceneWillDeactivate;
- (void)hostViewControllerBackgroundColorChanged:(id)a0;
- (void)prepareForActionSheetPresentationWithCompletionHandler:(id /* block */)a0;
- (void)requestLockForCurrentItem;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (void)_presentViewControllerForError:(id)a0;
- (void)notifyStateRestorationUserInfo:(id)a0;
- (BOOL)_addGrabbingViewIfNecessaryWithWidth:(double)a0;
- (BOOL)_isNavigationControllerGrabbingViewForInteractivePopNeeded;
- (void)_resetRemoteConfiguration;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)a0;
- (void)configureWithNumberOfItems:(long long)a0 currentPreviewItemIndex:(unsigned long long)a1 itemProvider:(id)a2 stateManager:(id)a3;
- (void)getPreviewCollectionUUIDWithCompletionHandler:(id /* block */)a0;
- (void)hostViewControlerTransitionToState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)invalidateServiceWithCompletionHandler:(id /* block */)a0;
- (void)keyCommandWasPerformed:(id)a0;
- (void)keyCommandsWithCompletionHandler:(id /* block */)a0;
- (id)navigationScreenEdgePanGestureRecognizer;
- (void)notifyFirstTimeAppearanceWithActions:(unsigned long long)a0;
- (void)overrideParentApplicationDisplayIdentifierWithIdentifier:(id)a0;
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(id /* block */)a0;
- (void)previewItemDisplayState:(id)a0 wasAppliedToItemAtIndex:(unsigned long long)a1;
- (void)saveCurrentPreviewEditsSynchronously:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)saveIntoPhotoLibraryMediaWithURLWrapper:(id)a0 previewItemType:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)setCurrentPreviewItemIndex:(long long)a0 animated:(BOOL)a1;
- (void)setLoadingString:(id)a0;
- (void)setPreviewItemDisplayState:(id)a0 onItemAtIndex:(unsigned long long)a1;
- (void)setScreenEdgePanWidth:(double)a0;
- (void)shouldDisplayLockActivityWithCompletionHandler:(id /* block */)a0;
- (void)startTransitionWithSourceViewProvider:(id)a0 transitionController:(id)a1 presenting:(BOOL)a2 useInteractiveTransition:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)tearDownTransition:(BOOL)a0;
- (void)toolbarButtonPressedWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)toolbarButtonsForTraitCollection:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
