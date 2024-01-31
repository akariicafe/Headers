@class NSString;

@interface MKSRPClient : NSObject

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;

- (void).cxx_destruct;
- (id)initWithPassword:(id)a0;
- (void)computeSharedKey:(id *)a0 clientPublicKey:(id *)a1 proofOfMatch:(id *)a2 FromSalt:(id)a3 serverPublicKey:(id)a4;

@end
