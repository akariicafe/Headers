@class NSString, NRDevice, PBBridgeIDSReachability;
@protocol BPSTinkerConnectionTrackerDelegate;

@interface BPSTinkerConnectionTracker : NSObject <PBBridgeIDSReachabilityObserver> {
    PBBridgeIDSReachability *_reachability;
}

@property (retain, nonatomic) NRDevice *selectedDevice;
@property (weak, nonatomic) id<BPSTinkerConnectionTrackerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
