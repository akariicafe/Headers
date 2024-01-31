@class NSString, NSDictionary, CUMessageSession, CoreTelephonyClient;

@interface SSProximityDevice : NSObject <CoreTelephonyClientCellularPlanManagementDelegate>

@property (retain) CoreTelephonyClient *client;
@property unsigned long long endpoint;
@property (retain) CUMessageSession *session;
@property (retain) NSDictionary *remoteInfo;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate:(BOOL)a0;
- (void).cxx_destruct;
- (void)activate:(id /* block */)a0;
- (void)proxSetupAuthEventUpdate:(id)a0;
- (id)templateSession;
- (id)initWithQueue:(id)a0 endpoint:(unsigned long long)a1 remoteInfo:(id)a2;
- (id)skEventFromDictionary:(id)a0;
- (void)verifyPIN:(id)a0;

@end
