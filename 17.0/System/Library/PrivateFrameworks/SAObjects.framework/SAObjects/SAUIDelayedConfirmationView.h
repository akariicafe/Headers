@interface SAUIDelayedConfirmationView : SAUIConfirmationView

@property (nonatomic) long long autoConfirmDelay;

+ (id)delayedConfirmationView;
+ (id)delayedConfirmationViewWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
