@class UIButton, UIView;
@protocol HUTimerControlCancelDelegate;

@interface HUTimerControlCancelButtonView : UIView

@property (retain, nonatomic) UIView *circleBackgroundView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) id<HUTimerControlCancelDelegate> delegate;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)layoutSubviews;
- (void)_cancelTimer:(id)a0;

@end
