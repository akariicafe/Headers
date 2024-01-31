@class NSDictionary;

@interface VUIJSApplication : VUIJSObject <VUIJSApplication>

@property (readonly, nonatomic) NSDictionary *traitCollection;

- (void)dispatchErrorWithMessage:(id)a0 sourceURL:(id)a1 line:(id)a2;
- (void)exitAppWithOptions:(id)a0;
- (void)launchAppWithOptions:(id)a0;
- (void)openURLWithOptions:(id)a0;
- (void)reload:(id)a0 :(id)a1;
- (void)resumeAppWithOptions:(id)a0;
- (void)suspendAppWithOptions:(id)a0;
- (void)updatedAppWithOptions:(id)a0;

@end
