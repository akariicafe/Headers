@interface NSAutoLocale : NSLocale

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;

@end
