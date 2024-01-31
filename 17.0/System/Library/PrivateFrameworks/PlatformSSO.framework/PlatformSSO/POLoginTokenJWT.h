@class POLoginJWTBody;

@interface POLoginTokenJWT : POJWT

@property (retain) POLoginJWTBody *decodedBody;

- (id)mutableCopy;
- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;

@end
