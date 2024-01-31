@class NSUUID, IRServerConnection, IRConfiguration, NSString, NSObject, IRExportedObjectForwarder;
@protocol OS_dispatch_queue, IRSessionDelegate;

@interface IRSession : NSObject <IRXPCSessionClient>

@property (retain, nonatomic) NSUUID *internalID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IRServerConnection *connection;
@property (retain, nonatomic) IRExportedObjectForwarder *exportedObjectForwarder;
@property (copy, nonatomic) IRConfiguration *configuration;
@property (nonatomic) BOOL isSessionInvalidated;
@property (weak, nonatomic) id<IRSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_createTemporaryServerConnection;
+ (void)createServiceWithParameters:(id)a0 reply:(id /* block */)a1;
+ (void)databaseExportwithReply:(id /* block */)a0;
+ (void)deleteDatabaseWithReply:(id /* block */)a0;
+ (void)deleteService:(id)a0;
+ (void)getServiceTokensWithReply:(id /* block */)a0;

- (id)init;
- (void)invalidate;
- (void)runWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_serverConnectionInterrupted;
- (BOOL)isEqual:(id)a0;
- (void)_serverConnectionInvalidated;
- (void)addEvent:(id)a0 forCandidate:(id)a1;
- (void)requestCurrentContext;
- (void)updateCandidate:(id)a0;
- (void)_sessionDidFailWithError:(id)a0;
- (void)_didUpdateContext:(id)a0;
- (BOOL)_isCandidateValid:(id)a0;
- (void)_notifySessionHasFailed:(long long)a0 desc:(id)a1;
- (void)_sessionInterruptedWithReason:(long long)a0 timestamp:(double)a1;
- (void)_sessionInterruptionReasonEnded:(long long)a0 timestamp:(double)a1;
- (void)deleteCandidate:(id)a0;
- (void)updateCandidates:(id)a0;

@end
