@class UIView;
@protocol FIUIHealthSettingsForceUpdatable;

@interface FIUIHealthSettingsTableViewCell : UITableViewCell {
    UIView *_inputView;
}

@property (weak, nonatomic) id<FIUIHealthSettingsForceUpdatable> forceUpdatable;

- (BOOL)resignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)setInputView:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)becomeFirstResponder;
- (id)inputView;
- (BOOL)canResignFirstResponder;

@end
