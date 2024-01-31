@class UIAlertController, UILabel, UIView, NSObject;
@protocol OS_os_log;

@interface BKUIAlertView : UIView {
    UIAlertController *_alertController;
    double _alertHudTextStartTime;
    NSObject<OS_os_log> *bkui_alert_view_log;
}

@property (weak, nonatomic) id parent;
@property (nonatomic) SEL cancelButtonSelector;
@property (nonatomic) SEL otherButtonSelector;
@property (weak, nonatomic) UIView *alertHudView;
@property (weak, nonatomic) UILabel *alertHudText;
@property (nonatomic) double alertHudTimeout;
@property (nonatomic) double alertHudMinDisplayTime;

- (id)init;
- (void)_init;
- (void).cxx_destruct;
- (void)hideAnimated:(BOOL)a0;
- (void)_hideAlertHudView;
- (void)_setFadeAnimation:(id)a0;
- (BOOL)isAlertHidden;
- (void)show:(id)a0 message:(id)a1 cancelButtonTitle:(id)a2 viewController:(id)a3;
- (void)show:(id)a0 title:(id)a1 message:(id)a2 cancelButtonTitle:(id)a3 cancelButtonSelector:(SEL)a4 otherButtonTitle:(id)a5 otherButtonSelector:(SEL)a6 viewController:(id)a7;
- (void)show:(id)a0 title:(id)a1 message:(id)a2 cancelButtonTitle:(id)a3 cancelButtonSelector:(SEL)a4 viewController:(id)a5;
- (void)showAlert:(id)a0 message:(id)a1 cancelButtonTitle:(id)a2 otherButtonTitle:(id)a3 viewController:(id)a4;

@end
