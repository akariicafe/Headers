@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAttSiriStateMonitor : CSEventMonitor

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long attendingState;

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)updateState:(unsigned long long)a0;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isAttendingForDictation;
- (unsigned long long)getAttendingState;
- (void).cxx_destruct;
- (BOOL)isAttending;

@end
