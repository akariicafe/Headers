@class NSString, NSXPCConnection, DEPDeviceUploadSubmitDeviceRequestPayload, DEPDeviceUploadCredentials, DEPDeviceUploadOrganization;

@interface DEPClient : NSObject

@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSString *nonce;
@property (retain, nonatomic) DEPDeviceUploadCredentials *userCredentials;
@property (retain, nonatomic) DEPDeviceUploadOrganization *organization;
@property (retain, nonatomic) DEPDeviceUploadSubmitDeviceRequestPayload *deviceUploadRequest;

- (id)init;
- (void)dealloc;
- (void)unenrollWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_connectionError;
- (void)fetchConfigurationWithCompletionBlock:(id /* block */)a0;
- (void)fetchConfigurationWithoutValidationWithCompletionBlock:(id /* block */)a0;
- (void)provisionallyEnrollWithNonce:(id)a0 completionBlock:(id /* block */)a1;
- (void)_callServiceByType:(long long)a0 onProxy:(id)a1 completionBlock:(id /* block */)a2;
- (id /* block */)_cloudConfigRetrievalBlockWithClientCompletionBlock:(id /* block */)a0;
- (void)_completeServiceWithSuccess:(BOOL)a0 response:(id)a1 error:(id)a2;
- (id)_organizationFromDict:(id)a0;
- (id)_organizationsFromArray:(id)a0;
- (id)_requestTypesFromDict:(id)a0;
- (void)_retrieveProxyObjectAndRunServiceType:(long long)a0 completionBlock:(id /* block */)a1;
- (id)_soldToIdsFromDict:(id)a0;
- (void)pingWithCompletionBlock:(id /* block */)a0;
- (void)retrieveDeviceUploadOrganizationsWithCredentials:(id)a0 completionBlock:(id /* block */)a1;
- (void)retrieveDeviceUploadRequestTypesWithCredentials:(id)a0 completionBlock:(id /* block */)a1;
- (void)retrieveDeviceUploadSoldToIdsForOrganization:(id)a0 credentials:(id)a1 completionBlock:(id /* block */)a2;
- (void)submitDeviceUploadRequest:(id)a0 credentials:(id)a1 completionBlock:(id /* block */)a2;

@end
