@class MTSessionsCoordinator, NSString, MTXPCConnectionListenerProvider;
@protocol NAScheduler;

@interface MTSessionServer : NSObject <MTSessionServer, MTAgentDiagnosticDelegate>

@property (readonly, nonatomic) MTXPCConnectionListenerProvider *connectionListenerProvider;
@property (readonly, nonatomic, getter=isSystemReady) BOOL systemReady;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (readonly, nonatomic) MTSessionsCoordinator *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)printDiagnostics;
- (void)checkIn;
- (BOOL)_isSystemReady;
- (void)handleSystemReady;
- (id)gatherDiagnostics;
- (void)startListening;
- (id)initWithCoordinator:(id)a0;
- (id)_systemNotReadyError;
- (void).cxx_destruct;
- (void)stopListening;
- (void)endAlertingSession;

@end
