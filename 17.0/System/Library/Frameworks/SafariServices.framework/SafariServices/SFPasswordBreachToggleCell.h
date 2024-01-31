@class UISwitch;
@protocol SFPasswordBreachToggleCellDelegate;

@interface SFPasswordBreachToggleCell : UITableViewCell {
    UISwitch *_toggleSwitch;
    id<SFPasswordBreachToggleCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_userToggledBreachDetection:(id)a0;
- (id)initWithReuseIdentifier:(id)a0 delegate:(id)a1;
- (void)setCurrentPasswordBreachState:(BOOL)a0;

@end
