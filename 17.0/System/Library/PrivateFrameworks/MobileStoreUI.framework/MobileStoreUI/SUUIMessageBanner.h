@class UIView, NSString, UILabel, NSAttributedString, UIButton;
@protocol SUUIMessageBannerDelegate;

@interface SUUIMessageBanner : UIView {
    UILabel *_label;
    UIButton *_button;
    UIView *_borderView;
    UIButton *_clearButton;
}

@property (weak, nonatomic) id<SUUIMessageBannerDelegate> delegate;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSAttributedString *attributedMessage;
@property (nonatomic) BOOL showsClearButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)value;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_buttonAction:(id)a0;
- (void)_clearButtonAction:(id)a0;

@end
