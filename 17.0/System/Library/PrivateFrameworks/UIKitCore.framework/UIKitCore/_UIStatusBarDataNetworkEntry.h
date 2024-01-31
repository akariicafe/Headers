@interface _UIStatusBarDataNetworkEntry : _UIStatusBarDataIntegerEntry

@property (nonatomic) long long status;
@property (nonatomic) BOOL lowDataModeActive;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (id)_ui_descriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
