@class NSString, BMAccessTracker, BMAccessAssertionCache;

@interface BMAccessClient : NSObject {
    NSString *_useCase;
    BMAccessAssertionCache *_accessAssertionCache;
    BMAccessTracker *_accessTracker;
}

- (id)init;
- (void).cxx_destruct;
- (id)_newConnectionForDomain:(unsigned long long)a0;
- (id)initWithUseCase:(id)a0;
- (id)requestAccessToResource:(id)a0 mode:(unsigned long long)a1 error:(id *)a2;
- (id)requestEndpointForDomain:(unsigned long long)a0 error:(id *)a1;
- (BOOL)_currentProcessIsSandboxed;
- (id)_requestAccessToResource:(id)a0 mode:(unsigned long long)a1 error:(id *)a2;
- (id)initWithUseCase:(id)a0 sandboxExtensionCache:(id)a1 accessTracker:(id)a2;
- (void)invalidateConnection:(id)a0;

@end
