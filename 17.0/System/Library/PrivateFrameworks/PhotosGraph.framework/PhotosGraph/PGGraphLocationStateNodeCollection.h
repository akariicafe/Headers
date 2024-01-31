@class PGGraphMomentNodeCollection, PGGraphLocationCountryNodeCollection, PGGraphAddressNodeCollection;

@interface PGGraphLocationStateNodeCollection : PGGraphNamedLocationNodeCollection

@property (readonly, nonatomic) PGGraphAddressNodeCollection *addressNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphLocationCountryNodeCollection *countryNodes;

+ (Class)nodeClass;

@end
