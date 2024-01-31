@interface WFDurationQuantityFieldParameter : WFQuantityFieldParameter

@property (nonatomic) unsigned long long possibleCalendarUnits;

+ (id)stateForDuration:(double)a0 possibleUnits:(id)a1;
+ (unsigned long long)calendarUnitFromUnitString:(id)a0;
+ (unsigned long long)possibleCalendarUnitsForUnits:(id)a0;
+ (BOOL)unitStringIsDurationUnit:(id)a0;

- (id)initWithDefinition:(id)a0;
- (id)defaultSerializedRepresentation;
- (void)createDialogRequestWithAttribution:(id)a0 defaultState:(id)a1 prompt:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)isTimePickerParameter;
- (id)localizedLabelForPossibleUnit:(id)a0 magnitude:(id)a1 style:(unsigned long long)a2;
- (BOOL)parameterStateIsValid:(id)a0;
- (id)stateForDuration:(double)a0;

@end
