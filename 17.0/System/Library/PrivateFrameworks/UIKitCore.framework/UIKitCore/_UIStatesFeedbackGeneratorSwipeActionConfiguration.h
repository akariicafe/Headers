@interface _UIStatesFeedbackGeneratorSwipeActionConfiguration : _UIStatesFeedbackGeneratorConfiguration

+ (id)defaultConfiguration;
+ (id)confirmState;
+ (id)openState;
+ (id)restingState;

- (long long)requiredSupportLevel;

@end
