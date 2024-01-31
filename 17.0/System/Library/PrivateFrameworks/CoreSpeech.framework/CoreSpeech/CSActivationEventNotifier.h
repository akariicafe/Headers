@class NSObject;
@protocol OS_dispatch_queue;

@interface CSActivationEventNotifier : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedNotifier;

- (id)_createXPCClientConnection;
- (id)init;
- (void)notifyActivationEvent:(id)a0 completion:(id /* block */)a1;
- (void)notifyActivationEventSynchronously:(id)a0 completion:(id /* block */)a1;
- (void)_notifyActivationEvent:(id)a0 completion:(id /* block */)a1;
- (void)notifyActivationEvent:(unsigned long long)a0 deviceId:(id)a1 activationInfo:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
