@interface CryptoKitPrivate.Scrypt : NSObject

+ (id)deriveKeyWithPassword:(id)a0 salt:(id)a1 outputSize:(long long)a2 cost:(unsigned long long)a3 blockSize:(unsigned int)a4 parallelization:(unsigned int)a5;

- (id)init;

@end
