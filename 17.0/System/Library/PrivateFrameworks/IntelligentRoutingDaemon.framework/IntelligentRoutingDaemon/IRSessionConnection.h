@class IRSessionClientProxy, IRSessionServer, NSString;
@protocol IRServiceHandling;

@interface IRSessionConnection : NSObject <IRXPCSessionServer>

@property (retain, nonatomic) IRSessionClientProxy *client;
@property (weak, nonatomic) IRSessionServer *server;
@property (weak, nonatomic) id<IRServiceHandling> serviceHandler;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (nonatomic) long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_invalidate;
- (void).cxx_destruct;
- (void)_deleteService:(id)a0;
- (void)_addEvent:(id)a0 forCandidateIdentifier:(id)a1;
- (void)_createServiceWithParameters:(id)a0 reply:(id /* block */)a1;
- (void)_databaseExportwithReply:(id /* block */)a0;
- (void)_deleteCandidate:(id)a0;
- (void)_deleteDatabaseWithReply:(id /* block */)a0;
- (void)_getServiceTokensWithReply:(id /* block */)a0;
- (void)_requestCurrentContext;
- (void)_runWithConfiguration:(id)a0;
- (void)_updateCandidates:(id)a0;
- (void)didUpdateContexts:(id)a0 withReason:(id)a1;
- (id)initWithServer:(id)a0 client:(id)a1;
- (void)xpcInterruptionHandler;
- (void)xpcInvalidationHandler;

@end
