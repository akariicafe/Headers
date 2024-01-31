@class NSString;

@interface BCSEntitlementVerifier : NSObject <BCSEntitlementVerifying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)auditToken:(struct { unsigned int x0[8]; } *)a0 hasEntitlement:(id)a1;

@end
