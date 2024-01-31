@class MRUControlCenterButton, UICollectionView, MRUVisualStylingProvider, UICollectionViewFlowLayout, UIView, MRUControlCenterRouteButton;

@interface MRUControlCenterView : UIView

@property (retain, nonatomic) UIView *materialView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *alertView;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (readonly, nonatomic) MRUControlCenterButton *moreButton;
@property (readonly, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (readonly, nonatomic) MRUControlCenterRouteButton *routingButton;
@property (nonatomic) long long state;
@property (nonatomic, getter=isTransitioning) BOOL transitioning;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } transitionFrame;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL showRoutingButton;
@property (nonatomic) BOOL showMoreButton;
@property (nonatomic) BOOL showAlertView;

- (void)layoutSubviewsVertical;
- (void)layoutSubviewsHorizontal;
- (void)updateCollectionViewContentInset;
- (void)setStylingProvider:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateVisibility;
- (void).cxx_destruct;
- (void)layoutSubviewsIPad;
- (void)layoutSubviews;

@end
