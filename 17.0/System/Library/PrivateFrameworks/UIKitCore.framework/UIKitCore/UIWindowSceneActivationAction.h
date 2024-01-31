@class NSString, UIAction;
@protocol _UIWindowSceneActivator;

@interface UIWindowSceneActivationAction : UIAction

@property (weak, nonatomic) id<_UIWindowSceneActivator> _preferredActivator;
@property (copy, nonatomic, setter=_setConfigurationProvider:) id /* block */ _configurationProvider;
@property (copy, nonatomic, setter=_setAlternateAction:) UIAction *_alternateAction;
@property (copy, nonatomic) NSString *title;

+ (id)_defaultImage;
+ (id)_defaultTitle;
+ (id)actionWithHandler:(id /* block */)a0;
+ (id)actionWithIdentifier:(id)a0 alternateAction:(id)a1 configurationProvider:(id /* block */)a2;
+ (id)actionWithTitle:(id)a0 image:(id)a1 identifier:(id)a2 handler:(id /* block */)a3;

- (BOOL)keepsMenuPresented;
- (void).cxx_destruct;
- (id)_immutableCopy;
- (void)setTitle:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_requestSceneActivation;
- (void)_willBePreparedForInitialDisplay:(id)a0;
- (id)initWithTitle:(id)a0 image:(id)a1 identifier:(id)a2 discoverabilityTitle:(id)a3 attributes:(unsigned long long)a4 alternateAction:(id)a5 configurationProvider:(id /* block */)a6;
- (id)initWithTitle:(id)a0 image:(id)a1 identifier:(id)a2 discoverabilityTitle:(id)a3 attributes:(unsigned long long)a4 state:(long long)a5 handler:(id /* block */)a6;

@end
