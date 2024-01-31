@interface NCUserNotificationsUIKitDefaults : BSAbstractDefaultDomain

@property (nonatomic) BOOL shouldForceHapticTouchForPreview;

+ (id)standardDefaults;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
