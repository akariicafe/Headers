@interface _TtCC11FMFindingUI18FMFindingLocalizerP33_22F1FFC3BC980B33F05B7EB45077AC7718DelegateTrampoline : NSObject <PRBTGroupLocalizerDelegate, PRDevicePoseProviderDelegate> {
    void /* unknown type, empty encoding */ owner;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ updateRangeEstimateWatchdogWorkItem;
}

- (id)init;
- (void).cxx_destruct;
- (void)devicePoseUpdated:(id)a0;
- (void)didFailWithError:(id)a0 onItem:(id)a1;
- (void)didStartRangingOn:(id)a0 withError:(id)a1;
- (void)didStopRangingOn:(id)a0 withError:(id)a1;
- (void)didUpdateBTProximity:(id)a0;
- (void)invalidPoseDetected;
- (void)willIntegrateBTRSSI:(id)a0;
- (void)didFindItem:(id)a0;

@end
