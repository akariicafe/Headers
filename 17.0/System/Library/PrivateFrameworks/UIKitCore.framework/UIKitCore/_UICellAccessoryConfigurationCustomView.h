@class UIView;

@interface _UICellAccessoryConfigurationCustomView : _UICellAccessoryConfiguration

@property (readonly, nonatomic) UIView *customView;
@property (nonatomic) BOOL maintainsFixedSize;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_identifier;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isSystemType;
- (id)initWithCustomView:(id)a0;

@end
