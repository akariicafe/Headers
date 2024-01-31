@class NSString, NSXPCConnection, TransparencyApplication;

@interface KTVerifier : NSObject

@property (retain) TransparencyApplication *application;
@property (readonly) NSString *applicationIdentifier;
@property (readonly) NSXPCConnection *connection;

+ (id)getUIStatusPriority:(unsigned long long)a0;

- (void)forceApplicationConfig:(id /* block */)a0;
- (id)validatePeerUri:(id)a0 accountKey:(id)a1 loggableDatas:(id)a2 queryResponse:(id)a3 error:(id *)a4;
- (void)getCachedValidatePeerResults:(id)a0 completionBlock:(id /* block */)a1;
- (void)copyDeviceStatus:(id)a0 complete:(id /* block */)a1;
- (void)convertToSelfRequest:(id)a0 serverDatas:(id)a1 syncedDatas:(id)a2 queryResponse:(id)a3 updateCompletionBlock:(id /* block */)a4;
- (void)forceCloudConfigUpdate:(id /* block */)a0;
- (void)clearLogClientConfiguration:(id /* block */)a0;
- (void)forceDutyCycle:(id /* block */)a0;
- (void)validateEnrollmentResult:(id)a0 uuid:(id)a1 completionBlock:(id /* block */)a2;
- (void)convertToSelfRequest:(id)a0 serverDatas:(id)a1 syncedDatas:(id)a2 accountKey:(id)a3 queryResponse:(id)a4 updateCompletionBlock:(id /* block */)a5;
- (void)clearState:(id /* block */)a0;
- (void)validatePeerUri:(id)a0 accountKey:(id)a1 loggableDatas:(id)a2 queryResponse:(id)a3 promiseCompletionBlock:(id /* block */)a4;
- (void)resetRequestToPending:(id)a0 block:(id /* block */)a1;
- (void)validateEnrollmentUri:(id)a0 accountKey:(id)a1 loggableData:(id)a2 insertResponse:(id)a3 promiseCompletionBlock:(id /* block */)a4;
- (id)unimplementedError:(id)a0;
- (unsigned long long)getDisplayStatusForResults:(id)a0 isSelfOptedIn:(BOOL)a1;
- (void)copyKeyStoreState:(id /* block */)a0;
- (void)copyApplicationTranscript:(id /* block */)a0;
- (void)forceApplicationKeysFetch:(id /* block */)a0;
- (BOOL)clearPeerCache:(id)a0 error:(id *)a1;
- (void)copyDaemonState:(id /* block */)a0;
- (void)validatePeers:(id)a0 fetchNow:(BOOL)a1 completionBlock:(id /* block */)a2;
- (id)validatePeerUri:(id)a0 accountKey:(id)a1 loggableDatas:(id)a2 queryRequest:(id)a3 queryResponse:(id)a4 error:(id *)a5;
- (void)configurationBagFetch:(id /* block */)a0;
- (void)convertToSelfRequest:(id)a0 serverDatas:(id)a1 syncedDatas:(id)a2 accountKey:(id)a3 queryRequest:(id)a4 queryResponse:(id)a5 updateCompletionBlock:(id /* block */)a6;
- (id)initWithApplication:(id)a0;
- (id)validateEnrollmentUri:(id)a0 accountKey:(id)a1 loggableData:(id)a2 insertResponse:(id)a3 error:(id *)a4;
- (void).cxx_destruct;
- (void)invokeXPCAsynchronousCallWithBlock:(id /* block */)a0 failureBlock:(id /* block */)a1;
- (void)validateSelfResult:(id)a0 uuid:(id)a1 syncedDatas:(id)a2 completionBlock:(id /* block */)a3;
- (void)copyDataStoreStatistics:(id /* block */)a0;
- (void)getValidatePeerResult:(id)a0 uuid:(id)a1 completionBlock:(id /* block */)a2;
- (void)forceValidateUUID:(id)a0 uri:(id)a1 completionBlock:(id /* block */)a2;
- (void)forceValidateUUID:(id)a0 uri:(id)a1 block:(id /* block */)a2;
- (void)copyLogClientConfiguration:(id /* block */)a0;
- (void)invokeXPCSynchronousCallWithBlock:(id /* block */)a0 failureBlock:(id /* block */)a1;
- (void)validatePeerResult:(id)a0 uuid:(id)a1 completionBlock:(id /* block */)a2;
- (void)getValidatePeerResult:(id)a0 uuid:(id)a1 fetchNow:(BOOL)a2 completionBlock:(id /* block */)a3;
- (void)copyApplicationState:(id /* block */)a0;
- (BOOL)markFailureSeenForResults:(id)a0 error:(id *)a1;
- (void)copyKeyStoreStateFromDisk:(id /* block */)a0;
- (id)validateEnrollmentUri:(id)a0 accountKey:(id)a1 loggableData:(id)a2 queryRequest:(id)a3 insertResponse:(id)a4 error:(id *)a5;
- (BOOL)ignoreFailure:(id)a0 uuid:(id)a1 error:(id *)a2;
- (void)convertToSelfRequest:(id)a0 serverDatas:(id)a1 syncedDatas:(id)a2 queryRequest:(id)a3 queryResponse:(id)a4 updateCompletionBlock:(id /* block */)a5;
- (id)urisFromResults:(id)a0;
- (void)clearPublicKeyStoreState:(id /* block */)a0;
- (void)initiateQueryForUris:(id)a0 completionBlock:(id /* block */)a1;
- (void)batchQuery:(id)a0 userInitiated:(BOOL)a1 block:(id /* block */)a2;
- (BOOL)ignoreFailureForResults:(id)a0 error:(id *)a1;
- (void)forceConfigUpdate:(id /* block */)a0;

@end
