@class NSString;

@interface CNEntitlementVerifier : NSObject <CNEntitlementVerification>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)valuesForCurrentProcessForEntitlements:(id)a0 error:(id *)a1;
- (BOOL)auditToken:(struct { unsigned int x0[8]; })a0 hasArrayWithStringValue:(id)a1 forAnyEntitlement:(id)a2 error:(id *)a3;
- (id)valuesForAuditToken:(struct { unsigned int x0[8]; })a0 forEntitlements:(id)a1 error:(id *)a2;
- (BOOL)currentProcessHasBooleanEntitlement:(id)a0 error:(id *)a1;
- (BOOL)auditToken:(struct { unsigned int x0[8]; })a0 isFirstOrSecondPartyWithError:(id *)a1;
- (BOOL)currentProcessIsFirstOrSecondPartyWithError:(id *)a0;
- (BOOL)currentProcessHasArrayWithStringValue:(id)a0 forAnyEntitlement:(id)a1 error:(id *)a2;
- (BOOL)secTask:(struct __SecTask { } *)a0 hasBooleanEntitlement:(id)a1 error:(id *)a2;
- (BOOL)auditToken:(struct { unsigned int x0[8]; })a0 hasBooleanEntitlement:(id)a1 error:(id *)a2;
- (BOOL)secTask:(struct __SecTask { } *)a0 isFirstOrSecondPartyWithError:(id *)a1;
- (BOOL)secTask:(struct __SecTask { } *)a0 hasArrayWithStringValue:(id)a1 forAnyEntitlement:(id)a2 error:(id *)a3;
- (id)secTask:(struct __SecTask { } *)a0 valuesForEntitlements:(id)a1 error:(id *)a2;

@end
