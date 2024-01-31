@class NSObject;
@protocol OS_dispatch_queue, LKAttentionAwareIdleTimerDelegate;

@interface LKAttentionAwareIdleTimerClient : NSObject

@property (weak, nonatomic) id<LKAttentionAwareIdleTimerDelegate> clientDelegate;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long handle;
@property (nonatomic) unsigned long long idleTimerIndex;

- (void)pause;
- (void)dealloc;
- (void)resume;
- (void).cxx_destruct;
- (void)_wakeupDeviceAfterInterval:(double)a0;
- (id)initWithClientDelegate:(id)a0 timeout:(double)a1 queue:(id)a2;

@end
