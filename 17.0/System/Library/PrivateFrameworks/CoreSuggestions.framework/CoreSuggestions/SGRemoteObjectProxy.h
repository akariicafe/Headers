@class SGDaemonConnection;
@protocol SGDSuggestManagerAllProtocol;

@interface SGRemoteObjectProxy : NSObject <SGDSuggestManagerAllProtocol> {
    SGDaemonConnection *_connection;
    id<SGDSuggestManagerAllProtocol> _inProcessSuggestManager;
    BOOL _queuesRequestsIfBusy;
}

+ (id)_copyInvocationToHeapIfNeeded:(id)a0;

- (void)_forwardStackInvocation:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 queuesRequestsIfBusy:(BOOL)a1;
- (id)initWithInProcessSuggestManager:(id)a0;

@end
