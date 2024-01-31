@interface DIAttributeFooter : DIAttributeLabel <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (void)setDefaultValue:(id)a0;
- (id)defaultValue;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
