@class NSArray, GEOEVChargerAvailability;

@interface GEOEVCharger : NSObject

@property (readonly, nonatomic) NSArray *plugs;
@property (readonly, nonatomic) GEOEVChargerAvailability *aggregatedAvailabilityInfo;

+ (id)chargerFromPlaceData:(id)a0;

- (void).cxx_destruct;
- (id)initWithPlugs:(id)a0 aggregatedAvailabilityInfo:(id)a1;

@end
