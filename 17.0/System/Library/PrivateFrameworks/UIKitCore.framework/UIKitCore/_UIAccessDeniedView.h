@class NSString, UIImageView, UILabel;

@interface _UIAccessDeniedView : UIView {
    UIImageView *_lockView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;

- (id)_textColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
