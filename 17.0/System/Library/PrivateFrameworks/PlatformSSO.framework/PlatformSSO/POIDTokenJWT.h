@class POIDTokenJWTBody;

@interface POIDTokenJWT : POJWT

@property (retain) POIDTokenJWTBody *decodedBody;

- (id)mutableCopy;
- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;

@end
