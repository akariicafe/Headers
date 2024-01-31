@class ClientConnection, CADXPCImplementation;

@interface CADOperationProxy : NSObject {
    ClientConnection *_conn;
    CADXPCImplementation *_implementation;
}

+ (BOOL)_selectorMayBeCalledBeforeInitialization:(SEL)a0;

- (void)clearCachedAuthorizationStatus;
- (void)forwardInvocation:(id)a0;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithClientConnection:(id)a0;
- (void)_callReplyHandler:(id)a0 ofInvocation:(id)a1 withError:(int)a2;
- (id)_copyReplyBlockFromInvocation:(id)a0;
- (void)_emptyMethod;
- (id)_newImplementation;

@end
