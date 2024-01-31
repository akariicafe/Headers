@class NSString, NSData;

@interface DAAlishaKeyEncryptedRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSData *ephemeralPublicKey;
@property (readonly, nonatomic) NSData *publicKeyHash;
@property (readonly, nonatomic) NSData *encryptedRequest;

+ (id)decodeWithData:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithVersion:(id)a0 ephemeralPublicKey:(id)a1 publicKeyHash:(id)a2 encryptedRequest:(id)a3;
- (id)encodeWithError:(id *)a0;

@end
