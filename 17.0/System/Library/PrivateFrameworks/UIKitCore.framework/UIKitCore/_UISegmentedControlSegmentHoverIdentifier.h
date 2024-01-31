@interface _UISegmentedControlSegmentHoverIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) BOOL isSelected;

- (unsigned long long)hash;
- (BOOL)isEqualToIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIndex:(long long)a0 selected:(BOOL)a1;

@end
