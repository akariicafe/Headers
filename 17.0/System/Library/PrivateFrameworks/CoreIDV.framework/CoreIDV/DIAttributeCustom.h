@interface DIAttributeCustom : DIAttributeText <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (void)setDefaultValue:(id)a0;
- (id)defaultValue;
- (id)init;
- (void)setIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setCurrentValue:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)submissionString;
- (id)getCurrentValue;

@end
