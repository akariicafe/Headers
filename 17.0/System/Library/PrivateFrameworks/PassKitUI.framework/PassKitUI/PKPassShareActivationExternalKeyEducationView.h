@class UIImage, UIImageView, PKContinuousButton;
@protocol PKPassShareActivationExternalKeyEducationViewDelegate;

@interface PKPassShareActivationExternalKeyEducationView : UIView {
    id<PKPassShareActivationExternalKeyEducationViewDelegate> _delegate;
    UIImageView *_educationImageView;
    PKContinuousButton *_nextButton;
}

@property (retain, nonatomic) UIImage *educationImage;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_nextButtonPressed;
- (id)initWithContinueButtonText:(id)a0 delegate:(id)a1;

@end
