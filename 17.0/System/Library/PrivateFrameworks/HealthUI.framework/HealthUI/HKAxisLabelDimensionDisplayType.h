@class HKUnitPreferenceController, HKDisplayType, HKDisplayTypeValueFormatter;

@interface HKAxisLabelDimensionDisplayType : HKAxisLabelDimensionScalar

@property (retain, nonatomic) HKDisplayTypeValueFormatter *valueFormatter;
@property (retain, nonatomic) HKDisplayType *displayType;
@property (retain, nonatomic) HKUnitPreferenceController *unitController;

- (void).cxx_destruct;
- (id)stringForLocation:(id)a0 formatterForStepSize:(id)a1;
- (id)initWithDisplayType:(id)a0 unitPreferencesController:(id)a1;

@end
