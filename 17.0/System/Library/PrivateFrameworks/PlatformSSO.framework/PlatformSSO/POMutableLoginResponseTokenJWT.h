@class POLoginResponseJWTBody;

@interface POMutableLoginResponseTokenJWT : POMutableJWT

@property (retain) POLoginResponseJWTBody *body;

- (id)description;
- (void).cxx_destruct;

@end
