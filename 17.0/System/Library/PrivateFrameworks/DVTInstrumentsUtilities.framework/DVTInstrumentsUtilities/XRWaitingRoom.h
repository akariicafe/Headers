@class NSMutableSet, NSMutableArray, XRMobileAgent;
@protocol XRMobileAgentOwner;

@interface XRWaitingRoom : XRMobileAgentQueueStop {
    id _ownerID;
    XRMobileAgent<XRMobileAgentOwner> *_visitingOwner;
    NSMutableArray *_unaffiliatedVisitorsWaiting;
    NSMutableSet *_teamMembersWaiting;
    NSMutableSet *_activeTeams;
    BOOL _abandoned;
}

+ (void)initialize;

- (void)abandon;
- (void).cxx_destruct;
- (void)_escortAgentToExit:(id)a0 withTicket:(id)a1;
- (BOOL)_holdReceivedAgent:(id)a0 ticket:(id)a1;
- (void)_prepareAgentToExecute:(id)a0 withTicket:(id)a1;
- (id)initWithDispatchQueue:(id)a0 funnelTarget:(id)a1;
- (int)agentStopDiagnosticsTypeCode;
- (id)initWithOwner:(id)a0 dispatchQueue:(id)a1;
- (id)ownerTicketForAgent:(id)a0 leaveWhenEmpty:(BOOL)a1;
- (void)setupMeetingWithOwner:(id)a0 worker:(id)a1 mode:(id)a2;
- (void)setupMeetingWithOwner:(id)a0 worker:(id)a1 team:(id)a2 mode:(id)a3;
- (void)setupOwnerVisit:(id)a0 leaveWhenEmpty:(BOOL)a1 mode:(id)a2;
- (void)setupOwnerVisit:(id)a0 mode:(id)a1;
- (id)visitorTicketForAgent:(id)a0 team:(id)a1;

@end
