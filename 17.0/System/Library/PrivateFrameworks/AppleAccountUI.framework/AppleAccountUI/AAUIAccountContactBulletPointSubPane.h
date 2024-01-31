@class UIStackView, NSString, UIImageView, UIImage, UILabel;

@interface AAUIAccountContactBulletPointSubPane : UIView

@property (readonly, nonatomic) UIImageView *bulletImageView;
@property (readonly, nonatomic) UIStackView *messageStackView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;

- (void).cxx_destruct;
- (id)_verticalStackView;
- (id)_imageViewWithImage:(id)a0;
- (id)_labelWithString:(id)a0 title:(BOOL)a1;
- (id)initWithImage:(id)a0 title:(id)a1 message:(id)a2;

@end
