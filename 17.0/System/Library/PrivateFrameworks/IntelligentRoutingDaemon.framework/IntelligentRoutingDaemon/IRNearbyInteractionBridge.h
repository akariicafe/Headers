@class NSNumber, NSString, NIConfiguration, NISession;
@protocol IRProximityBridgeDelegateProtocol;

@interface IRNearbyInteractionBridge : NSObject <NIInternalSessionDelegate, IRProximityBridgeProtocol>

@property (weak, nonatomic) id<IRProximityBridgeDelegateProtocol> delegate;
@property (retain, nonatomic) NISession *niSession;
@property (retain, nonatomic) NIConfiguration *niConfiguration;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL isObserver;
@property (retain, nonatomic) NSNumber *binaryRegionThreshold;
@property (nonatomic) BOOL trackRegion;
@property (nonatomic) BOOL trackUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (void)invalidate;
- (void).cxx_destruct;
- (void)session:(id)a0 didInvalidateWithError:(id)a1;
- (void)session:(id)a0 didUpdateNearbyObjects:(id)a1;
- (void)session:(id)a0 didDiscoverNearbyObject:(id)a1;
- (void)session:(id)a0 didRemoveNearbyObjects:(id)a1 withReason:(long long)a2;
- (void)session:(id)a0 object:(id)a1 didUpdateRegion:(id)a2 previousRegion:(id)a3;
- (void)sessionDidStartRunning:(id)a0;
- (void)sessionSuspensionEnded:(id)a0;
- (void)sessionWasSuspended:(id)a0;
- (double)_nearbyObjectDistance:(id)a0;
- (void)_updateRegionToDelegate:(id)a0;
- (id)initWithDelegate:(id)a0 NIConfiguration:(id)a1 observer:(BOOL)a2 name:(id)a3;

@end
