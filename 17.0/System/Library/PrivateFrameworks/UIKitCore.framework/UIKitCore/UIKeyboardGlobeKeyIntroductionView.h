@class UITextView, _UIBackdropView, UILabel, NSDate, UIButton;

@interface UIKeyboardGlobeKeyIntroductionView : UIView

@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) _UIBackdropView *backdropView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextView *descriptionLabel;
@property (retain, nonatomic) UIButton *continueButton;
@property (retain, nonatomic) NSDate *startDate;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (long long)backdropStyleForRenderConfig:(id)a0;
- (void)continueButtonTapped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completion:(id /* block */)a1;

@end
