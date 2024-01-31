@class NSString;
@protocol MPCPlaybackEngineEventStreamSubscription;

@interface MPCVocalAttenuationPowerLogConsumer : NSObject <MPCPlaybackEngineEventConsumer>

@property (class, readonly, nonatomic) struct PPSTelemetryIdentifier { } *telemetryID;
@property (class, readonly, copy, nonatomic) NSString *identifier;

@property (readonly, nonatomic) id<MPCPlaybackEngineEventStreamSubscription> subscription;
@property (nonatomic) BOOL lastVocalAttenuationIsActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)unsubscribeFromEventStream:(id)a0;
- (void).cxx_destruct;
- (void)subscribeToEventStream:(id)a0;
- (void)reportVocalAttenuationIsActive:(BOOL)a0 date:(id)a1;

@end
