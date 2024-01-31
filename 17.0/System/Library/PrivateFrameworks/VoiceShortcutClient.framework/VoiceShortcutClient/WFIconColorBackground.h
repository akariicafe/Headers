@class WFColor;

@interface WFIconColorBackground : WFIconBackground

@property (class, readonly, nonatomic) WFIconColorBackground *clearBackground;

@property (readonly, nonatomic) WFColor *color;
@property (readonly, nonatomic) long long blendMode;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithColor:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithColor:(id)a0 blendMode:(long long)a1;

@end
