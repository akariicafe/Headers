@interface LAAuthenticationBiometricMethodState : LAAuthenticationMethodState

@property (nonatomic) BOOL isTouchID;
@property (nonatomic) BOOL isFaceID;
@property (nonatomic) unsigned long long lockoutState;
@property (nonatomic) BOOL isUserPresent;

- (id)description;

@end
