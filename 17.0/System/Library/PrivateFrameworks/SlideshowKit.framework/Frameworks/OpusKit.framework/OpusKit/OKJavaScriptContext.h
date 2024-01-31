@interface OKJavaScriptContext : JSContext

- (void)setupOpus;
- (id)init;
- (void)dealloc;
- (void)setupNativeStructs;
- (void)setupActions;
- (void)setupNativeObjects;
- (void)setupConvenienceMethods;
- (void)setupContentFilters;
- (void)setupWidgets;
- (void)setupExceptionHandler;
- (void)setupTransitions;
- (void)setupConsole;
- (id)valueFromJSValue:(id)a0;
- (void)setupControllers;

@end
