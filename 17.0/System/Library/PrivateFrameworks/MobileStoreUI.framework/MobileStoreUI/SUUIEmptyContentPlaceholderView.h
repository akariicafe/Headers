@class NSString, UIImageView, UIImage, UILabel, UIButton;

@interface SUUIEmptyContentPlaceholderView : UIView {
    UIImageView *_imageView;
    UILabel *_label;
    UIButton *_signInButton;
}

@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } placeholderImageInsets;
@property (copy, nonatomic) NSString *placeholderMessage;
@property (readonly, nonatomic) UILabel *placeholderMessageLabel;
@property (nonatomic) BOOL showsSignInButton;
@property (readonly, nonatomic) UIButton *signInButton;

- (void)setBackgroundColor:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)maskPlaceholdersInBackdropView:(id)a0;

@end
