@class NSMutableSet;

@interface MSPSenderMinimalStrategy : MSPSenderMapsStrategy {
    NSMutableSet *_participantsNeedingInitialState;
}

- (void)addParticipants:(id)a0;
- (void)setState:(id)a0;
- (void).cxx_destruct;
- (void)removeParticipants:(id)a0;
- (BOOL)_needToSendEtaRefreshFor:(id)a0 state:(id)a1;
- (void)_sendInitialStateIfNeedded;
- (BOOL)_validDestinationState:(id)a0;
- (void)didFetchCapabilitiesForParticipants:(id)a0;
- (void)etaUpdated:(id)a0;
- (id)initWithGroupSession:(id)a0;
- (void)waypointsUpdated:(id)a0;

@end
