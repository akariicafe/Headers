@class NSString;

@interface _UIClientToHostGestureChangeAction : BSAction

@property (readonly, nonatomic) NSString *hostGestureIdentifier;
@property (readonly, nonatomic) long long state;

- (long long)UIActionType;
- (void)dispatchToHostGestureRecognizer;
- (id)initWithHostGestureIdentifier:(id)a0 changeToState:(long long)a1;

@end
