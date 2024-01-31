@interface MessageProtection.GFTKeyWrapper : NSObject

+ (id)decrypt:(id)a0 using:(struct __SecKey { } *)a1 error:(id *)a2;
+ (id)encrypt:(id)a0 to:(struct __SecKey { } *)a1 error:(id *)a2;
+ (id)unwrapWrappedSeed:(id)a0 legacy:(BOOL)a1 using:(struct __SecKey { } *)a2 error:(id *)a3;
+ (id)wrapSeed:(id)a0 to:(id)a1 legacy:(BOOL)a2 error:(id *)a3;

- (id)init;
- (void).cxx_destruct;

@end
