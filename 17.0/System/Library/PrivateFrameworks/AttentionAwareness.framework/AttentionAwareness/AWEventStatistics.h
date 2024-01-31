@class NSDate, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AWEventStatistics : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    BOOL _timerResumed;
    unsigned long long _lastLogTime;
    NSDate *_lastLogDate;
    NSMutableDictionary *_stats;
}

+ (id)sharedStatistics;

- (id)init;
- (void).cxx_destruct;
- (void)logEvent:(unsigned long long)a0;

@end
