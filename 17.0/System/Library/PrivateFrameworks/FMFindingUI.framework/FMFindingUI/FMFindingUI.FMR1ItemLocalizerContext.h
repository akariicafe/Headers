@class NSString;

@interface FMFindingUI.FMR1ItemLocalizerContext : NSObject <PRItemLocalizerDelegate> {
    void /* unknown type, empty encoding */ findable;
    void /* unknown type, empty encoding */ connectionContext;
    void /* unknown type, empty encoding */ itemLocalizerState;
    void /* unknown type, empty encoding */ itemState;
    void /* unknown type, empty encoding */ activity;
    void /* unknown type, empty encoding */ hasCalledConfigure;
    void /* unknown type, empty encoding */ rangingOnly;
    void /* unknown type, empty encoding */ stopAsked;
    void /* unknown type, empty encoding */ error;
    void /* unknown type, empty encoding */ releaseItemLocalizerWorkItem;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ backgroundTaskID;
    void /* unknown type, empty encoding */ updateRangeEstimateLogCounter;
    void /* unknown type, empty encoding */ lastLoggedRangeEstimate;
    void /* unknown type, empty encoding */ incrementItemLocalizerHandler;
    void /* unknown type, empty encoding */ decrementItemLocalizerHandler;
    void /* unknown type, empty encoding */ applicationIsInBackground;
    void /* unknown type, empty encoding */ itemLocalizer;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)didFailWithError:(id)a0;
- (void)didUpdateDevicePose:(id)a0;
- (void)didUpdateItemPosition:(id)a0;
- (void)didUpdateRangeEstimate:(id)a0;
- (void)itemChangedState:(unsigned long long)a0;
- (void)itemLocalizerChangedActivity:(unsigned long long)a0;
- (void)itemLocalizerChangedState:(unsigned long long)a0;
- (void)pathIsDegenerate:(id)a0;
- (void)willIntegrateDevicePose:(id)a0;
- (void)willIntegrateProximity:(id)a0;

@end
