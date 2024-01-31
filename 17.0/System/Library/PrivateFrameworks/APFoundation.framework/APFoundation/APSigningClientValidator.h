@interface APSigningClientValidator : NSObject

+ (BOOL)hasEntitlement:(id)a0;
+ (BOOL)isAllowedClient;
+ (BOOL)_validateAllowListingForPoolCreation:(id)a0;
+ (id)mockXPCObject;
+ (void)setMockXPCObject:(id)a0;

@end
