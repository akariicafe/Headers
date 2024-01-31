@class NSArray, AVRoutingSessionManagerInternal, AVRoutingSession;

@interface AVRoutingSessionManager : NSObject {
    AVRoutingSessionManagerInternal *_ivars;
}

@property (readonly) AVRoutingSession *currentRoutingSession;
@property (readonly) NSArray *likelyExternalDestinations;
@property (readonly) NSArray *allLikelyDestinations;
@property (readonly) BOOL prefersLikelyDestinationsOverCurrentRoutingSession;

+ (void)initialize;
+ (BOOL)longFormVideoManagerCanHaveCurrentSessionWithDestinationOfType:(long long)a0 subType:(long long)a1;
+ (id)longFormVideoRoutingSessionManager;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithFigRoutingSessionManager:(struct OpaqueFigRoutingSessionManager { } *)a0;
- (void)startRoutingSessionForHighConfidenceExternalDestinationIfPresentWithCompletionHandler:(id /* block */)a0;
- (BOOL)startRoutingSessionWithOutputDeviceDescriptions:(id)a0 error:(id *)a1;
- (BOOL)startSuppressingLikelyDestinationsUntilNextPlayEventAndReturnError:(id *)a0;
- (BOOL)stopSuppressingLikelyDestinationsAndReturnError:(id *)a0;
- (void)updateCurrentRoutingSessionFromLikelyDestinationsWithCompletionHandler:(id /* block */)a0;

@end
