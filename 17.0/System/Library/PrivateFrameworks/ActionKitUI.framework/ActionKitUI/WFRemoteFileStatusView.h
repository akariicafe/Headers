@class NSArray, UIActivityIndicatorView, UILabel, UIView, UIButton;
@protocol WFRemoteFileStatusViewDelegate;

@interface WFRemoteFileStatusView : UIView

@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) UIActivityIndicatorView *indicatorView;
@property (readonly, nonatomic) UILabel *statusLabel;
@property (readonly, nonatomic) UIButton *recoveryButton;
@property (readonly, nonatomic) NSArray *emptyConstraints;
@property (readonly, nonatomic) NSArray *loadingContraints;
@property (readonly, nonatomic) NSArray *errorConstraints;
@property (weak, nonatomic) id<WFRemoteFileStatusViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setError:(id)a0;
- (void)recoveryButtonTapped;
- (void)setEmptyWithLabel:(BOOL)a0;
- (void)setLoading;

@end
