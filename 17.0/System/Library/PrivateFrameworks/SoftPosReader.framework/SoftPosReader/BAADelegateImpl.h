@class NSString;

@interface BAADelegateImpl : NSObject <BAASupportDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInternal;
+ (int)confirmSigKey:(unsigned int)a0 status:(int)a1;
+ (int)generateSigKey:(unsigned int)a0 keyData:(id *)a1 attestation:(id *)a2 pubKey:(id *)a3;
+ (int)getBlessedUser:(unsigned int *)a0 keybagUUID:(unsigned char[16])a1;
+ (int)getSigKeyCertificates:(unsigned int)a0 certificates:(id *)a1;
+ (int)getSigKeyExpDate:(unsigned int)a0 expirationDate:(unsigned long long *)a1;
+ (int)setSigKey:(unsigned int)a0 expirationDate:(unsigned long long)a1 keyData:(id)a2 certificates:(id)a3;


@end
