@class MRUActivityRouteView, MRUNowPlayingLabelView, UIImageView, MRUVisualStylingProvider;

@interface MRURouteRecommendationPlatterView : UIView

@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (readonly, nonatomic) UIImageView *actionImageView;
@property (readonly, nonatomic) MRUActivityRouteView *activityRouteView;
@property (readonly, nonatomic) MRUNowPlayingLabelView *labelView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_addLayoutConstraints;

@end
