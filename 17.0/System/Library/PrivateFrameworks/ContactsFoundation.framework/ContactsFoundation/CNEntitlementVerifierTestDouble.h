@class NSString, NSMutableDictionary;

@interface CNEntitlementVerifierTestDouble : NSObject <CNEntitlementVerification> {
    NSMutableDictionary *_entitlements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyForEntitlement:(id)a0;
+ (id)keyForEntitlement:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1;

- (id)init;
- (id)valuesForCurrentProcessForEntitlements:(id)a0 error:(id *)a1;
- (BOOL)auditToken:(struct { unsigned int x0[8]; })a0 hasArrayWithStringValue:(id)a1 forAnyEntitlement:(id)a2 error:(id *)a3;
- (id)valuesForAuditToken:(struct { unsigned int x0[8]; })a0 forEntitlements:(id)a1 error:(id *)a2;
- (BOOL)currentProcessHasBooleanEntitlement:(id)a0 error:(id *)a1;
- (BOOL)auditToken:(struct { unsigned int x0[8]; })a0 isFirstOrSecondPartyWithError:(id *)a1;
- (BOOL)currentProcessIsFirstOrSecondPartyWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)currentProcessHasArrayWithStringValue:(id)a0 forAnyEntitlement:(id)a1 error:(id *)a2;
- (BOOL)auditToken:(struct { unsigned int x0[8]; })a0 hasBooleanEntitlement:(id)a1 error:(id *)a2;
- (BOOL)booleanResultForKey:(id)a0 error:(id *)a1;
- (void)setAuditToken:(struct { unsigned int x0[8]; })a0 hasError:(id)a1 forEntitlement:(id)a2;
- (void)setAuditToken:(struct { unsigned int x0[8]; })a0 hasValue:(id)a1 forEntitlement:(id)a2;
- (void)setAuditToken:(struct { unsigned int x0[8]; })a0 isFirstOrSecondParty:(BOOL)a1;
- (void)setAuditToken:(struct { unsigned int x0[8]; })a0 isFirstOrSecondPartyError:(id)a1;
- (void)setCurrentProcessHasError:(id)a0 forEntitlement:(id)a1;
- (void)setCurrentProcessHasValue:(id)a0 forEntitlement:(id)a1;
- (id)stringArrayResultForKey:(id)a0 error:(id *)a1;
- (id)valueForEntitlementForKey:(id)a0 error:(id *)a1;

@end
