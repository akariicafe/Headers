@class NSNumber, NSCache, NSLock;

@interface ISBiometricStore : NSObject {
    NSCache *_contextCache;
    NSLock *_lock;
}

@property long long biometricState;
@property (readonly, getter=isBiometricStateEnabled) BOOL biometricStateEnabled;
@property (readonly) NSNumber *lastRegisteredAccountIdentifier;

+ (id)sharedInstance;
+ (id)keychainLabelForKeyWithAccountID:(id)a0 purpose:(long long)a1;
+ (BOOL)shouldUseX509;
+ (void)tokenUpdateDidFinishWithLogKey:(id)a0;
+ (BOOL)tokenUpdateShouldStartWithLogKey:(id)a0;
+ (id)diskBasedPaymentSheet;
+ (id)countryCode;
+ (id)keychainLabelForAccountID:(id)a0 purpose:(long long)a1;
+ (BOOL)shouldUseAutoEnrollment;
+ (long long)tokenUpdateState;
+ (BOOL)shouldUseUpsellEnrollment;
+ (id)applePayClassicNetworks;
+ (id)keychainLabelForCertWithAccountID:(id)a0 purpose:(long long)a1;
+ (BOOL)isActionSupported:(long long)a0 withBiometricAuthenticationContext:(id)a1;
+ (BOOL)shouldUseExtendedEnrollment;
+ (BOOL)shouldUseApplePayClassic;

- (BOOL)canPerformBiometricOptIn;
- (id)init;
- (void)clearLastRegisteredAccountIdentifier;
- (id)createX509CertChainDataForAccountIdentifier:(id)a0 purpose:(long long)a1 error:(id *)a2;
- (id)signData:(id)a0 context:(id)a1 error:(id *)a2;
- (unsigned long long)identityMapCount;
- (void)registerAccountIdentifier:(id)a0;
- (unsigned long long)keyCountForAccountIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)publicKeyDataForAccountIdentifier:(id)a0 purpose:(long long)a1 error:(id *)a2;
- (void)saveIdentityMapForAccountIdentifier:(id)a0;
- (BOOL)isIdentityMapValidForAccountIdentifier:(id)a0;
- (BOOL)canPerformExtendedBiometricActionsForAccountIdentifier:(id)a0;
- (BOOL)deleteKeychainTokensForAccountIdentifier:(id)a0 error:(id *)a1;
- (long long)biometricAvailabilityForAccountIdentifier:(id)a0;
- (void)addContextToCache:(id)a0 withToken:(id)a1;
- (id)createAttestationDataForAccountIdentifier:(id)a0 purpose:(long long)a1 error:(id *)a2;
- (id)x509CertChainDataForAccountIdentifier:(id)a0 purpose:(long long)a1 regenerateCerts:(BOOL)a2 error:(id *)a3;
- (id)fetchContextFromCacheWithToken:(id)a0 evict:(BOOL)a1;

@end
