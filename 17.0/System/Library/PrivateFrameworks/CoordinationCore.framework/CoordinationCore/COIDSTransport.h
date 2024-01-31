@class COConstituent, NSMutableDictionary, COIDSServiceDirector, NSMutableSet, NSString, NSObject, COExecutionContext;
@protocol OS_nw_activity, OS_dispatch_source, COTransportDelegate, CODiscoveryRecordProtocol;

@interface COIDSTransport : NSObject <COTransportProtocol> {
    BOOL _resolvedIDSIdentifier;
}

@property (retain, nonatomic) NSMutableDictionary *outstandingRequests;
@property (retain, nonatomic) NSMutableSet *registeredCommands;
@property (retain, nonatomic) NSMutableDictionary *acceptableResponses;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic, getter=isTimerEnabled) BOOL timerEnabled;
@property (nonatomic) double requestTimeout;
@property (readonly, nonatomic) COIDSServiceDirector *director;
@property (readonly, nonatomic) NSObject<OS_nw_activity> *activity;
@property (weak, nonatomic) id<COTransportDelegate> delegate;
@property (readonly, nonatomic) COExecutionContext *executionContext;
@property (retain, nonatomic) COConstituent *remote;
@property (readonly, nonatomic) id<CODiscoveryRecordProtocol> record;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateWithError:(id)a0;
- (void)_timerFired;
- (id)shortDescription;
- (void)activateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)sendRequest:(id)a0 withResponseHandler:(id /* block */)a1;
- (void)_configureTimer;
- (void)sendCommand:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_handleErrorFromMessage:(id)a0 incomingResponseIdentifier:(id)a1 from:(id)a2;
- (void)_handleRequestFromMessage:(id)a0 incomingRequestIdentifier:(id)a1 from:(id)a2;
- (void)_handleResponseFromMessage:(id)a0 incomingResponseIdentifier:(id)a1 from:(id)a2;
- (void)_timerRequestAdded:(id)a0;
- (id)acceptableResponsesForRequest:(Class)a0;
- (void)deregisterCommandForClass:(Class)a0;
- (void)deregisterRequestForClass:(Class)a0;
- (void)handleMessage:(id)a0 requestIdentifier:(id)a1 responseIdentifier:(id)a2 from:(id)a3;
- (id)initWithDiscoveryRecord:(id)a0 executionContext:(id)a1;
- (void)registerCommandForClass:(Class)a0 withCompletion:(id /* block */)a1;
- (void)registerRequestForClass:(Class)a0 withCompletion:(id /* block */)a1;
- (BOOL)supportsLeaderElection;

@end
