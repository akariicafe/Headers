@interface WidgetPreviewsShellPlugin.WallpaperBackedViewController : UIViewController {
    void /* unknown type, empty encoding */ wallpaperWidth;
    void /* unknown type, empty encoding */ variant;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithCoder:(id)a0;

@end
