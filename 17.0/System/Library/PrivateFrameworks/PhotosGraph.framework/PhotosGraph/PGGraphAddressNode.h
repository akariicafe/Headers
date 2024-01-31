@class MARelation, NSString, PGGraphAddressNodeCollection, PPLocationNamedEntities, MANodeFilter, CLLocation;

@interface PGGraphAddressNode : PGGraphLocationNode <PGGraphPortraitLocationNamedEntity, MAUniquelyIdentifiableNode> {
    long long _locationMode;
    NSString *_name;
}

@property (class, readonly, nonatomic) MARelation *homeOfAddress;
@property (class, readonly, nonatomic) MARelation *workOfAddress;
@property (class, readonly, nonatomic) MARelation *homeWorkOfAddress;
@property (class, readonly, nonatomic) MARelation *streetOfAddress;
@property (class, readonly, nonatomic) MARelation *districtOfAddress;
@property (class, readonly, nonatomic) MARelation *cityOfAddress;
@property (class, readonly, nonatomic) MARelation *countyOfAddress;
@property (class, readonly, nonatomic) MARelation *stateOfAddress;
@property (class, readonly, nonatomic) MARelation *countryOfAddress;
@property (class, readonly, nonatomic) MARelation *languageOfAddress;
@property (class, readonly, nonatomic) MARelation *momentOfAddress;
@property (class, readonly, nonatomic) MARelation *areaOfAddress;
@property (class, readonly, nonatomic) MARelation *numberOfAddress;
@property (class, readonly, nonatomic) MARelation *frequentLocationOfAddress;
@property (class, readonly) MANodeFilter *preciseFilter;
@property (class, readonly) MANodeFilter *impreciseFilter;

@property (readonly, nonatomic) PPLocationNamedEntities *pg_locationNamedEntity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long locationMode;
@property (readonly, nonatomic) BOOL isImproved;
@property (readonly, nonatomic) BOOL isOcean;
@property (readonly, nonatomic) BOOL isCoarse;
@property (readonly, nonatomic) BOOL isPrecise;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly) NSString *uuid;
@property (readonly, nonatomic) PGGraphAddressNodeCollection *collection;
@property (readonly, nonatomic) MANodeFilter *uniquelyIdentifyingFilter;

+ (id)filter;
+ (void)setCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 onAddressNodeForIdentifier:(unsigned long long)a1 inGraph:(id)a2;

- (id)featureIdentifier;
- (unsigned long long)featureType;
- (id)label;
- (id)propertyDictionary;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (void).cxx_destruct;
- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;
- (id)propertyForKey:(id)a0;
- (Class)collectionClass;
- (void)enumerateAreaEdgesAndNodesUsingBlock:(id /* block */)a0;
- (id)initWithLocationMode:(long long)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 name:(id)a2;
- (BOOL)isPersonHomeOrWorkAddress;

@end
