@class NSString;

@interface FMFindingUI.FMNearbyInteractionLocalizerContext : NSObject <ARSessionDelegate, NIInternalSessionDelegate> {
    void /* unknown type, empty encoding */ findable;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ connectionContext;
    void /* unknown type, empty encoding */ findingTechnology;
    void /* unknown type, empty encoding */ itemLocalizerState;
    void /* unknown type, empty encoding */ itemState;
    void /* unknown type, empty encoding */ activity;
    void /* unknown type, empty encoding */ hasCalledConfigure;
    void /* unknown type, empty encoding */ error;
    void /* unknown type, empty encoding */ backgroundTaskID;
    void /* unknown type, empty encoding */ incrementNISessionHandler;
    void /* unknown type, empty encoding */ decrementNISessionHandler;
    void /* unknown type, empty encoding */ niConfiguration;
    void /* unknown type, empty encoding */ niSession;
    void /* unknown type, empty encoding */ arSession;
    void /* unknown type, empty encoding */ applicationIsInBackground;
}

@property (nonatomic, readonly) NSString *description;

- (void)session:(id)a0 didUpdateFrame:(id)a1;
- (BOOL)sessionShouldAttemptRelocalization:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)session:(id)a0 didInvalidateWithError:(id)a1;
- (void)session:(id)a0 didUpdateNearbyObjects:(id)a1;
- (void)session:(id)a0 didDiscoverNearbyObject:(id)a1;
- (void)session:(id)a0 didRemoveNearbyObjects:(id)a1 withReason:(long long)a2;
- (void)session:(id)a0 didUpdateAlgorithmConvergence:(id)a1 forObject:(id)a2;
- (void)session:(id)a0 object:(id)a1 didUpdateRegion:(id)a2 previousRegion:(id)a3;
- (void)session:(id)a0 suspendedWithReason:(long long)a1;
- (void)session:(id)a0 suspensionReasonEnded:(long long)a1 isNoLongerSuspended:(BOOL)a2;

@end
