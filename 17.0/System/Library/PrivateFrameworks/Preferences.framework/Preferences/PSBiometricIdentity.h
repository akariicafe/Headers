@interface PSBiometricIdentity : NSObject

+ (id)identities;
+ (void)removeIdentity:(id)a0;
+ (long long)maximumIdentityCount;
+ (id)nameForIdentity:(id)a0;
+ (id)nextIdentityName;
+ (void)setName:(id)a0 forIdentity:(id)a1;

@end
