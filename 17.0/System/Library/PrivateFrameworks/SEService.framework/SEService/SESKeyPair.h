@class NSData;

@interface SESKeyPair : NSObject

@property (readonly, nonatomic) NSData *publicKey;
@property (readonly, nonatomic) NSData *secretKey;

- (void).cxx_destruct;
- (id)initWithPublicKey:(id)a0 secretKey:(id)a1;

@end
