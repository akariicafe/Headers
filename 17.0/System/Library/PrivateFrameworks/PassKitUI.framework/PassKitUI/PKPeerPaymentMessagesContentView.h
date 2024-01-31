@class UIActivityIndicatorView, UIImageView, UILabel, PKPeerPaymentMessagesRoundedButton;

@interface PKPeerPaymentMessagesContentView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) PKPeerPaymentMessagesRoundedButton *button;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) struct { unsigned int horizontalAlignment; unsigned int verticalAlignment; } contentAlignment;
@property (nonatomic) double verticalPadding;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (nonatomic) BOOL ignoreTopSafeArea;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
