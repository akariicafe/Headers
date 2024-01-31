@class SOSFlow, NSString, HKHealthStore;

@interface SOSFlowManager : NSObject <SOSFlowObserver, SOSFlowManagerCoexProtocol> {
    HKHealthStore *_healthStore;
}

@property (retain, nonatomic) SOSFlow *activeSOSFlow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)emergencyCallInitiated;
- (void)kappaWasRequested;
- (void)sosFlow:(id)a0 didChangeToState:(long long)a1;
- (void)sosFlow:(id)a0 willHandleEvent:(unsigned long long)a1 withMetaData:(id)a2;
- (void)startFreshSOSFlowWithTriggerMechanism:(long long)a0;
- (void)startSOSFlowWithTriggerMechanism:(long long)a0;

@end
