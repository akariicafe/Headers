@class DYTransport, NSObject;
@protocol OS_dispatch_queue;

@interface DYTransportSource : NSObject {
    id /* block */ _messageHandler;
    id /* block */ _cancellationHandler;
    id /* block */ _registrationHandler;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_mqueue;
    _Atomic int _state;
}

@property (copy, nonatomic) id /* block */ messageHandler;
@property (copy, nonatomic) id /* block */ cancellationHandler;
@property (copy, nonatomic) id /* block */ registrationHandler;
@property (readonly, retain, nonatomic) DYTransport *transport;
@property (readonly, nonatomic) BOOL cancelled;

- (void)_cancel;
- (id)init;
- (void)dealloc;
- (void)suspend;
- (void)resume;
- (void)_register;
- (void)cancel;
- (void)_callCancellationHandler;
- (void)_callRegistrationHandler;
- (void)_dispatch:(id)a0;
- (id)_initWithQueue:(id)a0 transport:(id)a1;

@end
