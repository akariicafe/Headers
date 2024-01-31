@interface GFTKeyWrapping : NSObject

+ (id)decrypt:(id)a0 usingKey:(struct __SecKey { } *)a1 error:(id *)a2;
+ (id)encrypt:(id)a0 toKey:(struct __SecKey { } *)a1 error:(id *)a2;
+ (id)unwrapSeed:(id)a0 usingKey:(struct __SecKey { } *)a1 legacy:(BOOL)a2 error:(id *)a3;
+ (id)wrapSeed:(id)a0 to:(struct __SecKey { } *)a1 legacy:(BOOL)a2 error:(id *)a3;
+ (id)wrapSeed:(id)a0 toKeys:(id)a1 error:(id *)a2;

@end
