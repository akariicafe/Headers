@class NSString, CellThroughputAdviser;

@interface CellThroughputAdviserEnvironment : ThroughputAdviserEnvironment <SymptomsCAObserverDelegate, CoreTelephonyShimDelegate> {
    BOOL _registeredWithAnalyticsObserver;
}

@property (readonly) CellThroughputAdviser *cellThroughputAdviser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)handleEvent:(id)a0 forEventName:(id)a1;
- (void)infoHighThroughputStateChanged:(id)a0;
- (void).cxx_destruct;
- (void)monitorSDMActivations:(BOOL)a0;

@end
