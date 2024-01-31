@class NTKPromise, NSString, NSHashTable, NSDate, CLLocation;

@interface NTKSiderealDataSource : NSObject {
    NSHashTable *_observers;
    long long _locationManagerRefCount;
    NSString *_locationManagerToken;
    NSDate *_currentReferenceDate;
    CLLocation *_currentReferenceLocation;
    NTKPromise *_currentData;
    BOOL _useXR;
}

+ (id)siderealDataForLocation:(id)a0 atDate:(id)a1 useXR:(BOOL)a2;
+ (id)_solarEventsForLocation:(struct { double x0; double x1; })a0 atDate:(id)a1;
+ (BOOL)_date:(id)a0 isBetweenDate:(id)a1 andDate:(id)a2;
+ (id)_dayEventsFromEvents:(id)a0;
+ (long long)_endOfDayEventFollowingSolarEvent:(long long)a0;
+ (id)_eventWithType:(long long)a0 time:(id)a1;
+ (struct { double x0; double x1; })_geoLocationForLocation:(id)a0;
+ (double)_solarPercentageToDegree:(double)a0;
+ (id)_solarSectorsForEvents:(id)a0;
+ (long long)_startOfDayEventPreceedingFirstSolarEvent:(long long)a0;
+ (id)_waypointsForTransitInfo:(id)a0 andEvents:(id)a1;
+ (double)reverseInterpolateBetweenCalendricalMidnights:(id)a0;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_updateData;
- (void)ensureLocation:(id)a0;
- (BOOL)_didLocationChangeSignificantlyFromOldLocation:(id)a0 toNewLocation:(id)a1;
- (void)_locationManagerUpdatedLocation:(id)a0 error:(id)a1;
- (void)_notifySiderealDataDidUpdate:(id)a0;
- (void)_updateDataIfNeededToDate:(id)a0 atLocation:(id)a1;
- (void)_updateForSignificantTimeChange:(id)a0;
- (id)initWithXR:(BOOL)a0;
- (void)startLocationUpdates;
- (void)stopLocationUpdates;
- (void)updateModelWithDate:(id)a0;

@end
