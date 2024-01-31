@class NSString, NSUUID, CSAudioRecordContext, NSObject;
@protocol OS_dispatch_queue;

@interface CSOpportuneSpeakEventMonitor : CSEventMonitor <CSOpportuneSpeakBehaviorMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL isOpportuneSpeakListening;
@property (retain, nonatomic) NSString *audioProviderUUID;
@property (retain, nonatomic) CSAudioRecordContext *audioRecordContext;
@property (retain, nonatomic) NSUUID *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (void)opportuneSpeakBehaviorMonitor:(id)a0 didStopStream:(id)a1;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isStreaming;
- (void)opportuneSpeakBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 audioProviderUUID:(id)a2 option:(id)a3;
- (void).cxx_destruct;
- (void)opportuneSpeakBehaviorMonitor:(id)a0 willStopStream:(id)a1;
- (void)opportuneSpeakBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 audioProviderUUID:(id)a2 successfully:(BOOL)a3 option:(id)a4;
- (void)_notifyStopOpportuneSpeakWithDelay:(double)a0;

@end
