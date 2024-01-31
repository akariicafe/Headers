@class ACDDatabaseConnection;

@interface ACDClientAuthorizationManager : NSObject {
    ACDDatabaseConnection *_databaseConnection;
}

- (id)authorizationForClient:(id)a0 accountTypeWithIdentifier:(id)a1;
- (id)allAuthorizationsForAccountTypeWithIdentifier:(id)a0;
- (id)removeAllClientAuthorizationsForAccountTypeWithIdentifier:(id)a0;
- (id)_csvStringFromSet:(id)a0;
- (id)setAuthorization:(id)a0 forClient:(id)a1 onAccountType:(id)a2;
- (id)removeAuthorizationForClient:(id)a0 accountTypeWithIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)initWithDatabaseConnection:(id)a0;
- (id)removeAllClientAuthorizationsForAccountType:(id)a0;
- (id)authorizationForClient:(id)a0 accountType:(id)a1;
- (id)removeAuthorizationForClient:(id)a0 accountType:(id)a1;
- (id)_setFromCSVString:(id)a0;
- (id)allAuthorizationsForAccountType:(id)a0;

@end
