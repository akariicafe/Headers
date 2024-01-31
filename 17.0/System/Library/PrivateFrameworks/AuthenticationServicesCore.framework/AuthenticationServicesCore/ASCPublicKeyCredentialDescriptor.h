@class NSSet, NSData, NSArray;

@interface ASCPublicKeyCredentialDescriptor : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) NSSet *cableTransports;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *credentialID;
@property (readonly, nonatomic) NSArray *transports;
@property (readonly, nonatomic) BOOL hasInternalTransport;
@property (readonly, nonatomic) BOOL hasCABLETransport;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCredentialID:(id)a0 transports:(id)a1;

@end
