@class BKSHIDEventAuthenticationMessage;

@interface _UIProductivityGestureAction : BSAction

@property (readonly, nonatomic) long long gestureDirection;
@property (readonly, nonatomic) BKSHIDEventAuthenticationMessage *authenticationMessage;

- (long long)UIActionType;
- (void)_handleActionForWindowScene:(id)a0;
- (id)initWithGestureDirection:(long long)a0 authenticationMessage:(id)a1;

@end
