@class NSData, NSString;

@interface MSOID : NSObject

@property (readonly) struct heim_oid { unsigned long long length; unsigned int *components; } Asn1OID;
@property (readonly) const struct ccdigest_info { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; char *x4; void *x5; void /* function */ *x6; void /* function */ *x7; int x8; } *ccdigest;
@property (readonly) NSData *OIDBytes;
@property (readonly) NSString *OIDString;
@property (readonly) struct __CFString { } *secKeyAlgorithm;

+ (id)OIDWithString:(id)a0 error:(id *)a1;
+ (id)ECSignatureOIDWithDigestAlgorithm:(id)a0 error:(id *)a1;
+ (id)OIDWithData:(id)a0 error:(id *)a1;
+ (id)RSASignatureOIDWithDigestAlgorithm:(id)a0 error:(id *)a1;
+ (id)OIDWithAsn1OID:(struct heim_oid { unsigned long long x0; unsigned int *x1; } *)a0 error:(id *)a1;
+ (id)digestOIDWithSignatureAlgorithm:(id)a0 error:(id *)a1;
+ (id)signatureAlgorithmOIDWithSecKeyAlgorithm:(struct __CFString { } *)a0 error:(id *)a1;

- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithData:(id)a0 error:(id *)a1;
- (BOOL)isEqualToString:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithString:(id)a0 error:(id *)a1;
- (id)initDigestOIDWithSignatureAlgorithm:(id)a0 error:(id *)a1;
- (id)initECSignatureOIDWithDigestAlgorithm:(id)a0 error:(id *)a1;
- (id)initRSASignatureOIDWithDigestAlgorithm:(id)a0 error:(id *)a1;
- (id)initSignatureOIDWithSecKeyAlgorithm:(struct __CFString { } *)a0 error:(id *)a1;
- (id)initWithAsn1OID:(struct heim_oid { unsigned long long x0; unsigned int *x1; } *)a0 error:(id *)a1;
- (BOOL)setAsn1OidFromOIDString:(id)a0 error:(id *)a1;

@end
