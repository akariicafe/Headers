@class Protocol, NSString, NSError, NSObject;
@protocol NSXPCProxyCreating;

@interface FPXPCAutomaticErrorProxy : NSObject <FPXPCAutomaticErrorProxy, NSCopying> {
    NSObject<NSXPCProxyCreating> *_target;
    Protocol *_protocol;
    NSError *_error;
    id /* block */ _requestWillBeginBlock;
    id /* block */ _requestDidBeginBlock;
    NSString *_name;
    id _retainSelfWhileMessageIsPending;
    BOOL _isSynchronous;
    _Atomic unsigned long long _retainCounter;
}

@property (nonatomic) int requestEffectivePid;
@property (nonatomic) BOOL sanitizeErrors;
@property unsigned long long timeoutState;

+ (BOOL)sanitizeErrors;

- (void)forwardInvocation:(id)a0;
- (id /* block */)_requestWillBegin:(SEL)a0 requestID:(id)a1;
- (void)_requestDidFinish:(id)a0 requestDidFinishBlock:(id /* block */)a1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)remoteObjectProxy;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxy;
- (id)initWithRemoteObjectProxy:(id)a0 protocol:(id)a1 orError:(id)a2 name:(id)a3 requestPid:(int)a4 requestWillBegin:(id /* block */)a5 requestDidBegin:(id /* block */)a6;
- (id)initWithConnection:(id)a0 protocol:(id)a1 orError:(id)a2 name:(id)a3 requestPid:(int)a4 requestWillBegin:(id /* block */)a5 requestDidBegin:(id /* block */)a6;
- (id)initWithConnection:(id)a0 protocol:(id)a1 orError:(id)a2 name:(id)a3 requestPid:(int)a4;
- (id)initWithConnection:(id)a0 protocol:(id)a1 orError:(id)a2 name:(id)a3 requestPid:(int)a4 requestWillBegin:(id /* block */)a5;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_requestDidBegin:(SEL)a0 progress:(id)a1 requestID:(id)a2;

@end
