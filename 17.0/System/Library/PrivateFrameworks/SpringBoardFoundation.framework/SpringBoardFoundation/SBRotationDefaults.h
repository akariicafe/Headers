@interface SBRotationDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) long long lastLockedOrientation;
@property (readonly, nonatomic, getter=isVideoRotationEnabled) BOOL videoRotationEnabled;
@property (readonly, nonatomic, getter=isPostModernRotationForciblyEnabled) BOOL postModernRotationForciblyEnabled;

- (void)_bindAndRegisterDefaults;

@end
