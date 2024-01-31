@interface _UIPhysicalButtonBSAction : BSAction

@property (readonly, nonatomic) unsigned long long button;
@property (readonly, nonatomic) unsigned long long behavior;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) unsigned long long generation;

- (id)succinctDescriptionBuilder;
- (long long)UIActionType;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)initWithPhysicalButton:(unsigned long long)a0 behavior:(unsigned long long)a1 generation:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)initWithPhysicalButton:(unsigned long long)a0 behavior:(unsigned long long)a1 state:(unsigned long long)a2 generation:(unsigned long long)a3 completion:(id /* block */)a4;
- (BOOL)settings:(id)a0 appendDescriptionToBuilder:(id)a1 forFlag:(long long)a2 object:(id)a3 ofSetting:(unsigned long long)a4;

@end
