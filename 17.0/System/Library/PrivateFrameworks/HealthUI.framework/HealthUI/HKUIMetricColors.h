@class UIColor;

@interface HKUIMetricColors : NSObject

@property (retain, nonatomic) UIColor *keyColor;
@property (retain, nonatomic) UIColor *contextViewPrimaryTextColor;
@property (retain, nonatomic) UIColor *contextViewSecondaryTextColor;

+ (id)allergiesClinicalColors;
+ (id)clinicalNotesClinicalColors;
+ (id)conditionsClinicalColors;
+ (id)immunizationsClinicalColors;
+ (id)insuranceClinicalColors;
+ (id)labResultsClinicalColors;
+ (id)medicationsClinicalColors;
+ (id)proceduresClinicalColors;
+ (id)unknownCategoryClinicalColors;
+ (id)vitalsClinicalColors;
+ (id)nutritionColors;
+ (id)activityColors;
+ (id)bodyMeasurementColors;
+ (id)carePlansClinicalColors;
+ (id)categoryColorsWithColor:(id)a0;
+ (id)defaultClinicalColors;
+ (id)defaultContextViewColorsUsingColor:(id)a0;
+ (id)devicesClinicalColors;
+ (id)disabledContextViewColor;
+ (id)hearingHealthColors;
+ (id)medicationTrackingColors;
+ (id)mindfulnessColors;
+ (id)mobilityColors;
+ (id)otherColors;
+ (id)reproductiveHealthColors;
+ (id)respiratoryColors;
+ (id)sleepColors;
+ (id)sleepColorsForSleepAnalysis:(long long)a0;
+ (id)socialHistoryClinicalColors;
+ (id)symptomsColors;
+ (id)vitalsColors;
+ (id)workoutContextViewColors;

- (void).cxx_destruct;

@end
