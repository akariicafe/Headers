@class NSString, PKAppletSubcredentialPairingSession;

@interface PKSubcredentialProvisioningOwnerConfiguration : PKSubcredentialProvisioningLocalDeviceConfiguration

@property (readonly, weak, nonatomic) PKAppletSubcredentialPairingSession *session;
@property (readonly, nonatomic) NSString *pairingPassword;
@property (readonly, nonatomic) NSString *keyName;
@property (readonly, nonatomic) NSString *issuerIdentifier;
@property (readonly, nonatomic) NSString *manufacturerIdentifier;
@property (readonly, nonatomic) unsigned long long radioTechnologies;
@property (retain, nonatomic) NSString *appIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)transitionTable;
- (id)initWithSession:(id)a0 pairingPassword:(id)a1 keyName:(id)a2 issuerIdentifier:(id)a3 manufacturerIdentifier:(id)a4 webService:(id)a5 registrationMetadata:(id)a6 radioTechnologies:(unsigned long long)a7;
- (long long)startingState;

@end
