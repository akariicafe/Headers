@class NSData, NSString;

@interface ENCypher_AES128 : NSObject <ENCypher>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *key;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_randomDataWithLength:(long long)a0;
+ (id)_decryptData:(id)a0 withKey:(id)a1;
+ (id)_encryptData:(id)a0 withKey:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)cypherData:(id)a0 withAccountIdentity:(id)a1 identifier:(id *)a2 error:(id *)a3;
- (id)decypherData:(id)a0 withAccountIdentity:(id)a1 signingDevicePublicKey:(id)a2 identifier:(id)a3 error:(id *)a4;
- (id)initWithRandomKey;

@end
