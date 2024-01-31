@class NSArray, GEOPDEVCharger;

@interface GEOEVChargerAvailability : NSObject {
    GEOPDEVCharger *_charger;
    long long _aggregatedAvailable;
    long long _aggregatedTotal;
    NSArray *_supportedTypes;
}

@property (nonatomic) unsigned long long totalEVChargers;
@property (nonatomic) unsigned long long availableEVChargers;
@property (nonatomic) unsigned long long ttlSeconds;
@property (readonly, nonatomic, getter=_realTimePlugAvailabilityStatus) int realTimePlugAvailabilityStatus;
@property (readonly, nonatomic, getter=_availabilityStatus) int availabilityStatus;

- (id)initWithPlaceData:(id)a0;
- (void).cxx_destruct;
- (void)_filterAggregatedChargers:(id)a0;
- (int)_realTimePlugStatus:(int)a0;
- (long long)aggregatedAvailableCount:(id)a0;
- (long long)aggregatedTotalCount:(id)a0;

@end
