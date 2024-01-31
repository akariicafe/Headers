@class NSMutableDictionary;

@interface CloudSettingsDispatchingMediator : NSObject <CloudSettingsMediator>

@property (retain) NSMutableDictionary *keysMap;
@property BOOL dispatchSettersOnMain;

- (id)init;
- (void)applySettings:(id)a0;
- (void).cxx_destruct;
- (id)mergeSettings:(id)a0;
- (id)deviceSettingsForKeys:(id)a0;
- (void)registerKey:(id)a0 getter:(SEL)a1 setter:(SEL)a2;
- (void)registerKey:(id)a0 getter:(SEL)a1 setter:(SEL)a2 merger:(SEL)a3 type:(id)a4;
- (void)registerKeys;

@end
