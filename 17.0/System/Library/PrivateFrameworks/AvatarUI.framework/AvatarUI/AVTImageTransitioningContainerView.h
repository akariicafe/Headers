@class AVTUIAnimatingImageView, UIImage, UIView;

@interface AVTImageTransitioningContainerView : UIView

@property (readonly, nonatomic) AVTUIAnimatingImageView *imageViewsContainer;
@property (readonly, nonatomic) UIView *borderMaskView;
@property (readonly, nonatomic) UIView *staticView;
@property (retain, nonatomic) UIView *liveView;
@property (retain, nonatomic) UIImage *staticImage;
@property (nonatomic) struct CGSize { double width; double height; } aspectRatio;
@property (readonly, nonatomic) long long layoutMode;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })borderMaskRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageViewRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 liveViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 imageSize:(struct CGSize { double x0; double x1; })a2 scale:(double)a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })liveViewRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 aspectRatio:(struct CGSize { double x0; double x1; })a1 layoutMode:(long long)a2 scale:(double)a3;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutMode:(long long)a1;
- (void)setStaticImage:(id)a0 animated:(BOOL)a1;
- (void)setStaticViewVisible:(BOOL)a0;
- (void)transitionLiveViewToFront;
- (void)transitionStaticViewToFront;

@end
