@class UIButton, ASTBiggerProgressView;
@protocol AXGestureRecorderControlsViewDelegate;

@interface AXGestureRecorderControlsView : UIView {
    ASTBiggerProgressView *_progressView;
}

@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (weak, nonatomic) id<AXGestureRecorderControlsViewDelegate> delegate;
@property (nonatomic) float progress;
@property (nonatomic, getter=isLeftButtonEnabled) BOOL leftButtonEnabled;
@property (nonatomic, getter=isRightButtonEnabled) BOOL rightButtonEnabled;
@property (retain, nonatomic) UIButton *middleButton;

+ (double)defaultHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_buttonTapped:(id)a0;
- (void)layoutSubviews;
- (id)makeButton;
- (void)setLeftButtonColor:(int)a0 title:(id)a1 enabled:(BOOL)a2 rightButtonColor:(int)a3 title:(id)a4 enabled:(BOOL)a5 animationDuration:(double)a6 completion:(id /* block */)a7;

@end
