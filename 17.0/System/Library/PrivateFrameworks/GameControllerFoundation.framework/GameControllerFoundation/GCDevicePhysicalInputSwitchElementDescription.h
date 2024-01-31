@class NSArray;

@interface GCDevicePhysicalInputSwitchElementDescription : GCDevicePhysicalInputElementDescription <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *sources;
@property (nonatomic, getter=isSequential) BOOL sequential;
@property (nonatomic) BOOL canWrap;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } positionRange;
@property (nonatomic) unsigned long long eventPositionField;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
