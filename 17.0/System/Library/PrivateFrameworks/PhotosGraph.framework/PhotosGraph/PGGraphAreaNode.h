@class MARelation, NSString, PGGraphAreaNodeCollection, MANodeFilter, PGGraphLocationNode;
@protocol PGGraphLocationOrAreaNodeCollection;

@interface PGGraphAreaNode : PGGraphOptimizedNode <PGGraphLocationOrArea, PGGraphLocationNaming, PGGraphLocationCoordinates, PGAssetCollectionFeature>

@property (class, readonly, nonatomic) MANodeFilter *blockedFilter;
@property (class, readonly, nonatomic) MANodeFilter *nonBlockedFilter;
@property (class, readonly, nonatomic) MARelation *addressOfArea;

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } centroidCoordinate;
@property (readonly) NSString *name;
@property (readonly) unsigned char isBlocked : 1;
@property (readonly) NSString *fullname;
@property (readonly) double popularityScore;
@property (readonly) PGGraphLocationNode *stateOrBiggerParentLocationNode;
@property (readonly, nonatomic) PGGraphAreaNodeCollection *collection;
@property (readonly, nonatomic) id<PGGraphLocationOrAreaNodeCollection> locationOrAreaNodeCollection;
@property (readonly, nonatomic) BOOL supportsNameShortening;
@property (readonly, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;

+ (id)filter;
+ (id)filterWithName:(id)a0;
+ (id)filterWithNames:(id)a0;
+ (id)propertiesWithIsBlocked:(BOOL)a0;
+ (id)propertiesWithName:(id)a0 isBlocked:(BOOL)a1 popularityScore:(double)a2;
+ (id)propertiesWithPopularityScore:(double)a0;

- (id)propertyDictionary;
- (struct CLLocationCoordinate2D { double x0; double x1; })coordinate;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (void).cxx_destruct;
- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;
- (id)propertyForKey:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)addressNodes;
- (BOOL)diameterIsLargerThanDiameter:(double)a0;
- (id)initWithName:(id)a0 isBlocked:(BOOL)a1 popularityScore:(double)a2;
- (id)shortenedNameWithLocationHelper:(id)a0;

@end
