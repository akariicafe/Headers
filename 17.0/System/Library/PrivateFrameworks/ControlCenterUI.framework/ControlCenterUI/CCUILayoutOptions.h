@interface CCUILayoutOptions : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) double itemEdgeSize;
@property (readonly, nonatomic) double itemSpacing;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (id)_initWithLayoutOptions:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
