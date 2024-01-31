@interface MessageProtection.GLTKeyDiversificationSwift : NSObject

+ (struct __SecKey { } *)diversifyWithPrivateKey:(struct __SecKey { } *)a0 docId:(id)a1 trackingPreventionSalt:(id)a2 error:(id *)a3;
+ (id)diversifyWithPublicKey:(struct __SecKey { } *)a0 trackingPreventionSalt:(id)a1 docId:(id)a2 error:(id *)a3;

- (id)init;

@end
