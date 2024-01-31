@interface RTIColor : NSObject <NSCopying, NSSecureCoding> {
    unsigned char _type : 8;
    double _values[4];
    struct CGColor { } *_cgColor;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)colorWithWhite:(double)a0 alpha:(double)a1;
+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (struct CGColor { } *)cgColor;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
