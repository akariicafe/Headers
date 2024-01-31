@class NSArray;

@interface UICollectionViewCompositionalLayoutConfiguration : NSObject <NSCopying>

@property (nonatomic) long long scrollDirection;
@property (nonatomic) double interSectionSpacing;
@property (copy, nonatomic) NSArray *boundarySupplementaryItems;
@property (nonatomic) long long contentInsetsReference;

+ (id)defaultConfiguration;

- (id)init;
- (id)initWithScrollDirection:(long long)a0 interSectionSpacing:(double)a1 boundarySupplememtaryItems:(id)a2 contentInsetsReference:(long long)a3;
- (unsigned long long)differencesFromConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
