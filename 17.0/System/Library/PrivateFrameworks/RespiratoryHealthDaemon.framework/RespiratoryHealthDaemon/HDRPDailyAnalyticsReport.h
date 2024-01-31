@class NSUserDefaults, NSCalendar, HDProfile, NSDate, NRPairedDeviceRegistry, HKRPOxygenSaturationSettings;
@protocol HKFeatureAvailabilityProviding;

@interface HDRPDailyAnalyticsReport : NSObject

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) id<HKFeatureAvailabilityProviding> featureAvailabilityProvider;
@property (readonly, nonatomic) NRPairedDeviceRegistry *pairedDeviceRegistry;
@property (readonly, nonatomic) HKRPOxygenSaturationSettings *oxygenSaturationSettings;
@property (readonly, nonatomic) NSUserDefaults *controlCenterUserDefaults;
@property (readonly, nonatomic, getter=isHealthDataCollectionAllowed) BOOL healthDataCollectionAllowed;

- (BOOL)_hasCompatiblePairedAppleWatch;
- (id)_gatherImproveHealthAndActivityReportFromBackgroundOxygenSaturationSamplesInPreviousDay:(id)a0 oxygenSaturationSamplesInPreviousDay:(id)a1 error:(id *)a2;
- (id)_numberOfSamplesByTruncatedOxygenSaturationValueFromSamples:(id)a0 keyPrefix:(id)a1;
- (id)_activePairedWatchBuild;
- (id)_gatherDiagnosticAndUsageReportFromBackgroundOxygenSaturationSamplesInPreviousDay:(id)a0 wasWorn:(id)a1 error:(id *)a2;
- (id)_numberOfForegroundSamplesFromSamples:(id)a0;
- (id)_queryForOxygenSaturationSamplesInPreviousDayAndReturnError:(id *)a0;
- (id)_queryForHasWornWatchInPreviousDayAndReturnError:(id *)a0;
- (id)_numberOfWeeksSinceOnboardedAndReturnError:(id *)a0;
- (id)_dateIntervalForPreviousDays:(unsigned long long)a0;
- (id)_queryForBackgroundOxygenSaturationSamplesInPreviousDayAndReturnError:(id *)a0;
- (id)generatePayloadAndReturnError:(id *)a0;
- (id)_numberOfSamplesWithHighElevationTakeFromSamples:(id)a0;
- (void).cxx_destruct;
- (id)_numberOfSamplesWithExerciseMinute5MinutesPriorInPreviousDayAndReturnError:(id *)a0;
- (id)_numberOfSamplesWithHeartRateGreaterThan100BPMFromSamples:(id)a0;
- (id)_numberOfEveningSamplesFromSamples:(id)a0;
- (id)initWithDate:(id)a0 profile:(id)a1 pairedDeviceRegistry:(id)a2 featureAvailabilityProvider:(id)a3 oxygenSaturationSettings:(id)a4 controlCenterUserDefaults:(id)a5 healthDataCollectionAllowed:(BOOL)a6;

@end
