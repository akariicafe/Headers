@class FPXExtensionContext;

@interface FPXConnectionHandler : _EXExtension <_EXConnectionHandler> {
    FPXExtensionContext *_currentContext;
}

- (BOOL)shouldAcceptConnection:(id)a0;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (Class)delegateClass;
- (void).cxx_destruct;
- (void)invalidateCurrentContext;
- (id)makeNewContext;

@end
