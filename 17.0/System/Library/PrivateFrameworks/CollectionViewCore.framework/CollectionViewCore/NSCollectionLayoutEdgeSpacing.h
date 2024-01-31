@class NSCollectionLayoutSpacing;

@interface NSCollectionLayoutEdgeSpacing : NSObject <NSCopying> {
    NSCollectionLayoutSpacing *_leading;
    NSCollectionLayoutSpacing *_top;
    NSCollectionLayoutSpacing *_trailing;
    NSCollectionLayoutSpacing *_bottom;
}

@property (readonly, nonatomic) NSCollectionLayoutSpacing *leading;
@property (readonly, nonatomic) NSCollectionLayoutSpacing *top;
@property (readonly, nonatomic) NSCollectionLayoutSpacing *trailing;
@property (readonly, nonatomic) NSCollectionLayoutSpacing *bottom;

+ (id)defaultSpacing;
+ (id)flexibleSpacing:(double)a0;
+ (id)spacingForLeading:(id)a0 top:(id)a1 trailing:(id)a2 bottom:(id)a3;
+ (id)fixedSpacing:(double)a0;

- (id)initWithLeading:(id)a0 top:(id)a1 trailing:(id)a2 bottom:(id)a3;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })edgeOutsets;
- (BOOL)_hasSpacing;
- (double)spacingForEdge:(unsigned long long)a0;
- (id)description;
- (id)_externalDescription;
- (BOOL)isSpacingFlexibleForEdge:(unsigned long long)a0;
- (BOOL)isSpacingFixedForEdge:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)_spacingForEdge:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
