@class NSObject, NSString, PXSharedLibraryStatusProvider, PHPhotoLibrary, PXCuratedLibraryGuestAssetTracker, UITraitCollection;
@protocol OS_dispatch_queue, PXCuratedLibraryFilterTipControllerDelegate;

@interface PXCuratedLibraryFilterTipController : NSObject <PXTipsPresentationDelegate, PXCuratedLibraryGuestAssetTrackerDelegate, PXChangeObserver> {
    PHPhotoLibrary *_photoLibrary;
    PXSharedLibraryStatusProvider *_sharedLibraryStatusProvider;
    NSString *_presentedTipID;
    id /* block */ _tipDismissedCompletion;
    BOOL _isTipContentDelegate;
    BOOL _hasScheduledSharedLibraryFilterTip;
}

@property (readonly, nonatomic) PXCuratedLibraryGuestAssetTracker *guestAssetTracker;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *tipKitAPIQueue;
@property (weak, nonatomic) id<PXCuratedLibraryFilterTipControllerDelegate> delegate;
@property (nonatomic) BOOL curatedLibraryIsVisible;
@property (copy, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) BOOL isPresentingTipView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateControllerForSyndicatedAssetsTip;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)userDidChangeLibraryFilterState;
- (void)guestAssetsTracker:(id)a0 isDisplayingGuestAssets:(BOOL)a1;
- (void)didChangeFilterState:(id)a0;
- (void)_cancelTimerForSharedLibraryTip;
- (void)_dismissTipViewWithCompletion:(id /* block */)a0 clientInitiated:(BOOL)a1;
- (BOOL)_shouldShowFilterTip:(id)a0;
- (id)presentationControllerForTipID:(id)a0;
- (void)tipPopoverDidDismissWithTipID:(id)a0;
- (void)_startTimerForSharedLibraryFilterTip;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_anchorViewRect;
- (void)dismissTipViewWithCompletion:(id /* block */)a0;
- (void)prepareTipPopover:(id)a0 tipID:(id)a1;
- (void)_presentSharedLibraryFilterTipIfPossible;
- (void)didLayoutAnchorView;
- (void)_presentTipViewController:(id)a0;
- (void)guestAssetsTracker:(id)a0 canDisplayGuestAssets:(BOOL)a1;
- (id)initWithViewModel:(id)a0 layout:(id)a1;

@end
