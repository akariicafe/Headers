@class TVRCPINEntryAttributes, _TVRMAlertButton, UIVisualEffectView, NSString, UILabel, UIView, TVRPasscodeField;
@protocol TVRAlertViewDelegate;

@interface TVRAlertView : UIView

@property (retain, nonatomic) UIView *blendModeView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *hairlineView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) TVRPasscodeField *passcodeField;
@property (retain, nonatomic) _TVRMAlertButton *cancelButton;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) TVRCPINEntryAttributes *PINEntryAttributes;
@property (weak, nonatomic) id<TVRAlertViewDelegate> delegate;

- (BOOL)resignFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_cancelButton:(id)a0;
- (void)_passcodeFieldTapped;
- (void)_pinTextDidChange:(id)a0;

@end
