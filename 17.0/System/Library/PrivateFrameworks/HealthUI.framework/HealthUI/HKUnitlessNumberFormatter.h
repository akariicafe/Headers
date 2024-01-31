@class HKUnitPreferenceController, HKDisplayType, NSString;

@interface HKUnitlessNumberFormatter : NSObject <HKNumberFormatter>

@property (readonly, nonatomic) HKDisplayType *displayType;
@property (readonly, nonatomic) HKUnitPreferenceController *unitPreferenceController;
@property (nonatomic) BOOL forceUnitlessForAllTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDisplayType:(id)a0 unitPreferenceController:(id)a1;
- (id)initWithDisplayType:(id)a0 unitPreferenceController:(id)a1 forceUnitlessForAllTypes:(BOOL)a2;
- (BOOL)returnsUnitWithValueForDisplay;
- (id)stringFromNumber:(id)a0 displayType:(id)a1 unitController:(id)a2;

@end
