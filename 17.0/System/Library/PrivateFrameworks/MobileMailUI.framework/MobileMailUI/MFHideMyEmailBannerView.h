@protocol MFHideMyEmailBannerViewDelegate;

@interface MFHideMyEmailBannerView : MFSuggestionBannerView

@property (weak, nonatomic) id<MFHideMyEmailBannerViewDelegate> delegate;

- (void)dismissAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)primaryAction;

@end
