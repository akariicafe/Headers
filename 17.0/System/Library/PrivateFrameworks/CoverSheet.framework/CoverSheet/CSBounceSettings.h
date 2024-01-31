@interface CSBounceSettings : PTSettings

@property double gravity;
@property double velocity;
@property double elasticity;
@property double friction;
@property double resistance;
@property double multiplier;
@property double minVelocityToAssist;
@property double maxVelocityToAssist;
@property double maxVelocityAssistance;

- (void)setDefaultValues;

@end
