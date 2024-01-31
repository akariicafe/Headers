@class NSNumber, NSArray, HKQuantity;
@protocol HKCurrentCountryCode;

@interface HKMCOnboardingCompletionInfo : NSObject

@property (readonly, copy, nonatomic) HKQuantity *userEnteredCycleLength;
@property (readonly, copy, nonatomic) HKQuantity *userEnteredPeriodLength;
@property (readonly, copy, nonatomic) NSNumber *userEnteredLastPeriodStartDay;
@property (readonly, copy, nonatomic) NSArray *addedCycleFactors;
@property (readonly, copy, nonatomic) NSArray *deletedCycleFactors;
@property (readonly, nonatomic) BOOL menstruationProjectionsEnabled;
@property (readonly, nonatomic) BOOL fertileWindowProjectionsEnabled;
@property (readonly, nonatomic) BOOL deviationDetectionEnabled;
@property (readonly, nonatomic) BOOL fertilityTrackingDisplayTypesVisible;
@property (readonly, nonatomic) BOOL sexualActivityDisplayTypeVisible;
@property (readonly, nonatomic) id<HKCurrentCountryCode> heartRateInputSupportedCountryCode;
@property (readonly, nonatomic) id<HKCurrentCountryCode> deviationDetectionSupportedCountryCode;
@property (readonly, nonatomic) id<HKCurrentCountryCode> wristTemperatureInputSupportedCountryCode;
@property (readonly, copy, nonatomic) NSNumber *heartRateInputEnabled;
@property (readonly, copy, nonatomic) NSNumber *wristTemperatureInputEnabled;

- (void).cxx_destruct;
- (id)initWithUserEnteredCycleLength:(id)a0 userEnteredPeriodLength:(id)a1 userEnteredLastPeriodStartDay:(id)a2 addedCycleFactors:(id)a3 deletedCycleFactors:(id)a4 menstruationProjectionsEnabled:(BOOL)a5 fertileWindowProjectionsEnabled:(BOOL)a6 deviationDetectionEnabled:(BOOL)a7 fertilityTrackingDisplayTypesVisible:(BOOL)a8 sexualActivityDisplayTypeVisible:(BOOL)a9 heartRateInputSupportedCountryCode:(id)a10 deviationDetectionSupportedCountryCode:(id)a11 wristTemperatureInputSupportedCountryCode:(id)a12 heartRateInputEnabled:(id)a13 wristTemperatureInputEnabled:(id)a14;

@end
