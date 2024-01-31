@interface ISCodableIcon : ISIcon <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
