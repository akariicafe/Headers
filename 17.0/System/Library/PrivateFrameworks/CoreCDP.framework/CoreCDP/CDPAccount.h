@class NSDate;

@interface CDPAccount : NSObject

@property (retain, nonatomic) NSDate *rpdProbationFirstSeenDate;

+ (id)sharedInstance;
+ (BOOL)isICDPEnabledForDSID:(id)a0 checkWithServer:(BOOL)a1;
+ (id)personIDForAltDSID:(id)a0;
+ (BOOL)isHSA2Enabled:(id)a0;
+ (BOOL)checkIfAltDSIDIsBeneficiary:(id)a0;
+ (BOOL)isICDPEnabledForDSID:(id)a0;
+ (id)_authKitAccountWith:(id)a0;
+ (BOOL)saveVerifiedAccount:(id)a0 error:(id *)a1;
+ (id)altDSIDForPersonID:(id)a0;
+ (id)appleAccountForAltDSID:(id)a0;
+ (id)contextForAccountWithAltDSID:(id)a0;

- (id)primaryAccountStashedPRK;
- (id)authToken;
- (id)primaryAccountAltDSID;
- (id)contextForPrimaryAccount;
- (id)primaryAccountFirstName;
- (id)primaryAuthKitAccount;
- (BOOL)primaryAccountNeedsEscrowRecordRepair;
- (BOOL)rpdProbationIsInEffectForDuration:(double)a0;
- (id)primaryAccountUsername;
- (id)primaryAccountDSID;
- (id)iCloudEnv;
- (BOOL)primaryAccountIsBeneficiary;
- (BOOL)isOTEnabledForContext:(id)a0;
- (id)primaryAccountFullName;
- (id)primaryAppleAccount;
- (unsigned long long)primaryAccountSecurityLevel;
- (id)_serverFriendlyDateFormatter;
- (id)escrowURL;

@end
