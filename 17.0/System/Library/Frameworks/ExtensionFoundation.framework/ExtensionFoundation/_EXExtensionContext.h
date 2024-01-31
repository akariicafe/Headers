@interface _EXExtensionContext : NSExtensionContext <_EXConnectionHandler>

- (id)init;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (void)invalidate;
- (void)completeRequestReturningItems:(id)a0 completionHandler:(id /* block */)a1;
- (id)makeXPCConnectionWithError:(id *)a0;
- (void)completeRequestWithHandler:(id /* block */)a0;

@end
