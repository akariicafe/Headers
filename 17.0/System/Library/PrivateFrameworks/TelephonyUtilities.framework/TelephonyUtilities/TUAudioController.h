@class NSObject;
@protocol OS_dispatch_semaphore;

@interface TUAudioController : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *modifyingStateLock;

- (void)_releaseLock;
- (id)init;
- (void)_acquireLock;
- (void)_requestUpdatedValueWithBlock:(id /* block */)a0 object:(id *)a1 isRequestingPointer:(BOOL *)a2 forceNewRequest:(BOOL)a3 scheduleTimePointer:(unsigned long long *)a4 notificationString:(id)a5 notificationUserInfo:(id)a6 queue:(id)a7;
- (void)_requestUpdatedValueWithBlock:(id /* block */)a0 object:(id *)a1 isRequestingPointer:(BOOL *)a2 forceNewRequest:(BOOL)a3 scheduleTimePointer:(unsigned long long *)a4 notificationString:(id)a5 queue:(id)a6;
- (void).cxx_destruct;

@end
