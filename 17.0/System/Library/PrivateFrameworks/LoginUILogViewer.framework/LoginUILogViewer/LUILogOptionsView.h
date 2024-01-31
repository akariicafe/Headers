@class UIButton, UIStackView;

@interface LUILogOptionsView : UIView

@property (retain, nonatomic) UIStackView *buttonStackView;
@property (retain, nonatomic) UIButton *tenMinutesLogButton;
@property (retain, nonatomic) UIButton *halfHourButton;
@property (retain, nonatomic) UIButton *hourButton;
@property (retain, nonatomic) UIButton *lastDayButton;
@property (retain, nonatomic) UIButton *streamButton;

- (void)_setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_createButtonStackView;
- (id)_createButtonWithTitle:(id)a0;

@end
