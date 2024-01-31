@class NSArray, UIImageView, IKDocumentBannerElement, UIScrollView, UIView, NSLayoutConstraint;

@interface VideosExtrasBannerController : NSObject

@property (weak, nonatomic) UIView *installedView;
@property (weak, nonatomic) UIScrollView *trackingScrollView;
@property (retain, nonatomic) NSArray *installedConstraints;
@property (retain, nonatomic) UIImageView *bannerImageView;
@property (retain, nonatomic) UIImageView *vignetteImageView;
@property (retain, nonatomic) NSLayoutConstraint *bannerImageViewHeightConstraint;
@property (retain, nonatomic) UIView *maskView;
@property (readonly, nonatomic) IKDocumentBannerElement *bannerElement;
@property (nonatomic) unsigned long long vignetteType;

- (void).cxx_destruct;
- (void)_configureBanner;
- (void)_doAllSetup;
- (void)_updateVignetteImage;
- (id)initWithBannerElement:(id)a0;
- (void)installBannerOnView:(id)a0 anchoredToScrollView:(id)a1;

@end
