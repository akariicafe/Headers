@class NSData;

@interface PKASCAssociatedReaderIDReaderCA : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSData *attestation;

- (unsigned long long)hash;
- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToASCAssociatedReaderIDReaderCA:(id)a0;

@end
