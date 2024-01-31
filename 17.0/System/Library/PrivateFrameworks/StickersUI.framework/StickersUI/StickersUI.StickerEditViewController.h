@interface StickersUI.StickerEditViewController : UIViewController {
    void /* unknown type, empty encoding */ sticker;
    void /* unknown type, empty encoding */ preferredRepresentation;
    void /* unknown type, empty encoding */ stillRepresentation;
    void /* unknown type, empty encoding */ animatedRepresentation;
    void /* unknown type, empty encoding */ transitionAnimator;
    void /* unknown type, empty encoding */ canToggleLive;
    void /* unknown type, empty encoding */ preLiveSickerEffect;
    void /* unknown type, empty encoding */ noEffectShouldBeLive;
    void /* unknown type, empty encoding */ isPaused;
    void /* unknown type, empty encoding */ isLive;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_previewView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_effectChooser;
    void /* unknown type, empty encoding */ $__lazy_storage_$_doneButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_liveButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_previewWidthConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_previewHeightConstraint;
}

- (void)viewDidLayoutSubviews;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)handleDoneButton;
- (void)handleLiveButton;

@end
