@class NSSet, BKSHIDEventDeferringToken, BKSHIDEventDeferringEnvironment;

@interface BKSMutableHIDEventKeyCommandsRegistration : BKSHIDEventKeyCommandsRegistration

@property (copy, nonatomic) BKSHIDEventDeferringEnvironment *deferringEnvironment;
@property (copy, nonatomic) BKSHIDEventDeferringToken *deferringToken;
@property (copy, nonatomic) NSSet *keyCommands;

+ (id)new;

- (void)setDeferringEnvironment:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDeferringToken:(id)a0;
- (void)setKeyCommands:(id)a0;

@end
