@interface BKSHIDEventBiometricDescriptor : BKSHIDEventDescriptor

@property (readonly, nonatomic) unsigned int biometricEventType;

+ (BOOL)supportsSecureCoding;
+ (id)descriptorWithBiometricEventType:(unsigned int)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (BOOL)describes:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBiometricEventType:(unsigned int)a0;

@end
