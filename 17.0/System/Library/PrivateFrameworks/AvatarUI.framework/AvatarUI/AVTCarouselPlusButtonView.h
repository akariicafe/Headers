@class AVTUIEnvironment, UIButton;

@interface AVTCarouselPlusButtonView : UIView

@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (readonly, nonatomic) UIButton *button;
@property (nonatomic) struct CGSize { double width; double height; } maxItemSize;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL allowHighlight;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 environment:(id)a1;

@end
