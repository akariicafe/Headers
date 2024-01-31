@class NSDictionary;

@interface MediaPlaybackCore.PlayerController : _TtCs12_SwiftObject <MFStateDumpable, MFResettable, MFPlayerConfigurable> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ userActionTimeout;
    void /* unknown type, empty encoding */ currentItemTransition;
    void /* unknown type, empty encoding */ playbackCoordinatorObservation;
    void /* unknown type, empty encoding */ player;
    void /* unknown type, empty encoding */ audioSession;
    void /* unknown type, empty encoding */ currentActivationToken;
    void /* unknown type, empty encoding */ playerID;
    void /* unknown type, empty encoding */ coordinatedPlaybackSuspension;
    void /* unknown type, empty encoding */ videoPlayerViewController;
    void /* unknown type, empty encoding */ lastAudioSessionMode;
    void /* unknown type, empty encoding */ playbackStartSubscription;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ fsm;
    void /* unknown type, empty encoding */ playerObserver;
    void /* unknown type, empty encoding */ playerSubscription;
    void /* unknown type, empty encoding */ systemObserver;
    void /* unknown type, empty encoding */ systemSubscription;
    void /* unknown type, empty encoding */ didBecomeActiveSubscription;
    void /* unknown type, empty encoding */ willResignActiveSubscription;
    void /* unknown type, empty encoding */ videoPlayerBehavior;
    void /* unknown type, empty encoding */ userEventsMonitor;
    void /* unknown type, empty encoding */ reporter;
    void /* unknown type, empty encoding */ leaseController;
    void /* unknown type, empty encoding */ previousItemID;
    void /* unknown type, empty encoding */ isAirPlayRoute;
}

@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void)setRelativeVolume:(float)a0;
- (void)resetWithReason:(id)a0;
- (void)setSpatializationFormat:(long long)a0;

@end
