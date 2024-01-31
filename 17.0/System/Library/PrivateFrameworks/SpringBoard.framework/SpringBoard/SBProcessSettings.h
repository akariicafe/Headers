@class NSString, BSMutableSettings;

@interface SBProcessSettings : NSObject <BSSettingDescriptionProvider, SBProcessSettings, NSCopying, BSDescriptionProviding> {
    BSMutableSettings *_settings;
}

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)succinctDescriptionBuilder;
- (id)copyProcessSettings;
- (void)clearProcessSettings;
- (void)setObject:(id)a0 forProcessSetting:(long long)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)boolForProcessSetting:(long long)a0;
- (id)objectForProcessSetting:(long long)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)applyProcessSettings:(id)a0;
- (void)setFlag:(long long)a0 forProcessSetting:(long long)a1;
- (long long)flagForProcessSetting:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
