@class SSXPCConnection, NSObject, SSMetricsConfiguration;
@protocol OS_dispatch_queue;

@interface SSMetricsController : NSObject {
    SSXPCConnection *_connection;
    SSMetricsConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_flushSerialQueue;
    BOOL _flushOnForeground;
    id /* block */ _flushTimerBlock;
    NSObject<OS_dispatch_queue> *_flushTimerQueue;
}

@property (nonatomic, getter=isFlushTimerEnabled) BOOL flushTimerEnabled;

- (id)_connection;
- (void)_applicationWillEnterForeground;
- (id)init;
- (id)serialQueue;
- (void)dealloc;
- (BOOL)isDisabled;
- (void)setGlobalConfiguration:(id)a0;
- (void)_serialQueueInsertEvents:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)flushUnreportedEventsWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)configuration;
- (id)pingURLs;
- (id)_userType;
- (void)_flushUnreportedEventsIfEnabled;
- (id)_cookieValuesForConfiguration:(id)a0;
- (void)_enumerateFieldValuesWithMap:(id)a0 fieldData:(id)a1 block:(id /* block */)a2;
- (void)_handleFlushTimer;
- (void)_setupFlushTimer;
- (id)_valueForField:(id)a0 withFieldData:(id)a1;
- (void)insertEvent:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)insertEvents:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)locationWithPosition:(long long)a0 type:(id)a1 fieldData:(id)a2;
- (void)recordAnalyticsForMetricsDialogEvent:(id)a0 withTopic:(id)a1;
- (void)setPageConfiguration:(id)a0;

@end
