@interface NEIKEv2AuthenticationProtocol : NSObject <NSCopying> {
    BOOL _isNonStandard;
    unsigned long long _method;
    unsigned long long _digitalSignatureAlgorithm;
}

@property (readonly, nonatomic) BOOL isSignature;
@property (readonly, nonatomic) BOOL isDigitalSignature;
@property (readonly, nonatomic) BOOL isNonStandard;
@property (readonly, nonatomic) unsigned long long method;
@property (readonly, nonatomic) unsigned long long digitalSignatureAlgorithm;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMethod:(unsigned long long)a0;
- (id)initWithDigitalSignature:(unsigned long long)a0;
- (id)initWithNonStandardDigitalSignature:(unsigned long long)a0;

@end
