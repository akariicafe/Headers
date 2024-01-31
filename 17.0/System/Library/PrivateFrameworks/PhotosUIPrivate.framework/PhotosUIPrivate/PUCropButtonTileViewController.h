@class PUAssetViewModel, PUBrowsingViewModel, NSTimer, NSString, UIView, PUOneUpCropButton;
@protocol PUCropButtonTileViewControllerDelegate;

@interface PUCropButtonTileViewController : PUTileViewController <PUAssetViewModelChangeObserver, PUBrowsingViewModelChangeObserver, PUOneUpCropButtonDelegate>

@property (retain, nonatomic) PUOneUpCropButton *button;
@property (nonatomic, getter=isShowingButton) BOOL showingButton;
@property (retain, nonatomic) NSTimer *invisibilityTimer;
@property (nonatomic) unsigned long long preventDismissalReasons;
@property (nonatomic) BOOL preventDismissal;
@property (nonatomic) BOOL hasShownButtonForCurrentAsset;
@property (nonatomic) BOOL presentMenuForTip;
@property (weak, nonatomic) id<PUCropButtonTileViewControllerDelegate> delegate;
@property (retain, nonatomic) PUAssetViewModel *assetViewModel;
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (readonly, nonatomic) UIView *cropButton;
@property (nonatomic) BOOL presentingTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)_layoutSubviews;
- (void)applyLayoutInfo:(id)a0;
- (void)dealloc;
- (void)becomeReusable;
- (void).cxx_destruct;
- (void)_invalidateTimers;
- (BOOL)_canShowButton;
- (void)_createButtonIfNeeded;
- (void)_didChangeChromeVisible:(BOOL)a0;
- (void)_didChangeCurrentAsset;
- (void)_didChangeModelTileTransform:(id)a0;
- (void)_dismissButtonAfterDelay;
- (BOOL)_hasUserZoomedIn;
- (void)_showButton:(BOOL)a0 animated:(BOOL)a1;
- (void)_updatePreventDismissalReason:(unsigned long long)a0 activate:(BOOL)a1;
- (void)_updatePreventDismissalReasons;
- (void)oneUpCropButton:(id)a0 didSelectAspectRatio:(struct CGSize { double x0; double x1; })a1;
- (void)oneUpCropButton:(id)a0 menuPresentedDidChange:(BOOL)a1;
- (void)oneUpCropButton:(id)a0 pointerTargetDidChange:(BOOL)a1;
- (struct CGSize { double x0; double x1; })oneUpCropButtonBoundingSize:(id)a0;
- (struct CGSize { double x0; double x1; })oneUpCropButtonCurrentAspectRatio:(id)a0;
- (struct CGSize { double x0; double x1; })oneUpCropButtonOriginalAspectRatio:(id)a0;

@end
