@class NSString, NSDictionary, NSUnit, NSArray;

@interface WFUnitQuantityFieldParameter : WFQuantityFieldParameter {
    NSArray *_possibleUnits;
}

@property (retain, nonatomic) NSDictionary *unitSymbolMap;
@property (copy, nonatomic) NSString *unitType;
@property (retain, nonatomic) NSUnit *defaultUnit;
@property (nonatomic) BOOL fallbackToAllSupportedUnits;
@property (readonly, nonatomic) NSString *defaultUnitString;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)defaultSerializedRepresentation;
- (id)availableUnitForStringValue:(id)a0;
- (id)localizedLabelForPossibleUnit:(id)a0 magnitude:(id)a1 style:(unsigned long long)a2;
- (BOOL)parameterStateIsValid:(id)a0;
- (id)possibleUnits;
- (void)setPossibleUnits:(id)a0;
- (void)updatePossibleUnits;

@end
