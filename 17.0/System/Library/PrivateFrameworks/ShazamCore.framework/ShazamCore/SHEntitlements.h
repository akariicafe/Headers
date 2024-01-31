@interface SHEntitlements : NSObject

@property (nonatomic) BOOL isEntitledForStorefront;
@property (readonly, nonatomic) BOOL isEntitledForMicrophone;
@property (readonly, nonatomic) BOOL isEntitledForInternalClient;

- (id)init;
- (id)initWithConnection:(id)a0;
- (BOOL)boolValueOfEntitlement:(id)a0 fromConnection:(id)a1;
- (BOOL)boolValueOfEntitlement:(id)a0 fromSecTask:(struct __SecTask { } *)a1;
- (void)configureEntitlementsForConnection:(id)a0;
- (void)configureEntitlementsForTask:(struct __SecTask { } *)a0;
- (void *)copyValueOfEntitlement:(id)a0 fromSecTask:(struct __SecTask { } *)a1;
- (BOOL)entitlementArray:(id)a0 containsEntitlementValue:(id)a1 fromConnection:(id)a2;
- (BOOL)entitlementArray:(id)a0 containsEntitlementValue:(id)a1 fromSecTask:(struct __SecTask { } *)a2;
- (BOOL)hasRequiredEntitlements:(id)a0;
- (BOOL)tccBoolValueOfEntitlement:(id)a0 fromConnection:(id)a1;

@end
