@class VideosExtrasBannerController, VideosExtrasGridElementViewController;

@interface VideosExtrasGalleryTemplateViewController : VideosExtrasTemplateViewController {
    VideosExtrasBannerController *_bannerController;
    VideosExtrasGridElementViewController *_gridViewController;
}

@property (nonatomic) unsigned long long selectedItemIndex;

- (void)_prepareLayout;
- (void)viewDidLoad;
- (id)contentScrollView;
- (void).cxx_destruct;
- (BOOL)showsPlaceholder;
- (id)templateElement;

@end
