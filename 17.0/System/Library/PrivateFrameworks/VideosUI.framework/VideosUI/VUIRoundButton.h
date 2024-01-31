@class UIStackView, NSArray, UIImage, UIButton;
@protocol VUIRoundButtonDelegate;

@interface VUIRoundButton : UIView

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIStackView *textLabelStackView;
@property (retain, nonatomic) UIImage *buttonImage;
@property (retain, nonatomic) NSArray *textLabels;
@property (weak, nonatomic) id<VUIRoundButtonDelegate> delegate;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)buttonPressed:(id)a0;
- (void)buttonSelected:(id)a0;
- (void)_setUpViews;
- (void)buttonReleased:(id)a0;
- (void)configureTextStackView;

@end
