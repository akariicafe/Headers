@class POKeyExchangeRequestJWTBody;

@interface POKeyExchangeRequestJWT : POJWT

@property (retain) POKeyExchangeRequestJWTBody *decodedBody;

- (id)mutableCopy;
- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;

@end
