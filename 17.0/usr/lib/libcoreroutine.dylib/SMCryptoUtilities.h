@interface SMCryptoUtilities : NSObject

+ (id)getRandomBytes:(unsigned long long)a0;
+ (id)createAllowReadToken;
+ (id)createSafetyCacheKey;
+ (id)decryptSafetyCache:(id)a0 withKey:(id)a1;
+ (id)encryptSafetyCache:(id)a0 withKey:(id)a1;
+ (id)getDeserializedJsonDict:(id)a0;
+ (id)getSerializedJsonData:(id)a0;

@end
