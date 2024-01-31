@class UIImageView, UIImage;

@interface HUPCImageContentController : HUPCCenterFillContentController

@property (readonly, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) UIImage *contentImage;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (double)_contentAspectRatio;
- (void)_updateContentMode;
- (void)_viewDidUpdateContent;
- (id)initWithTitle:(id)a0 detailText:(id)a1 contentImage:(id)a2;

@end
