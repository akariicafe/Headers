@class NSString, MTTimerManager;

@interface MTTimerManagerExportedObject : NSObject <MTTimerClient>

@property (readonly, weak, nonatomic) MTTimerManager *timerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)favoriteTimerDurationsUpdated:(id)a0;
- (void)_didReceiveTimerServerReadyNotification:(id)a0;
- (void)timersAdded:(id)a0;
- (void)timersUpdated:(id)a0;
- (void)timerFired:(id)a0;
- (id)initWithTimerManager:(id)a0;
- (void)timerDismissed:(id)a0;
- (void).cxx_destruct;
- (void)nextTimerChanged:(id)a0;
- (void)timersRemoved:(id)a0;
- (void)latestTimerDurationUpdated:(id)a0;
- (void)recentTimerDurationsUpdated:(id)a0;

@end
