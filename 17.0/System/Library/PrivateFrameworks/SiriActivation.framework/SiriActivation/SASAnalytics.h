@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SASAnalytics : NSObject {
    NSObject<OS_dispatch_queue> *_analyticsEventQueue;
}

@property (nonatomic) BOOL shouldLogAnalyticsEvents;
@property (retain, nonatomic) NSMutableArray *pendingAnalyticsEventQueue;

+ (id)analytics;
+ (id)new;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)flushPendingAnalyticsEventQueue;
- (void)_enqueueAnalyticsEvent:(id)a0;
- (void)enqueueCurrentAnalyticsEventWithType:(long long)a0 context:(id)a1;

@end
