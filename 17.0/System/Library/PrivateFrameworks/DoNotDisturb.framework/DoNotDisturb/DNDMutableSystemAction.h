@class WFToggleSettingContextualAction, WFReverseContextualAction;

@interface DNDMutableSystemAction : DNDSystemAction

@property (retain, nonatomic) WFToggleSettingContextualAction *action;
@property (retain, nonatomic) WFReverseContextualAction *reverseAction;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void)setEnabled:(BOOL)a0;
- (void)setAction:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setReverseAction:(id)a0;

@end
