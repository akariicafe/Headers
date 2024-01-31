@class NSObject;
@protocol OS_dispatch_queue;

@interface DCSelectorDelayer : NSObject

@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (nonatomic) BOOL waitToFireUntilRequestsStop;
@property (nonatomic) BOOL callOnMainThread;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (copy, nonatomic) id /* block */ fireBlock;
@property double delay;
@property (readonly, nonatomic) BOOL isScheduledToFire;

- (void)callTargetSelector;
- (void)dealloc;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 delay:(double)a2 waitToFireUntilRequestsStop:(BOOL)a3 callOnMainThread:(BOOL)a4;
- (void)requestFire;
- (void)fireImmediately;
- (void)_cancelFireRequests;
- (void).cxx_destruct;
- (void)cancelPreviousFireRequests;

@end
