@class PXPhotosLayout, NSString, PXPhotosViewModel, NSTimer, UIView, PXPhotosGlobalFooterView, PXGView;
@protocol PXPhotosGridFooterPresentationDelegate;

@interface PXPhotosGridFooterPresentation : NSObject <PXChangeObserver, PXPhotosGlobalFooterViewDelegate, _PXPhotosGridFooterMaskViewDelegate, PXScrollViewControllerObserver> {
    PXPhotosViewModel *_viewModel;
    PXGView *_gridView;
    PXPhotosLayout *_layout;
    BOOL _hasAppearedOnce;
    BOOL _hasReachedInitialPosition;
    PXPhotosGlobalFooterView *_reusableFooterView;
    double _lastUserScrollTime;
    BOOL _didAutoReveal;
    NSTimer *_autoRevealMinimumIdleTimer;
}

@property (nonatomic) BOOL shouldAutoReveal;
@property (nonatomic) BOOL wantsFooter;
@property (nonatomic) BOOL wantsFooterMask;
@property (retain, nonatomic) UIView *footerMaskView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } footerMaskPadding;
@property (nonatomic, getter=isFooterFullyMasked) BOOL footerFullyMasked;
@property (weak, nonatomic) id<PXPhotosGridFooterPresentationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateFooterView;
- (void)viewDidScrollToInitialPosition;
- (void)scrollViewControllerContentBoundsDidChange:(id)a0;
- (void)_updateWantsFooter;
- (void)_updateFooterAndMaskVisibility;
- (void)scrollViewControllerWillBeginScrolling:(id)a0;
- (void)viewDidAppear;
- (void)_updateFooterMaskViewFrame;
- (void)scrollViewControllerDidScroll:(id)a0;
- (void)photosGlobalFooterViewDidChangeHeight:(id)a0;
- (void).cxx_destruct;
- (void)_conditionallyAutoRevealFooterView;
- (BOOL)_shouldAutoRevealFooterView;
- (void)_conditionallyAutoRevealFooterViewWithLastUserScrollTime:(double)a0;
- (void)photosGlobalFooterViewDidMoveToWindow:(id)a0;
- (double)_footerVisibleAmountIncludingSafeAreaInsets:(BOOL)a0;
- (void)footerMaskViewDidMoveToWindow:(id)a0;
- (void)photosGlobalFooterView:(id)a0 presentViewController:(id)a1;
- (void)_updateFooterMaskPadding;
- (id)initWithViewModel:(id)a0 gridView:(id)a1 layout:(id)a2;
- (void)_updateFooterMaskViewOrder;

@end
