@interface OITSUPair : NSObject <NSCopying, NSMutableCopying, NSCoding>

@property (readonly, nonatomic) id first;
@property (readonly, nonatomic) id second;

+ (id)pairWithFirst:(id)a0 second:(id)a1;
+ (id)pair;
+ (id)pairWithPair:(id)a0;

- (void)p_SetFirst:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithFirst:(id)a0 second:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (void)p_SetSecond:(id)a0;
- (id)description;
- (id)initWithPair:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
