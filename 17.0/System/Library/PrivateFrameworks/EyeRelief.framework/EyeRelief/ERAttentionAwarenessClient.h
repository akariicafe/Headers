@class AWAttentionAwarenessConfiguration, AWAttentionAwarenessClient, NSObject;
@protocol OS_dispatch_queue;

@interface ERAttentionAwarenessClient : NSObject

@property (retain, nonatomic) AWAttentionAwarenessConfiguration *attentionAwarenessConfiguration;
@property (retain, nonatomic) AWAttentionAwarenessClient *attentionAwarenessClient;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long tooCloseDistanceThreshold;
@property (copy, nonatomic) id /* block */ interruptHandler;

+ (long long)_categoryForDistance:(float)a0 withFaceState:(unsigned long long)a1;
+ (long long)_categoryForDistance:(float)a0 withTooCloseDistanceThreshold:(long long)a1 withFaceState:(unsigned long long)a2;
+ (void)reportAnalyticsFaceDetectAttentionEvent:(id)a0;

- (BOOL)invalidateWithError:(id *)a0;
- (id)init;
- (void)_resumeStreamingWithCompletion:(id /* block */)a0;
- (void)pollWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)cancelWithError:(id *)a0;
- (void)_pollForDistanceWithCompletion:(id /* block */)a0;

@end
