@interface BKSHIDEventGenericGestureDescriptor : BKSHIDEventDescriptor

@property (readonly, nonatomic) unsigned int genericGestureType;

+ (BOOL)supportsSecureCoding;
+ (id)descriptorWithGenericGestureType:(unsigned int)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (BOOL)describes:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithGenericGestureType:(unsigned int)a0;

@end
