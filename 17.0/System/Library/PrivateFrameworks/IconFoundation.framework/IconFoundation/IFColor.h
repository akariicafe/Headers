@class CIColor, NSUUID;

@interface IFColor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct CGColor { } *cgColor;
@property (readonly) CIColor *ciColor;
@property (readonly) NSUUID *digest;

+ (struct CGColorSpace { } *)deviceGreyColorSpace;
+ (struct CGColorSpace { } *)deviceRGBColorSpace;
+ (id)black;
+ (id)white;

- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)initWithSystemColor:(long long)a0;
- (id)initWithCIColor:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSystemColor:(long long)a0 appearance:(long long)a1 contrast:(long long)a2 vibrancy:(long long)a3;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (id)_initWithColorStr:(id)a0 appearance:(long long)a1 contrast:(long long)a2 vibrancy:(long long)a3;
- (struct CGColor { } *)cgColor;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWhite:(double)a0 alpha:(double)a1;

@end
