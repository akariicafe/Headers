@class NSString, NSArray, CLCircularRegion, CLLocation, NSData;

@interface CLSLitePlacemark : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) CLCircularRegion *region;
@property (retain, nonatomic) NSString *thoroughfare;
@property (retain, nonatomic) NSString *subThoroughfare;
@property (retain, nonatomic) NSString *locality;
@property (retain, nonatomic) NSString *subLocality;
@property (retain, nonatomic) NSString *administrativeArea;
@property (retain, nonatomic) NSString *administrativeAreaCode;
@property (retain, nonatomic) NSString *subAdministrativeArea;
@property (retain, nonatomic) NSString *ISOcountryCode;
@property (retain, nonatomic) NSString *inlandWater;
@property (retain, nonatomic) NSString *ocean;
@property (retain, nonatomic) NSArray *areasOfInterest;
@property (nonatomic) BOOL isIsland;
@property (retain, nonatomic) NSData *revGeoLocationData;
@property (retain, nonatomic) NSString *geoServiceProvider;
@property (retain, nonatomic) NSArray *popularityScoresOrderedByAOI;
@property (readonly, nonatomic) BOOL isOcean;

+ (BOOL)_isIslandForGeoMapItem:(id)a0;
+ (id)popularityScoresOrderedByAOIFromAdditionalPlaceInfos:(id)a0 areasOfInterest:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_extractValuesFromGeoMapItem:(id)a0;
- (id)initWithCLPlacemark:(id)a0;
- (id)initWithCLPlacemark:(id)a0 popularityScoresOrderedByAOI:(id)a1;
- (id)initWithRTMapItem:(id)a0;

@end
