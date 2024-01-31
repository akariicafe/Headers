@class NSObject, NSMutableDictionary, NSMapTable, NSString, NSError, COExecutionContext, COConstituent;
@protocol OS_nw_activity, COCompanionLinkClientProtocol, COTransportDelegate, CODiscoveryRecordProtocol;

@interface CORapportTransport : NSObject <COTransportProtocol, COPingableProtocol> {
    BOOL _activated;
}

@property (readonly, copy, nonatomic) NSMutableDictionary *counters;
@property (readonly, nonatomic) NSMapTable *sinks;
@property (readonly, copy, nonatomic) NSMutableDictionary *commands;
@property (readonly, nonatomic) NSMutableDictionary *registrationCompletions;
@property (nonatomic) double minimumPingInterval;
@property (nonatomic) double maximumPingInterval;
@property (weak, nonatomic) id<COTransportDelegate> delegate;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) COExecutionContext *executionContext;
@property (retain, nonatomic) COConstituent *remote;
@property (readonly, nonatomic) id<CODiscoveryRecordProtocol> record;
@property (retain, nonatomic) id<COCompanionLinkClientProtocol> client;
@property (readonly, nonatomic) int listeningPort;
@property (nonatomic) unsigned long long requestCount;
@property (nonatomic) double averageRequestTime;
@property (copy, nonatomic) id /* block */ clientIsUsingOnDemandConnection;
@property (readonly, nonatomic) NSObject<OS_nw_activity> *activity;
@property (readonly, nonatomic) double currentPingTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_commandPayloadFromRapportRepresentation:(id)a0 result:(id /* block */)a1;

- (void)invalidateWithError:(id)a0;
- (id)shortDescription;
- (void)setRecord:(id)a0;
- (void)_handleDisconnect;
- (void)activateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)sendRequest:(id)a0 withResponseHandler:(id /* block */)a1;
- (void)sendCommand:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)pingWithCallback:(id /* block */)a0;
- (void)_commandForIdentifier:(id)a0 fromData:(id)a1 result:(id /* block */)a2;
- (void)_commandPayloadFromRapportRepresentationWithValidation:(id)a0 result:(id /* block */)a1;
- (id)_eventIDForClass:(Class)a0;
- (void)_handleOnDemanNodeCreationRequest;
- (void)_handleRPErrorFlagsUpdate;
- (void)_handleRPIsUsingOnDemandConnection;
- (void)_handleRPStateUpdate;
- (void)_registerHandlersOnClient;
- (id)_serializedDataForCommand:(id)a0;
- (void)_setUpRegistrationCompletionHandlers;
- (void)_updateRequestTimesFromRapportRepresentation:(id)a0 start:(unsigned long long)a1 end:(unsigned long long)a2;
- (BOOL)_validateSource:(id)a0 options:(id)a1;
- (void)deregisterCommandForClass:(Class)a0;
- (void)deregisterRequestForClass:(Class)a0;
- (void)handleEventIdentifier:(id)a0 rapportRepresentation:(id)a1 options:(id)a2;
- (void)handleRequestFromUnknownNodeWithIdentifier:(id)a0 rapportRepresentation:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3 at:(unsigned long long)a4;
- (void)handleRequestIdentifier:(id)a0 rapportRepresentation:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3 at:(unsigned long long)a4;
- (void)handleResponseToRequest:(id)a0 rapportRepresentation:(id)a1 options:(id)a2 error:(id)a3 responseHandler:(id /* block */)a4 at:(unsigned long long)a5;
- (id)initWithDiscoveryRecord:(id)a0 executionContext:(id)a1;
- (void)registerCommandForClass:(Class)a0 withCompletion:(id /* block */)a1;
- (void)registerRequestForClass:(Class)a0 withCompletion:(id /* block */)a1;
- (void)removeAsSink:(id)a0;
- (void)setAsSink:(id)a0;
- (BOOL)supportsLeaderElection;

@end
