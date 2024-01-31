@class NSString, CPAnalytics, NSObject;
@protocol OS_os_log;

@interface PHATaskHealthRecorder : NSObject {
    NSObject<OS_os_log> *_loggingConnection;
    CPAnalytics *_analytics;
}

@property (readonly, nonatomic) NSString *taskName;

- (void).cxx_destruct;
- (id)initWithTaskName:(id)a0 loggingConnection:(id)a1 analytics:(id)a2;
- (void)recordTaskCompletionWithTaskCompletionState:(unsigned long long)a0 taskDuration:(id)a1 taskProgress:(id)a2 taskError:(id)a3 lastRunDate:(id)a4;

@end
