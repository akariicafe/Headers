@class NSMutableDictionary;

@interface MSPSenderMapsStrategy : MSPSenderStrategy

@property (retain, nonatomic) NSMutableDictionary *lastEtaUpdateDates;
@property (retain, nonatomic) NSMutableDictionary *participantsByCapabilities;
@property (retain, nonatomic) NSMutableDictionary *capabilitiesByParticipant;

- (void)addParticipants:(id)a0;
- (void).cxx_destruct;
- (void)sessionStopped:(id)a0;
- (void)_sendCompatibleInstancesOfState:(id)a0 to:(id)a1;
- (void)_sendDestinationReachedUpdate:(id)a0 to:(id)a1;
- (void)_sendETAUpdate:(id)a0 to:(id)a1;
- (void)_sendResumingToNextDestinationUpdate:(id)a0 to:(id)a1;
- (void)_sendRouteUpdate:(id)a0 to:(id)a1;
- (void)_sendStoppedUpdate:(id)a0 to:(id)a1;
- (void)_sendTrafficUpdate:(id)a0 to:(id)a1;
- (void)_sendUpdatedWaypoints:(id)a0 to:(id)a1;
- (void)destinationReached:(id)a0;
- (void)didFetchCapabilitiesForParticipants:(id)a0;
- (id)initWithGroupSession:(id)a0;
- (void)restoreState:(id)a0;
- (void)resumingToNextDestination:(id)a0;

@end
