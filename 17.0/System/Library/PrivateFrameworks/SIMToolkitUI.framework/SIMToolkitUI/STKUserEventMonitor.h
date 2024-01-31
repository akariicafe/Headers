@class AWAttentionAwarenessClient, AWAttentionAwarenessConfiguration, NSObject;
@protocol OS_dispatch_queue, STKUserEventMonitorDelegate;

@interface STKUserEventMonitor : NSObject {
    AWAttentionAwarenessConfiguration *_queue_configuration;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _invalidated;
}

@property (retain, nonatomic) AWAttentionAwarenessClient *attentionAwarenessClient;
@property (weak, nonatomic) id<STKUserEventMonitorDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (id)init;
- (id)_queue;
- (void)dealloc;
- (void)_suspend;
- (void)_resume;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_initWithAttentionAwarenessClient:(id)a0;
- (void)_queue_handleAttentionAwarenessEvent:(id)a0;

@end
