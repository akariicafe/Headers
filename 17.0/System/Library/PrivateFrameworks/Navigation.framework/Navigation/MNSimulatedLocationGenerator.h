@class _MNLocationSimulationState, NSString, _MNLocationSimulationData, GEOApplicationAuditToken, MNLocation;

@interface MNSimulatedLocationGenerator : NSObject <_MNLocationSimulationStateDelegate> {
    _MNLocationSimulationData *_data;
    _MNLocationSimulationState *_currentState;
}

@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;
@property (retain, nonatomic) NSString *requestingAppIdentifier;
@property (readonly, nonatomic) long long currentStateType;
@property (nonatomic) double speedOverride;
@property (nonatomic) BOOL endAtFinalDestination;
@property (readonly, nonatomic) MNLocation *lastLocation;
@property (readonly, nonatomic) struct { unsigned int x0; float x1; } lastRouteCoordinate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)changeState:(id)a0;
- (void).cxx_destruct;
- (void)updatePosition:(double)a0;
- (void)_updateStartState;
- (id)initWithRouteInfo:(id)a0 simulationType:(long long)a1;
- (id)nextSimulatedLocationWithElapsedTime:(double)a0;
- (void)updateWithRouteInfo:(id)a0;

@end
