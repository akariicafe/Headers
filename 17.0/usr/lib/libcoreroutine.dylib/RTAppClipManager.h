@class ATXProactiveCDNDownloader, RTDistanceCalculator;

@interface RTAppClipManager : RTService

@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) ATXProactiveCDNDownloader *procativeCDNDownloader;

- (id)init;
- (id)initWithDistanceCalculator:(id)a0;
- (void).cxx_destruct;
- (void)_fetchNearbyAppClipLocationsFromLocation:(id)a0 radius:(double)a1 limit:(unsigned long long)a2 handler:(id /* block */)a3;
- (id)_selectClosestLocationsFromLocations:(id)a0 toLocation:(id)a1 limit:(unsigned long long)a2;
- (void)fetchNearbyAppClipLocationsFromLocation:(id)a0 radius:(double)a1 limit:(unsigned long long)a2 handler:(id /* block */)a3;
- (id)initWithProactiveCDNDownloader:(id)a0 distanceCalculator:(id)a1;

@end
