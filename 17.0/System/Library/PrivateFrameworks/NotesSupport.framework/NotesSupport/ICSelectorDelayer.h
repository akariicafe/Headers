@class NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface ICSelectorDelayer : NSObject

@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (nonatomic) BOOL waitToFireUntilRequestsStop;
@property (nonatomic) BOOL callOnMainThread;
@property (retain, nonatomic) NSDate *requestFireDate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (copy, nonatomic) id /* block */ fireBlock;
@property double delay;
@property double maximumDelay;
@property (readonly, nonatomic) BOOL isScheduledToFire;

- (void)callTargetSelector;
- (void)dealloc;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 delay:(double)a2 waitToFireUntilRequestsStop:(BOOL)a3 callOnMainThread:(BOOL)a4;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 delay:(double)a2 maximumDelay:(double)a3 callOnMainThread:(BOOL)a4;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 delay:(double)a2 maximumDelay:(double)a3 waitToFireUntilRequestsStop:(BOOL)a4 callOnMainThread:(BOOL)a5;
- (void)requestFire;
- (void)fireImmediately;
- (void)_cancelFireRequests;
- (void).cxx_destruct;
- (void)cancelPreviousFireRequests;

@end
