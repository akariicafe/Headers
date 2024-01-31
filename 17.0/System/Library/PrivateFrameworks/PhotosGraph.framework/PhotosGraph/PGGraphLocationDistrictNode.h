@class PGGraphLocationDistrictNodeCollection;

@interface PGGraphLocationDistrictNode : PGGraphNamedLocationNode

@property (readonly, nonatomic) PGGraphLocationDistrictNodeCollection *collection;

+ (id)filter;

- (unsigned long long)featureType;
- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;

@end
