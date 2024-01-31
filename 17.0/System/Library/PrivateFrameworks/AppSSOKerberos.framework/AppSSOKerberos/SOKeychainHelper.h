@interface SOKeychainHelper : NSObject

- (int)addCredentialsToKeychainWithService:(id)a0 withUsername:(id)a1 withPassword:(id)a2 requireUserPresence:(BOOL)a3;
- (BOOL)hasCredentialsInKeychainWithService:(id)a0;
- (struct __SecIdentity { } *)identityForPersistientRef:(id)a0;
- (struct __SecIdentity { } *)identityForUUIDString:(id)a0;
- (int)removeCredentialsFromKeychainWithService:(id)a0;
- (int)retrieveCredentialsFromKeychainWithContext:(id)a0 service:(id)a1 returnedUsername:(id *)a2 returnedPassword:(id *)a3;

@end
