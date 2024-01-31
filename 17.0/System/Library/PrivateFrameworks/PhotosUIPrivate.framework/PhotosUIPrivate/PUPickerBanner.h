@class UIView, PUPickerBannerView;

@interface PUPickerBanner : PUAbstractNavigationBanner {
    UIView *_view;
}

@property (readonly, nonatomic) PUPickerBannerView *bannerView;

- (double)height;
- (id)view;
- (void).cxx_destruct;

@end
