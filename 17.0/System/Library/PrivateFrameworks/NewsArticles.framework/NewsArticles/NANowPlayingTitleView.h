@class UIImageView, MPUMarqueeView, UILabel, NATouchInsetsButton;
@protocol NANowPlayingTitleViewLayoutSpecProvider, NANowPlayingTitleViewDelegate;

@interface NANowPlayingTitleView : UIView

@property (retain, nonatomic) UIImageView *publisherImageView;
@property (readonly, nonatomic) MPUMarqueeView *publisherMarqueeContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) MPUMarqueeView *titleMarqueeContainer;
@property (retain, nonatomic) NATouchInsetsButton *ellipsisButton;
@property (weak, nonatomic) id<NANowPlayingTitleViewDelegate> delegate;
@property (weak, nonatomic) id<NANowPlayingTitleViewLayoutSpecProvider> layoutSpecProvider;
@property (readonly, nonatomic) double publisherLogoHeight;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTitle:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setMarqueeRunning:(BOOL)a0;
- (void)setPublisherImage:(id)a0 fallbackName:(id)a1;
- (void)_setPublisherImage:(id)a0;
- (void)ellipsisButtonTapped:(id)a0;
- (BOOL)hasPublisherLogo;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutSpecProvider:(id)a1;

@end
