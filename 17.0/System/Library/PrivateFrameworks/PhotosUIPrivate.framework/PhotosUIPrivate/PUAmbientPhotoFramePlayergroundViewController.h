@interface PUAmbientPhotoFramePlayergroundViewController : UIViewController {
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ $__lazy_storage_$_renderer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_photoFrameController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_environment;
    void /* unknown type, empty encoding */ preferences;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ foregroundView;
    void /* unknown type, empty encoding */ floatingView;
}

@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, readonly) BOOL prefersHomeIndicatorAutoHidden;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)handleLongPress:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)handleTap:(id)a0;

@end
