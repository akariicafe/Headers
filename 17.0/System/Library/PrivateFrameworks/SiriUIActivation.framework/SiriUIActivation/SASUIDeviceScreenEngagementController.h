@class AWAttentionAwarenessClient, NSMutableDictionary, SASUIUserEngagementProviderFactory, NSObject;
@protocol OS_dispatch_queue, SASUIDeviceScreenEngagementControllerDelegate;

@interface SASUIDeviceScreenEngagementController : NSObject {
    SASUIUserEngagementProviderFactory *_userAttentionSignalProviderFactory;
    AWAttentionAwarenessClient *_touchAttentionAwarenessClient;
    AWAttentionAwarenessClient *_buttonPressAwarenessClient;
    NSMutableDictionary *_attentionDetectionStatuses;
    NSObject<OS_dispatch_queue> *_attentionAwarenessHandlerQueue;
}

@property (weak, nonatomic) id<SASUIDeviceScreenEngagementControllerDelegate> delegate;

- (void)_handleTouchAttentionEvent:(id)a0;
- (void)dealloc;
- (BOOL)startIfNeeded:(id *)a0;
- (BOOL)stopIfNeeded:(id *)a0;
- (BOOL)_detectionStartedForType:(unsigned long long)a0;
- (BOOL)startIfNeededForTypes:(unsigned long long)a0 error:(id *)a1;
- (void)startIfNeededForTypes:(unsigned long long)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
- (BOOL)_startTouchAttentionAwarenessClient:(id *)a0;
- (BOOL)_stopButtonPressAttentionAwarenessClient:(id *)a0;
- (BOOL)_startButtonPressAttentionAwarenessClient:(id *)a0;
- (void).cxx_destruct;
- (id)initWithSamplingInterval:(double)a0 attentionLostTimeout:(double)a1;
- (void)_handleButtonPressAttentionEvent:(id)a0;
- (BOOL)stopIfNeededForTypes:(unsigned long long)a0 error:(id *)a1;
- (BOOL)_stopTouchAttentionAwarenessClient:(id *)a0;
- (void)_setDetectionStarted:(BOOL)a0 forType:(unsigned long long)a1;
- (id)initWithSignalProviderFactory:(id)a0;

@end
