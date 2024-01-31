@interface _UIStatusBarDataTetheringEntry : _UIStatusBarDataEntry

@property (nonatomic) long long connectionCount;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (id)_ui_descriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
