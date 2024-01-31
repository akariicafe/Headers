@interface VSApplicationControllerRequestFactory : NSObject

+ (id)_attributeQuerySAMLRequestStringWithAttributeNames:(id)a0 channelID:(id)a1 authenticationToken:(id)a2 error:(id *)a3;
+ (id)_authNRequestSAMLStringWithAuthenticationToken:(id)a0 forced:(BOOL)a1 error:(id *)a2;
+ (id)_logoutSAMLRequestStringWithError:(id *)a0;

- (id)STBOptOutApplicationControllerRequest;
- (id)accountMetadataApplicationControllerRequestWithAccountMetadataRequest:(id)a0 authenticationToken:(id)a1;
- (id)authenticationApplicationControllerRequestWithAuthenticationToken:(id)a0 forcedAuthentication:(BOOL)a1;
- (id)logoutApplicationControllerRequestWithAuthenticationToken:(id)a0;
- (id)silentAuthenticationApplicationControllerRequest;
- (id)silentAuthenticationApplicationControllerRequestWithAuthenticationToken:(id)a0 forcedAuthentication:(BOOL)a1;

@end
