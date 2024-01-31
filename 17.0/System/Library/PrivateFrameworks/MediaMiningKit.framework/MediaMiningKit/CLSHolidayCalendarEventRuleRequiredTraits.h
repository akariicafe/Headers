@class NSDictionary;

@interface CLSHolidayCalendarEventRuleRequiredTraits : CLSHolidayCalendarEventRuleTraits

@property (nonatomic) BOOL mustContainMePerson;
@property (nonatomic) unsigned long long minimumPeopleCount;
@property (retain, nonatomic) NSDictionary *defaultScenesWithImportanceString;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long eventCategory;
@property (readonly, nonatomic) BOOL isCelebration;
@property (readonly, nonatomic) BOOL allowApproximateDateCalculation;

+ (id)_locationTraitDebugStringForTrait:(unsigned long long)a0;
+ (id)_peopleTraitDebugStringForTrait:(unsigned long long)a0;
+ (unsigned long long)importanceEnumForImportanceString:(id)a0;

- (id)description;
- (id)initWithDescription:(id)a0;
- (void).cxx_destruct;
- (BOOL)evaluateWithTraits:(id)a0 evaluateLocationTraits:(BOOL)a1;
- (unsigned long long)importanceForScene:(id)a0;
- (BOOL)peopleCountRangeIsRequired;

@end
