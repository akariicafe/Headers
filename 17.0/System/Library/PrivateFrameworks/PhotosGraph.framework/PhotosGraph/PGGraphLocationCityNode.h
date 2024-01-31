@class PGGraphLocationCityNodeCollection, MARelation;

@interface PGGraphLocationCityNode : PGGraphNamedLocationNode

@property (class, readonly) MARelation *momentInCity;
@property (class, readonly) MARelation *addressOfCity;

@property (readonly, nonatomic) PGGraphLocationCityNodeCollection *collection;

+ (id)filter;
+ (id)countryOfCity;
+ (id)countyOfCity;
+ (id)stateOfCity;

- (unsigned long long)featureType;
- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (Class)collectionClass;
- (BOOL)supportsNameShortening;

@end
