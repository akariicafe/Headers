@class UIButton, UIColor;
@protocol SBWindowedAccessoryViewDelegate;

@interface SBWindowedAccessoryView : UIView

@property (retain, nonatomic) UIButton *forceDetachWindowedAcessoryButton;
@property (weak, nonatomic) id<SBWindowedAccessoryViewDelegate> delegate;
@property (retain, nonatomic) UIColor *backgroundColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_forceDetachWindowedAcessoryButtonTapped:(id)a0;

@end
