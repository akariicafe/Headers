@interface GCGenericDevicePhysicalInputButtonModel : GCGenericDevicePhysicalInputElementModel

@property (readonly) long long sourceExtendedEventFieldIndex;

+ (BOOL)supportsSecureCoding;
+ (id)description;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
