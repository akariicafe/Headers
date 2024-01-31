@class NSString, NSMutableSet, NSXPCConnection;

@interface SESSessionManager : NSObject <SESSessionManagerCallbackInterface>

@property (retain) NSMutableSet *sessions;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSString *serviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)setMachServiceName:(id)a0;
+ (id)getVehicleReports:(id *)a0;
+ (id)pauseRangingForReaderIdentifier:(id)a0 durationInSec:(id)a1;
+ (id)resumeRangingForReaderIdentifier:(id)a0;

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)connect;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)sessionEnded:(id)a0;
- (id)startDigitalCarKeySessionWithOptions:(id)a0 startCallback:(id /* block */)a1;
- (void)connectionDidInterrupt;
- (void)connectionDidInvalidate;
- (id)startDCKAssertionForKeyIdentifier:(id)a0 withOptions:(id)a1 error:(id *)a2;
- (id)startRKESessionWithOptions:(id)a0 startCallback:(id /* block */)a1;

@end
