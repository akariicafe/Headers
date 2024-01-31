@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, ProbeManagerDelegate;

@interface ProbeManager : NSObject <BonjourProbeDelegate, ICMPPingProbeDelegate, AWDLPeerProbeDelegate> {
    unsigned long long probeSequenceNumber;
}

@property (retain, nonatomic) id probeDetails;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<ProbeManagerDelegate> delegate;
@property (readonly, nonatomic) NSMutableDictionary *probes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (void)icmpPingProbe:(id)a0 echoResponseReceived:(id)a1 success:(BOOL)a2;
- (void)dealloc;
- (void)startTCPDumpForDiagSession:(id)a0 duration:(id)a1;
- (void)awdlPeerPollProbe:(id)a0 serviceUpdated:(id)a1;
- (void)awdlPeerPollProbe:(id)a0 serviceAdded:(id)a1;
- (void)startTestTCPConnectionForDiagSession:(id)a0 url:(id)a1 host:(id)a2 port:(id)a3 interfaceName:(id)a4 timeout:(id)a5;
- (void)startAWDLPeerPollingWithDiagSession:(id)a0 services:(id)a1 count:(id)a2 interval:(id)a3;
- (void)awdlPeerPollProbeIsComplete:(id)a0;
- (void)awdlPeerPollProbe:(id)a0 serviceRemoved:(id)a1;
- (id)probeCallbackFunctions;
- (void)bonjourServiceAdded:(id)a0 isUpdatedService:(BOOL)a1;
- (void)startTestHTTPForDiagSession:(id)a0 url:(id)a1 timeout:(id)a2 interfaceName:(id)a3 userAgent:(id)a4;
- (void)cancelAllProbes;
- (void)startAirDropBonjourScan:(id)a0 duration:(id)a1;
- (void)bonjourServiceRemoved:(id)a0;
- (void)icmpPingProbe:(id)a0 completedIterations:(unsigned long long)a1 successfulCount:(unsigned long long)a2 withError:(id)a3;
- (void).cxx_destruct;
- (void)startICMPPingForDiagSession:(id)a0 hostName:(id)a1 ipAddress:(id)a2 interface:(id)a3 pingCount:(id)a4 interPingInterval:(id)a5 burstCount:(id)a6 interBurstInterval:(id)a7 timeout:(id)a8;
- (void)stopTCPDump;
- (void)bonjourProbeComplete:(id)a0 status:(unsigned int)a1;
- (void)icmpPingProbe:(id)a0 echoRequestSent:(id)a1 success:(BOOL)a2;
- (void)startGetNetworkInfo:(id)a0;

@end
