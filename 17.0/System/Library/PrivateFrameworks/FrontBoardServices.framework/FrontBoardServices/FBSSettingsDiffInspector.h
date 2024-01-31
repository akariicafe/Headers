@class BSMutableKeyedSettings, BSMutableSettings;

@interface FBSSettingsDiffInspector : NSObject {
    BSMutableKeyedSettings *_observerInfo;
    BSMutableSettings *_otherSettingsObserverInfo;
    BOOL _iteratingObservers;
}

- (id)init;
- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)removeAllObservers;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)inspectDiff:(id)a0 withContext:(void *)a1;
- (void)observeOtherSetting:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (void)_observeSettingNamed:(id)a0 withBlock:(id /* block */)a1;
- (void)observeProperty:(SEL)a0 withBlock:(id /* block */)a1;

@end
