@class CACBannerView, UIView;

@interface CACBannerViewPresenter : NSObject

@property (retain, nonatomic) CACBannerView *bannerView;
@property (readonly, nonatomic) UIView *containingView;

+ (double)durationToDisplayMessageString:(id)a0;

- (void).cxx_destruct;
- (id)initWithContainingView:(id)a0;
- (void)_hideBannerView;
- (void)dismissBannerView;
- (void)presentBannerViewWithText:(id)a0 type:(long long)a1 avoidingSystemAperature:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)presentBannerViewWithText:(id)a0 type:(long long)a1 avoidingSystemAperature:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 duration:(double)a3;

@end
