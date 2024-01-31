@class NSString;

@interface FPTag : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) int color;

- (BOOL)isEqualToTag:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)localizedCompare:(id)a0;
- (long long)localizedStandardCompare:(id)a0;
- (id)initWithLabel:(id)a0 color:(int)a1;

@end
