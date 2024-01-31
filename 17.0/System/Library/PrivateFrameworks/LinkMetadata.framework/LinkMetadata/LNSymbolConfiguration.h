@interface LNSymbolConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double pointSize;
@property (readonly, nonatomic) long long scale;
@property (readonly, nonatomic) long long weight;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPointSize:(double)a0 scale:(long long)a1 weight:(long long)a2;

@end
