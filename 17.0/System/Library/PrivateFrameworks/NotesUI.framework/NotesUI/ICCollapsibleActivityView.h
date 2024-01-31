@class UIActivityIndicatorView;

@interface ICCollapsibleActivityView : ICCollapsibleBaseView

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (readonly, nonatomic) BOOL isAnimating;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)setCollapsed:(BOOL)a0;
- (void)performSetup;

@end
