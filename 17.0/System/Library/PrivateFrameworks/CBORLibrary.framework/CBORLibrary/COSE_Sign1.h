@class NSData, NSArray, NSString;

@interface COSE_Sign1 : COSE

@property (readonly, nonatomic) NSData *signature;
@property (readonly, nonatomic) NSArray *x509bag;
@property (readonly, nonatomic) NSArray *x509chain;
@property (readonly, nonatomic) NSString *x509uri;
@property (readonly, nonatomic) NSString *x509hashAlgorithmIdentifier;
@property (readonly, nonatomic) NSData *x509hashValue;

- (id)description;
- (id)initWithCBOR:(id)a0;
- (id)initWithProtectedHeaders:(id)a0 unprotectedHeaders:(id)a1 payload:(id)a2 signature:(id)a3 includeCBORTag:(BOOL)a4;

@end
