@class UILabel, UIButton;
@protocol DOCViewServiceErrorViewDelegate;

@interface DOCViewServiceErrorView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *tryAgainButton;
@property (weak) id<DOCViewServiceErrorViewDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)didTapTryAgain;

@end
