@class PGGraphMomentNodeCollection, PGGraphLocationCountryNodeCollection, PGGraphAddressNodeCollection, PGGraphLocationStateNodeCollection, PGGraphLocationCountyNodeCollection;

@interface PGGraphLocationCityNodeCollection : PGGraphNamedLocationNodeCollection

@property (readonly, nonatomic) PGGraphAddressNodeCollection *addressNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphLocationCountryNodeCollection *countryNodes;
@property (readonly, nonatomic) PGGraphLocationStateNodeCollection *stateNodes;
@property (readonly, nonatomic) PGGraphLocationCountyNodeCollection *countyNodes;

+ (Class)nodeClass;

@end
