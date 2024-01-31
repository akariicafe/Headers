@interface LegacySigningKeyPublic : NSObject

@property (retain, nonatomic) id secKeyRef;

- (id)dataRepresentation;
- (id)initWithData:(id)a0 error:(id *)a1;
- (BOOL)verifySignature:(id)a0 ofData:(id)a1;
- (void).cxx_destruct;

@end
