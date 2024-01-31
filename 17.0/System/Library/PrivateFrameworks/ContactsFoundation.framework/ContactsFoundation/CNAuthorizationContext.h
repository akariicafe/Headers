@class CNUnfairLock, NSString, CNAuditToken, NSObject, NSNumber;
@protocol CNTCC, CNTCCSimulation, OS_tcc_identity;

@interface CNAuthorizationContext : NSObject <CNAuthorizationContext, CNTCCSimulation>

@property (class, readonly) CNAuthorizationContext *sharedInstance;

@property (retain, nonatomic) CNAuditToken *cnAuditToken;
@property (retain, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity;
@property (retain, nonatomic) id<CNTCC, CNTCCSimulation> tccServices;
@property (retain, nonatomic) NSNumber *authorizationStatusCachedValue;
@property (retain, nonatomic) NSNumber *shouldAlwaysQueryAuthorizationStatusCachedValue;
@property (retain, nonatomic) NSNumber *isNotesAccessGrantedCachedValue;
@property (retain, nonatomic) NSNumber *isAddressingGrammarAccessGrantedCachedValue;
@property (retain, nonatomic) NSNumber *isClientTCCAllowedCachedValue;
@property (retain, nonatomic) NSNumber *isClientTCCRegionalAllowedCachedValue;
@property (retain, nonatomic) NSNumber *isClientFirstOrSecondPartyCachedValue;
@property (retain, nonatomic) CNUnfairLock *authorizationStatusLock;
@property (retain, nonatomic) CNUnfairLock *notesAccessStatusLock;
@property (retain, nonatomic) CNUnfairLock *addressingGrammarAccessStatusLock;
@property (readonly, nonatomic) long long authorizationStatus;
@property (readonly, nonatomic) BOOL isAccessGranted;
@property (readonly, nonatomic) BOOL isAccess1Granted;
@property (readonly, nonatomic) BOOL isAccess2Granted;
@property (readonly, nonatomic) BOOL isNotesAccessGranted;
@property (readonly, nonatomic) BOOL isAddressingGrammarAccessGranted;
@property (readonly, nonatomic) BOOL isAccessRestricted;
@property (readonly, nonatomic) BOOL isClientFirstOrSecondParty;
@property (readonly, nonatomic) BOOL isClientTCCAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bundleIdentifierForAssumedIdentity:(id)a0;
+ (BOOL)shouldIgnoreAssumedIdentity:(id)a0;
+ (id)os_log;
+ (BOOL)shouldIgnoreAssumedIdentityForBundleIdentifier:(id)a0;

- (BOOL)isUnitTesting;
- (void)requestAuthorization:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)isThirdPartyNotesEntitled;
- (id)init;
- (BOOL)cachedAddressingGrammarAccessGranted;
- (BOOL)checkTCCEntitlementNamesAllowContacts:(id)a0;
- (long long)resolveRequestAuthorizationFuture:(id)a0;
- (id)errorForStatus:(long long)a0;
- (BOOL)isClientTCCRegionalAllowed;
- (BOOL)isClientTCCKilledOnAuthorizationChange;
- (long long)cachedAuthorizationStatus;
- (BOOL)isClientTCCUncoupledProcess;
- (BOOL)isGreenTeaDevice;
- (void)simulateStatus:(long long)a0;
- (BOOL)checkClientIsFirstOrSecondParty;
- (BOOL)isFirstPartyAddressingGrammarEntitled;
- (BOOL)doesClientHaveEntitlement:(id)a0;
- (BOOL)cachedNotesAccessGranted;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1;
- (BOOL)shouldAlwaysQueryAuthorizationStatusImpl;
- (BOOL)isClientTCCAllowedImpl;
- (void).cxx_destruct;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1 tccServices:(id)a2;
- (BOOL)shouldAlwaysQueryAuthorizationStatus;
- (BOOL)isAddressingGrammarAccessGrantedImpl;
- (id)requestAuthorizationFuture:(long long)a0;
- (BOOL)isNotesAccessGrantedImpl;
- (BOOL)isClientTCCRegionalAllowedImpl;
- (BOOL)isFirstPartyNotesEntitled;
- (BOOL)isClientFirstOrSecondPartyImpl;
- (BOOL)isAccessGrantedRequestingAccessIfNeeded;
- (BOOL)requestAccessWithError:(id *)a0;
- (BOOL)isClientTCCCoupledProcess;
- (void)stopSimulation;

@end
