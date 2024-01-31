@interface BKSMutableHIDUISensorCharacteristics : BKSHIDUISensorCharacteristics

@property (nonatomic) BOOL hasDiscreteProximitySensor;

+ (id)new;

- (id)init;
- (void)setHasDiscreteProximitySensor:(BOOL)a0;

@end
