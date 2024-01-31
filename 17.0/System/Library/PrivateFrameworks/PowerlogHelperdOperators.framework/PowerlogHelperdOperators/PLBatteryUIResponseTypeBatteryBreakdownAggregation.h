@class NSMutableDictionary;

@interface PLBatteryUIResponseTypeBatteryBreakdownAggregation : PLBatteryUIResponseTypeBatteryBreakdown

@property (retain) NSMutableDictionary *backgroundLocationBreakdown;
@property (retain) NSMutableDictionary *backgroundLocationPluggedInBreakdown;
@property (retain) NSMutableDictionary *backgroundAudioBreakdown;
@property (retain) NSMutableDictionary *backgroundAudioPluggedInBreakdown;
@property (retain) NSMutableDictionary *backgroundLocationAudioBreakdown;
@property (retain) NSMutableDictionary *backgroundLocationAudioPluggedInBreakdown;

- (void).cxx_destruct;
- (BOOL)isForegroundOnlyBucket:(short)a0;
- (void)populateEnergyBucketKeysWithEntries:(id)a0;
- (void)adjustRuntimes:(id)a0;
- (void)initBackgroundLocationAudioTime;
- (void)addFgEnergyForMetrics:(id)a0 qualificationID:(id)a1 rootNodeQualificationEnergy:(id)a2 energyEntry:(id)a3;
- (void)addRNEForMetrics:(id)a0 rootNodeEnergy:(id)a1 energyEntry:(id)a2;
- (void)bgLocationAudioTimeApps:(id)a0;
- (void)bgLocationAudioTimeRuntimes:(id)a0 bundleID:(id)a1;
- (void)filterEnergyEntries:(id)a0;
- (void)filterEnergyEntriesWithRuntimes:(id)a0;
- (BOOL)filterFgBg:(id)a0 filterArray:(id)a1;
- (struct _PLTimeIntervalRange { double x0; double x1; })generateRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0 withDataRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1;
- (void)populateBackgroundLocationAudioTime:(id)a0 bundleID:(id)a1;
- (BOOL)shouldShowBreakdown:(id)a0;

@end
