@class NSString, UIImageView, UIImage, UILabel;

@interface SUUIDonationResultView : UIView {
    UIImageView *_imageView;
    UILabel *_messageLabel;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
