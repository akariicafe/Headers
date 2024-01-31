@class NSString, PXAlbumStreamingOptionsViewController;

@interface PXPhotosGridSharedAlbumOptionsActionPerformer : PXPhotosGridActionPerformer <PXAlbumStreamingOptionsViewControllerDelegate, UIPopoverPresentationControllerDelegate> {
    PXAlbumStreamingOptionsViewController *_presentedOptionsController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPerformActionType:(id)a0 withViewModel:(id)a1;

- (id)activityType;
- (id)activitySystemImageName;
- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (void)presentationController:(id)a0 willPresentWithAdaptiveStyle:(long long)a1 transitionCoordinator:(id)a2;
- (BOOL)_shouldDismissOptionsForReason:(int)a0;
- (BOOL)_shouldRequestGridDismissalForReason:(int)a0;
- (void)albumStreamingOptionsViewController:(id)a0 didCompleteWithReason:(int)a1;
- (id)localizedTitleForUseCase:(unsigned long long)a0;

@end
