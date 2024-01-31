@class IKViewElement, UIImageView, TVImageProxy, NSArray, _TVOrganizerView;

@interface _TVDivTemplateController : _TVBgImageLoadingViewController

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) TVImageProxy *backgroundImageProxy;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) _TVOrganizerView *contentView;
@property (copy, nonatomic) NSArray *viewControllers;

- (void)_updateContentView;
- (id)init;
- (void)viewDidLayoutSubviews;
- (id)preferredFocusEnvironments;
- (void)loadView;
- (void).cxx_destruct;
- (id)_backgroundImageProxy;
- (struct CGSize { double x0; double x1; })_backgroundImageProxySize;
- (void)_configureWithBgImage:(id)a0 backdropImage:(id)a1;
- (void)updateWithViewElement:(id)a0;

@end
