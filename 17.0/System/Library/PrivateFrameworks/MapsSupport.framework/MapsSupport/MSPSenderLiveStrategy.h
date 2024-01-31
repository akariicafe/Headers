@class NSMutableSet;

@interface MSPSenderLiveStrategy : MSPSenderMapsStrategy {
    NSMutableSet *_participantsNeedingRoute;
}

- (void)addParticipants:(id)a0;
- (void)setState:(id)a0;
- (void).cxx_destruct;
- (void)trafficUpdated:(id)a0;
- (BOOL)_needToSendEtaRefreshFor:(id)a0;
- (void)_sendInitialRouteIfNeeded;
- (void)didFetchCapabilitiesForParticipants:(id)a0;
- (void)etaUpdated:(id)a0;
- (id)initWithGroupSession:(id)a0;
- (void)routeUpdated:(id)a0;
- (void)waypointsUpdated:(id)a0;

@end
