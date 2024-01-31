@class UIView;

@interface GKStaticRenderContentView : UIView

@property (retain, nonatomic) UIView *contentView;

- (void)prepareForReuse;
- (void)setNeedsLayout;
- (id)description;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)prepareToReuseSubviewsOfView:(id)a0;

@end
