@class NSString, NSDictionary;

@interface POMutableUser : POUser <POMutableJWTBody>

@property (copy) NSString *loginUserName;
@property (copy) NSString *generatedUUID;
@property (copy) NSString *uniqueIdpIdentifier;
@property (copy) NSString *uid;
@property (copy) NSString *altSecurityIdentity;
@property (readonly) NSDictionary *allData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUid:(id)a0;
- (void)addCustomClaims:(id)a0;
- (void)setAltSecurityIdentity:(id)a0;
- (void)setGeneratedUUID:(id)a0;
- (void)setLoginUserName:(id)a0;
- (void)setUniqueIdpIdentifier:(id)a0;

@end
