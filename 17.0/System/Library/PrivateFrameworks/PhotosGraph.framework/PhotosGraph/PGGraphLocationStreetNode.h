@class PGGraphLocationStreetNodeCollection;

@interface PGGraphLocationStreetNode : PGGraphNamedLocationNode

@property (readonly, nonatomic) PGGraphLocationStreetNodeCollection *collection;

+ (id)filter;

- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;

@end
