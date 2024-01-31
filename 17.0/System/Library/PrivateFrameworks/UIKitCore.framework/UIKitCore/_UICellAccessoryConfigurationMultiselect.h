@class UIColor;

@interface _UICellAccessoryConfigurationMultiselect : _UICellAccessoryConfiguration

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *selectedTintColor;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (long long)_systemType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_identifier;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
