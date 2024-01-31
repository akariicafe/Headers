@protocol P256PublicKeyProtocol;

@interface PublicKey : NSObject

@property (retain) id<P256PublicKeyProtocol> key;

- (id)dataRepresentation;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
