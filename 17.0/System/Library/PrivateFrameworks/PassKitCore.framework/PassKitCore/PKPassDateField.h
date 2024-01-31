@interface PKPassDateField : PKPassField

@property (nonatomic) long long dateStyle;
@property (nonatomic) long long timeStyle;
@property (nonatomic) BOOL isRelative;
@property (nonatomic) BOOL ignoresTimeZone;

+ (BOOL)supportsSecureCoding;

- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)value;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asMutableDictionary;

@end
