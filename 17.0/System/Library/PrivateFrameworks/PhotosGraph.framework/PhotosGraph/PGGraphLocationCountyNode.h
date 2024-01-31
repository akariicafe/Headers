@class PGGraphLocationCountyNodeCollection;

@interface PGGraphLocationCountyNode : PGGraphNamedLocationNode

@property (readonly, nonatomic) PGGraphLocationCountyNodeCollection *collection;

+ (id)filter;
+ (id)addressOfCounty;
+ (id)momentOfCounty;

- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (Class)collectionClass;

@end
