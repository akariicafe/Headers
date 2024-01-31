@class NSString;

@interface BSMutableSettings : BSSettings <BSMutableSettings>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_isMutable;
- (void)removeAllSettings;
- (void)applySettings:(id)a0;
- (void)setObject:(id)a0 forSetting:(unsigned long long)a1;
- (void)setFlag:(long long)a0 forSetting:(unsigned long long)a1;

@end
