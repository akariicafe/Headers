@class POKeyRequestJWTBody;

@interface POKeyRequestJWT : POJWT

@property (retain) POKeyRequestJWTBody *decodedBody;

- (id)mutableCopy;
- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;

@end
