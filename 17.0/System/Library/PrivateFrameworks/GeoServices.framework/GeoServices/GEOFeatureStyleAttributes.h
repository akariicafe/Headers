@class NSString;

@interface GEOFeatureStyleAttributes : NSObject <NSCopying, NSSecureCoding> {
    struct shared_ptr<FeatureStyleAttributes> { struct FeatureStyleAttributes *__ptr_; struct __shared_weak_count *__cntrl_; } _attributes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct GeoCodecsFeatureStylePair { unsigned int x0; int x1; } *v;
@property (readonly, nonatomic) struct GeoCodecsFeatureStylePairExt { unsigned int x0; unsigned long long x1; } *extAttrs;
@property (readonly, nonatomic) unsigned char countExtAttrs;
@property (readonly, nonatomic) unsigned char countAttrs;
@property (readonly, nonatomic) char featureType;
@property (readonly, nonatomic) unsigned int lineType;
@property (readonly, nonatomic) BOOL isTunnel;
@property (readonly, nonatomic) BOOL isBridge;
@property (readonly, nonatomic) BOOL isRamp;
@property (readonly, nonatomic) int rampType;
@property (readonly, nonatomic) unsigned char rampDirection;
@property (readonly, nonatomic) BOOL isFreeway;
@property (readonly, nonatomic) BOOL isRailway;
@property (readonly, nonatomic) BOOL isBorder;
@property (readonly, nonatomic) BOOL hasDrivingSide;
@property (readonly, nonatomic) int drivingSide;
@property (readonly, nonatomic) BOOL isRoadPedestrianNavigable;
@property (readonly, nonatomic) int sidewalkSide;
@property (readonly, nonatomic) int walkableSide;
@property (readonly, nonatomic) int bikeableSide;
@property (readonly, nonatomic) int bikeLaneSide;
@property (readonly, nonatomic) BOOL isWalkable;
@property (readonly, nonatomic) BOOL isDrivable;
@property (readonly, nonatomic) BOOL shouldSuppress3DBuildingStrokes;
@property (readonly, nonatomic) NSString *poiCategory;

+ (id)RAPLocationStyleAttributes;
+ (id)frequentLocationStyleAttributes;
+ (id)addressMarkerStyleAttributes;
+ (id)airportStyleAttributes;
+ (id)calendarEventStyleAttributes;
+ (id)carRentalStyleAttributes;
+ (id)evChargerStyleAttributes;
+ (id)gasStationStyleAttributes;
+ (id)homeStyleAttributes;
+ (id)homeWithHalo;
+ (id)hotelStyleAttributes;
+ (id)inviteStyleAttributes;
+ (id)markerWithHalo;
+ (id)nearbyTransitStyleAttributes;
+ (id)parkedCarStyleAttributes;
+ (id)restaurantStyleAttributes;
+ (id)schoolStyleAttributes;
+ (id)schoolWithHalo;
+ (id)searchResultStyleAttributes;
+ (id)sharedLocationStyleAttributes;
+ (id)sharedLocationWithHalo;
+ (id)styleAttributesForPlace:(id)a0;
+ (id)ticketedEventStyleAttributes;
+ (id)transitStationStyleAttributes;
+ (id)workStyleAttributes;
+ (id)workWithHalo;

- (void)sort;
- (id)init;
- (id)initWithAttributes:(unsigned int)a0;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)description;
- (BOOL)hasAttributes;
- (void).cxx_destruct;
- (BOOL)isSearchResult;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithSharedStyleAttributes:(const void *)a0 extAttributes:(const struct GeoCodecsFeatureStylePairExt { unsigned int x0; unsigned long long x1; } *)a1 extAttributeCount:(unsigned char)a2;
- (BOOL)isSystemTransit;
- (int)poiType;
- (struct shared_ptr<const FeatureStyleAttributes> { struct FeatureStyleAttributes *x0; struct __shared_weak_count *x1; })_sharedAttributes;
- (id)copyWithAirportStyleAttributes;
- (void *)featureStyleAttributes;
- (struct shared_ptr<FeatureStyleAttributes> { struct FeatureStyleAttributes *x0; struct __shared_weak_count *x1; })featureStyleAttributesPtr;
- (id)initWithFeatureStyleAttributesPtr:(const void *)a0;
- (id)initWithGEOStyleAttributes:(id)a0;
- (id)initWithPlaceDataStyleAttributes:(id)a0;
- (id)initWithPlaceStyleAttributes:(id)a0;
- (id)initWithStyleAttributes:(const void *)a0;
- (BOOL)isLabelPOI;
- (BOOL)isLandmarkPOI;
- (BOOL)isTransit;
- (void)replaceAttributes:(const struct GeoCodecsFeatureStylePair { unsigned int x0; int x1; } *)a0 count:(unsigned int)a1;
- (void)setExtAttributes:(const struct GeoCodecsFeatureStylePairExt { unsigned int x0; unsigned long long x1; } *)a0 count:(unsigned int)a1;

@end
