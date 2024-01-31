@interface SKAuthenticationRequestEvent : SKEvent

@property (readonly, nonatomic) unsigned int pairingFlags;
@property (readonly, nonatomic) int passwordType;
@property (readonly, nonatomic) int throttleSeconds;

- (id)descriptionWithLevel:(int)a0;
- (id)initWithPasswordType:(int)a0 pairingFlags:(unsigned int)a1 throttleSeconds:(int)a2;

@end
