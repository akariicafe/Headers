@class UISwitch, UIActivityIndicatorView;

@interface PKSettingTableCell : PKTableViewCell {
    UIActivityIndicatorView *_spinner;
    BOOL _showingSpinner;
}

@property (nonatomic, getter=isOn) BOOL on;
@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL action;
@property (retain, nonatomic) UISwitch *settingSwitch;

- (void)dealloc;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (id)initWithTitle:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)setOn:(BOOL)a0 notify:(BOOL)a1;
- (void)showSpinner:(BOOL)a0;

@end
