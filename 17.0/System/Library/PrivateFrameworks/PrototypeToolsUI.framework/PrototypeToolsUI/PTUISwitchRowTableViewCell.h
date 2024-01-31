@class UISwitch;

@interface PTUISwitchRowTableViewCell : PTUIRowTableViewCell {
    UISwitch *_switch;
}

- (void)_valueChanged:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateDisplayedValue;

@end
