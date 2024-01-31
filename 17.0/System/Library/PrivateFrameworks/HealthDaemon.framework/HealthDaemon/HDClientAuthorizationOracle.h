@class NSString, HDProfile, _HKEntitlements;

@interface HDClientAuthorizationOracle : NSObject {
    HDProfile *_profile;
    NSString *_sourceBundleIdentifier;
    _HKEntitlements *_entitlements;
    BOOL _clientHasPrivateEntitlement;
}

@property (readonly) BOOL clientHasAuthorizationForAllTypes;

- (id)init;
- (BOOL)isAuthorizedToReadObject:(id)a0 error:(id *)a1;
- (id)additionalAuthorizationPredicateForObjectType:(id)a0 error:(id *)a1;
- (id)initWithSourceBundleIdentifier:(id)a0 entitlements:(id)a1 profile:(id)a2;
- (BOOL)performReadAuthorizationTransactionWithError:(id *)a0 handler:(id /* block */)a1;
- (BOOL)isAuthorizationStatusDeterminedForTypes:(id)a0 error:(id *)a1;
- (id)readAuthorizationStatusesForTypes:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)filteredObjectsForReadAuthorization:(id)a0 anchor:(id)a1 error:(id *)a2;
- (id)readAuthorizationStatusForType:(id)a0 error:(id *)a1;

@end
