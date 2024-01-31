@interface DESecurityUtils : NSObject

+ (id)getKeyFromData:(id)a0;
+ (id)getRandomIV;
+ (id)getRandomKey;
+ (id)randomDataOfLength:(unsigned long long)a0;
+ (id)sign:(id)a0 privateKey:(id)a1;
+ (BOOL)verify:(id)a0 expected:(id)a1 publicKey:(id)a2;

@end
