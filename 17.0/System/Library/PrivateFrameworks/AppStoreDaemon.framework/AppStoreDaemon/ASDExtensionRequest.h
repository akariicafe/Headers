@class NSUUID, NSExtension, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ASDExtensionRequest : NSObject {
    NSObject<OS_dispatch_queue> *_runQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    double _serviceTime;
    NSObject<OS_dispatch_source> *_serviceTimer;
    double _graceTime;
    NSObject<OS_dispatch_source> *_graceTimer;
    NSUUID *_requestUUID;
    id _remoteContextInterface;
    BOOL _errorBlockCalled;
}

@property (copy, nonatomic) id /* block */ errorBlock;
@property (readonly, nonatomic) NSExtension *extension;

- (void)dealloc;
- (void).cxx_destruct;
- (struct { id x0; id x1; })beginRequestForHostContext:(Class)a0 XPCInterface:(id)a1;
- (void)beginRequestForHostContext:(Class)a0 XPCInterface:(id)a1 executionBlock:(id /* block */)a2;
- (void)endRequest;
- (id)initWithExtension:(id)a0 queue:(id)a1;
- (id)initWithExtension:(id)a0 queue:(id)a1 serviceTime:(double)a2 graceTime:(double)a3;
- (void)requestEnded;

@end
