@class BSColor;

@interface PRSPosterUpdateColorPayload : PRSPosterUpdatePayload <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BSColor *color;

- (id)rawValue;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithColor:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
