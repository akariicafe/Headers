@class NSString, HDProfile, NSObject, HKMobilityWalkingSteadinessAnalyticsManager;
@protocol OS_dispatch_queue;

@interface HDMobilityNotificationManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HKMobilityWalkingSteadinessAnalyticsManager *_analyticsManager;
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
- (void)_queue_showNotificationForLocalSteadinessEvent:(id)a0 completion:(id /* block */)a1;

@end
