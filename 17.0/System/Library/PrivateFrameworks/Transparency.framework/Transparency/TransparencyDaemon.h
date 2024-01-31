@interface TransparencyDaemon : NSObject

- (void)configurationBagFetch:(id /* block */)a0;
- (void)changeOptInState:(unsigned long long)a0 application:(id)a1 complete:(id /* block */)a2;
- (void)clearOptInStateForURI:(id)a0 application:(id)a1 complete:(id /* block */)a2;
- (void)clearPeerState:(id)a0 uris:(id)a1 block:(id /* block */)a2;
- (void)getAllOptInStates:(id /* block */)a0;
- (void)getOptInForURI:(id)a0 application:(id)a1 complete:(id /* block */)a2;
- (void)getOptInState:(id)a0 complete:(id /* block */)a1;
- (void)getOptInStateForApplication:(id)a0 complete:(id /* block */)a1;
- (void)performAndWaitForSelfValidate:(id /* block */)a0;
- (void)replaySelfValidate:(id)a0 application:(id)a1 pcsAccountKey:(id)a2 queryRequest:(id)a3 queryResponse:(id)a4 responseTime:(id)a5 completionHandler:(id /* block */)a6;
- (void)setOptInForURI:(id)a0 application:(id)a1 state:(BOOL)a2 smtTimestamp:(id)a3 complete:(id /* block */)a4;
- (id)transparencyCheckIDSHealth:(id *)a0;
- (void)transparencyCheckKTAccountKey:(id)a0 complete:(id /* block */)a1;
- (void)transparencyCloudDeviceAdd:(id)a0 clientData:(id)a1 complete:(id /* block */)a2;
- (void)transparencyCloudDeviceRemove:(id)a0 clientData:(id)a1 complete:(id /* block */)a2;
- (void)transparencyCloudDevices:(id /* block */)a0;
- (void)transparencyDumpKTRegistrationData:(id /* block */)a0;
- (void)transparencyFetchIDMS:(id /* block */)a0;
- (void)transparencyFetchPublicKeys:(id /* block */)a0;
- (void)transparencyFetchSelf:(id /* block */)a0;
- (void)transparencyGetKTSignatures:(id)a0 complete:(id /* block */)a1;
- (void)transparencyIDSRegistration:(id /* block */)a0;
- (void)transparencyIDSRepair:(id /* block */)a0;
- (void)transparencyPerformRegistrationSignature:(id /* block */)a0;
- (void)transparencySysDiagnose:(id /* block */)a0;
- (id)transparencySysDiagnoseData:(id *)a0;
- (void)transparencyTriggerIDSRegistration:(id /* block */)a0;
- (void)transparencyTriggerOperation:(id)a0 complete:(id /* block */)a1;
- (void)transparencyValidateSelf:(id /* block */)a0;

@end
