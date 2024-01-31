@protocol MFLoadFailedProxyContentBannerViewDelegate;

@interface MFLoadFailedProxyContentBannerView : MFSuggestionBannerView

@property (weak, nonatomic) id<MFLoadFailedProxyContentBannerViewDelegate> delegate;

- (void)dismissAction;
- (void).cxx_destruct;
- (void)primaryAction;
- (void)_dismissed:(id)a0;
- (void)_titleControlTapped:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 failureReason:(long long)a1;

@end
