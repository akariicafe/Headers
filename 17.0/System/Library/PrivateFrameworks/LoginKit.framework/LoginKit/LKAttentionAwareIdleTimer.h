@class AWAttentionAwarenessClient, AWAttentionAwarenessConfiguration, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, LKAttentionAwareIdleTimerDelegate;

@interface LKAttentionAwareIdleTimer : NSObject

@property (retain, nonatomic) AWAttentionAwarenessConfiguration *config;
@property (retain, nonatomic) AWAttentionAwarenessClient *client;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *attentionAwarenessClientQueue;
@property (retain, nonatomic) NSMutableDictionary *timeoutDelegateMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<LKAttentionAwareIdleTimerDelegate> delegate;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)startMonitoringAttentionAwareIdleWithDelegate:(id)a0 timeout:(double)a1;
- (void)stopMonitoringAttentionAwareIdleWithDelegate:(id)a0 timeout:(double)a1;

@end
