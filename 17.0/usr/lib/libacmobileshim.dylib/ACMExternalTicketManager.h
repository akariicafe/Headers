@class NSString;

@interface ACMExternalTicketManager : ACMTicketManager <ACMTicketManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)deviceIdentifier;
- (unsigned long long)clientID;
- (id)preferences;
- (id)identifier;
- (id)defaultPublicKeyVersionForRealm:(id)a0;
- (void)tokenDidReceive2SVSecret:(id)a0;
- (id)twoSVCreateDateForPrincipal:(id)a0;
- (id)twoSVPersonIDForPrincipal:(id)a0;
- (id)twoSVSecretForPrincipal:(id)a0;

@end
