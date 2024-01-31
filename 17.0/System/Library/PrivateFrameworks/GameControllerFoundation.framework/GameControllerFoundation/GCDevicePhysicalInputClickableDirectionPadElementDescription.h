@class NSArray;

@interface GCDevicePhysicalInputClickableDirectionPadElementDescription : GCDevicePhysicalInputDirectionPadElementDescription <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *pressedSources;
@property (nonatomic) unsigned long long eventPressedValueField;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
