@class NSString, SUUIGiftItemView, UIImage, UIImageView, UILabel, UIButton;

@interface SUUIGiftResultView : UIView {
    UIImageView *_imageView;
    UILabel *_titleLabel;
}

@property (readonly, nonatomic) UIButton *giftAgainButton;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) SUUIGiftItemView *itemView;
@property (copy, nonatomic) NSString *title;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
