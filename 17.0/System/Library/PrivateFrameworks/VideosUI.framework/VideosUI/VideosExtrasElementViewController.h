@class VideosExtrasBackgroundViewController, NSMapTable;

@interface VideosExtrasElementViewController : UIViewController {
    VideosExtrasBackgroundViewController *_backgroundViewController;
    NSMapTable *_bannerButtonMap;
}

@property (nonatomic, getter=isWide) BOOL wide;

+ (id)_borderView;

- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)_prepareLayout;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (id)backgroundViewController;
- (void).cxx_destruct;
- (void)_configureBannerWithElement:(id)a0;
- (void)_didActivateButtonWithItem:(id)a0;
- (id)_installBackdrop:(id)a0;
- (void)_startBackgroundAudio;
- (void)configureBackgroundWithElements:(id)a0;
- (unsigned long long)extrasSize;

@end
