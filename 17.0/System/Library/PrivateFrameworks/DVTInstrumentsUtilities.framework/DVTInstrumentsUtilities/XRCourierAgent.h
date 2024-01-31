@class NSString, NSDictionary, XRMobileAgent;
@protocol XRMobileAgentOwner;

@interface XRCourierAgent : XRMobileAgent <XRMobileAgentVisitor, XRMinorFrameAgent>

@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSDictionary *details;
@property (retain, nonatomic) NSDictionary *reply;
@property (retain, nonatomic) XRMobileAgent<XRMobileAgentOwner> *roomOwner;
@property (nonatomic) _Atomic BOOL *yieldNow;

+ (id)sendCourierToVisitWaitingRoom:(id)a0 message:(id)a1 details:(id)a2;
+ (id)sendCourierToVisitWaitingRoom:(id)a0 message:(id)a1 details:(id)a2 replyStop:(id)a3 replyTicket:(id)a4;

- (id)init;
- (void).cxx_destruct;
- (void)executeStopOnItinerary:(id)a0;
- (id)agentDiagnosticsName;
- (id)initWithMessage:(id)a0 details:(id)a1;
- (void)sendToWaitingRoom:(id)a0;
- (void)sendToWaitingRoom:(id)a0 replyStop:(id)a1 replyTicket:(id)a2;

@end
