@class HKUnit, UIFont;

@interface HKQuantityFormattingParameters : NSObject

@property (retain, nonatomic) HKUnit *preferredUnit;
@property (nonatomic) long long precision;
@property (nonatomic) long long significantDigits;
@property (nonatomic) BOOL omitUnit;
@property (nonatomic) long long wheelchairUse;
@property (nonatomic) unsigned long long timeFormatOptions;
@property (retain, nonatomic) UIFont *valueFont;
@property (retain, nonatomic) UIFont *unitFont;
@property (nonatomic) BOOL useColor;
@property (nonatomic) BOOL hasSpaceBetweenValueAndUnit;

- (id)init;
- (void).cxx_destruct;
- (long long)_maximumPrecisionForObjectType:(id)a0 unit:(id)a1 value:(double)a2;
- (BOOL)_objectType:(id)a0 isCategoryWithIdentifier:(id)a1;
- (BOOL)_objectType:(id)a0 isQuantityWithIdentifier:(id)a1;
- (void)_setFormatter:(id)a0 maximumSignificantDigits:(long long)a1;
- (id)_sleepFormatForQuantity:(id)a0;
- (id)_standardFormatForQuantity:(id)a0 unit:(id)a1 objectType:(id)a2;
- (id)_unitForQuantity:(id)a0 objectType:(id)a1;
- (BOOL)_unitIsFeet:(id)a0;
- (id)unitString:(id)a0 quantity:(id)a1;
- (id)valueString:(id)a0 quantity:(id)a1;

@end
