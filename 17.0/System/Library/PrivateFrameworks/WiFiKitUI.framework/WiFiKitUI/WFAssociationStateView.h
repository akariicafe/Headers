@class UIImageView, UIActivityIndicatorView;

@interface WFAssociationStateView : UIView

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
