@interface LAAuthenticationBiometricMethodConfiguration : LAAuthenticationMethodConfiguration

@property (readonly, nonatomic) BOOL autoRetry;
@property (readonly, nonatomic) BOOL avoidUsingFaceIDCamera;

- (id)initWithAutoRetry:(BOOL)a0 avoidUsingFaceIDCamera:(BOOL)a1 allowedUsers:(id)a2 authenticationContext:(id)a3;

@end
