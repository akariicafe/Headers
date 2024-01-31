@class NSDictionary, NSString;

@interface _HKEntitlements : NSObject {
    NSString *_applicationIdentifier;
}

@property (readonly, copy, nonatomic) NSDictionary *entitlementValues;

+ (id)entitlementsWithDictionary:(id)a0;
+ (id)_entitlementsWithSecTask:(struct __SecTask { } *)a0 valueOverrides:(id)a1 error:(id *)a2;
+ (void)_setEntitlementsForCurrentTask:(id)a0;
+ (id)entitlementsForCurrentTaskWithError:(id *)a0;
+ (id)_containerAppExtensionEntitlementsForCurrentTask;
+ (id)entitlementsWithConnection:(id)a0 error:(id *)a1;
+ (id)_allowedEntitlementsSet;
+ (id)entitlementsWithApplicationIdentifier:(id)a0;

- (id)init;
- (BOOL)arrayEntitlement:(id)a0 containsString:(id)a1;
- (BOOL)hasPrivateMetadataAccess;
- (BOOL)hasPrivateAccessEntitlementWithIdentifier:(id)a0;
- (id)applicationIdentifier;
- (id)typesForReadAuthorizationBypass;
- (id)stringForEntitlement:(id)a0;
- (BOOL)hasEntitlement:(id)a0;
- (id)valueForEntitlement:(id)a0;
- (id)description;
- (id)typesForWriteAuthorizationOverride;
- (id)typesForReadAuthorizationOverride;
- (void).cxx_destruct;
- (id)_typesFromIdentifierArray:(id)a0;
- (BOOL)hasAccessEntitlementWithIdentifier:(id)a0;
- (BOOL)hasBackgroundDeliveryAPIAccess;
- (id)_initWithEntitlementValues:(id)a0;

@end
