@interface SecKeyRSAPrivate : NSObject

@property (retain, nonatomic) id secKeyRef;

- (id)publicKey;
- (id)dataRepresentation;
- (id)init;
- (id)initWithData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)decryptData:(id)a0 error:(id *)a1;

@end
