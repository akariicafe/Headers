@class ARTechnique, NSString;
@protocol ARRemoteTechniqueClient;

@interface ARTechniqueService : ARDaemonService <ARRemoteTechniqueService, ARTechniqueDelegate>

@property (retain, nonatomic) id<ARRemoteTechniqueClient> clientProxy;
@property (retain, nonatomic) ARTechnique *technique;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceName;

- (id)processData:(id)a0;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)invalidationHandler;
- (void)interruptionHandler;
- (void)prepare:(BOOL)a0;
- (void)captureBehaviorWithReply:(id /* block */)a0;
- (void)isActiveWithReply:(id /* block */)a0;
- (void)numberOfActiveConnectionsWithReply:(id /* block */)a0;
- (void)processData:(id)a0 reply:(id /* block */)a1;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;
- (void)requiredSensorDataTypesWithReply:(id /* block */)a0;
- (void)requiredTimeIntervalWithReply:(id /* block */)a0;
- (void)resultDataClassesWithReply:(id /* block */)a0;
- (void)technique:(id)a0 didFailWithError:(id)a1;
- (void)technique:(id)a0 didOutputResultData:(id)a1 timestamp:(double)a2 context:(id)a3;
- (void)_initCommon:(id)a0;
- (id)initWithConnection:(id)a0 exportedInterface:(id)a1 remoteObjectInterface:(id)a2;

@end
