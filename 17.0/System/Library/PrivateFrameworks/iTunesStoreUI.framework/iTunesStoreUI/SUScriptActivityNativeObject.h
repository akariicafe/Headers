@class NSString;

@interface SUScriptActivityNativeObject : SUScriptNativeObject <SUActivityDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)activity:(id)a0 canPerformWithActivityItems:(id)a1;
- (void)activity:(id)a0 prepareWithActivityItems:(id)a1;
- (void)destroyNativeObject;
- (void)performActionForActivity:(id)a0;
- (void)setupNativeObject;

@end
