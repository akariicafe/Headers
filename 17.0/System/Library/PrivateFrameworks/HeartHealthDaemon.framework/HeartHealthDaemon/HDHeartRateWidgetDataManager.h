@class NSString, HDProfile, NSObject, _HKDelayedOperation;
@protocol OS_dispatch_queue;

@interface HDHeartRateWidgetDataManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    long long _queue_reloadReason;
    _HKDelayedOperation *_reloadOperation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)daemonReady:(id)a0;
- (void)dealloc;
- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)_queue_reloadWidgets;
- (void)_startObservingHeartRateSamples;
- (void)_reloadWidgetsWithReason:(long long)a0;
- (void)_stopObservingHeartRateSamples;

@end
