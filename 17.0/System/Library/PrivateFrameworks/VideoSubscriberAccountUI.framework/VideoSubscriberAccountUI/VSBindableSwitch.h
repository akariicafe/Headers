@interface VSBindableSwitch : UISwitch

- (void)vs_bind:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (void)vs_unbind:(id)a0;
- (void)_updateBindingForValueChanged:(id)a0;

@end
