@interface EmojiPoster.EmojiSceneViewController : UIViewController {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ currentLayoutStyle;
    void /* unknown type, empty encoding */ currentSizeVariant;
    void /* unknown type, empty encoding */ overlayLayer;
    void /* unknown type, empty encoding */ sceneView;
    void /* unknown type, empty encoding */ wakeProgress;
    void /* unknown type, empty encoding */ unlockProgress;
    void /* unknown type, empty encoding */ scene;
}

@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;

- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithCoder:(id)a0;

@end
