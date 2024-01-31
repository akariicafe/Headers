@class NSString;

@interface MagnifierSupport.FreezeFramePageContentViewController : UIViewController <UIScrollViewDelegate, UIEditMenuInteractionDelegate> {
    void /* unknown type, empty encoding */ pageSelectionDelegate;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ asset;
    void /* unknown type, empty encoding */ filterSet;
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ thumbnailWorkItem;
    void /* unknown type, empty encoding */ fullSizeWorkItem;
    void /* unknown type, empty encoding */ imageProcessingQueue;
    void /* unknown type, empty encoding */ delayedAssetSubscription;
    void /* unknown type, empty encoding */ zoomSubscription;
    void /* unknown type, empty encoding */ isShowingFullSizeImage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_singleTapGestureRecognizer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_longPressGestureRecognizer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_doubleTapGestureRecognizer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_editMenuInteraction;
    void /* unknown type, empty encoding */ shareMenuLocation;
}

@property (nonatomic, readonly) BOOL canBecomeFirstResponder;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) NSString *description;

- (id)editMenuInteraction:(id)a0 menuForConfiguration:(id)a1 suggestedActions:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)scrollViewDidZoom:(id)a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)viewDidLoad;
- (void)longPress:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)doubleTap:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)singleTap:(id)a0;
- (void)shareFreezeFrameMenuItemAction;

@end
