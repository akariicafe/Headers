@class NSData, AIDAServiceOwnersManager, NSDictionary, AAGrandSlamSigner, ACAccount, AKAppleIDSigningController, AKAppleIDAuthenticationContext, AKAppleIDServerResourceLoadDelegate, ACAccountStore;
@protocol _TtP12FamilyCircle15FARequestSigner_;

@interface FARequestConfigurator : NSObject {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    ACAccount *_grandSlamAccount;
    AAGrandSlamSigner *_grandSlamSigner;
    AAGrandSlamSigner *_familyGrandSlamSigner;
    AIDAServiceOwnersManager *_serviceOwnersManager;
    AKAppleIDSigningController *_akSigningController;
    AKAppleIDServerResourceLoadDelegate *_resourceLoadDelegate;
    NSData *_pushToken;
}

@property (retain, nonatomic) id<_TtP12FamilyCircle15FARequestSigner_> signer;
@property (retain, nonatomic) NSDictionary *ephemeralAuthResults;
@property (nonatomic) BOOL attachSetupHeader;
@property (retain, nonatomic) AKAppleIDAuthenticationContext *authContext;

- (id)_account;
- (id)initWithAccount:(id)a0;
- (id)_accountStore;
- (void)renewCredentialsWithCompletion:(id /* block */)a0;
- (id)_serviceOwnersManager;
- (void)signURLRequest:(id)a0;
- (void).cxx_destruct;
- (id)_grandSlamSigner;
- (id)_authContext;
- (id)_familyGrandSlamSigner;
- (id)_grandSlamAccount;
- (void)updateWithEphemeralAuthResults:(id)a0;
- (void)_addAccountForServiceType:(id)a0 toPayload:(id)a1 forKey:(id)a2;
- (id)_akSigningController;
- (BOOL)_canConnectToAPS;
- (id)_familyTokenForGrandSlamAccount:(id)a0 andTokenID:(id)a1;
- (id)_fresnoPayloadWithAdditionalPayload:(id)a0;
- (void)_resourceLoadDelegate:(id /* block */)a0;
- (void)addFresnoHeadersToRequest:(id)a0;
- (void)addFresnoHeadersToRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)addFresnoPayloadToRequest:(id)a0 additionalPayload:(id)a1;
- (void)addPayload:(id)a0 toRequest:(id)a1;
- (void)pushTokenWithCompletion:(id /* block */)a0;

@end
