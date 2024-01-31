@class NSString, NSObject, XRMobileAgentItinerary;
@protocol OS_os_log;

@interface XRMobileAgent : NSObject {
    id _ticket;
    unsigned int _desiredQoS;
}

@property (retain, nonatomic) NSString *mode;
@property (readonly, nonatomic) XRMobileAgentItinerary *itinerary;
@property (readonly, nonatomic) int movementType;
@property (readonly, nonatomic) unsigned int desiredQoS;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingHandle;
@property (readonly, nonatomic) NSString *agentDiagnosticsName;

+ (void)initialize;

- (id)init;
- (void)deactivated;
- (void).cxx_destruct;
- (id)ticket;
- (void)activateWithFinalDestination:(id)a0 ticket:(id)a1;
- (void)executeStopOnItinerary:(id)a0;
- (void)goodbye;
- (BOOL)holdsItinerary:(id)a0;
- (void)__park;
- (void)activateAtStop:(id)a0 activationTicket:(id)a1 activationQoS:(unsigned int)a2 finalDestination:(id)a3 finalTicket:(id)a4;
- (void)activateAtStop:(id)a0 activationTicket:(id)a1 finalDestination:(id)a2 finalTicket:(id)a3;
- (id)activateUsingCompletionOperationAtStop:(id)a0 activationTicket:(id)a1;
- (void)hello;
- (int)nextMovementType;

@end
