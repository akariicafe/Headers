@interface UICollectionLayoutSectionOrthogonalScrollingProperties : NSObject <NSCopying>

@property (nonatomic) double decelerationRate;
@property (nonatomic) long long bounce;

- (id)init;
- (id)_descriptionProperties;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
