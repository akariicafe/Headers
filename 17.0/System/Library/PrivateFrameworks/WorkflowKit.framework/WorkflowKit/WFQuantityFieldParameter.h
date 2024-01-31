@class NSArray;

@interface WFQuantityFieldParameter : WFNumberFieldParameter

@property (copy, nonatomic) NSArray *possibleUnits;

+ (BOOL)defaultAllowsDecimalNumbers;
+ (BOOL)defaultAllowsNegativeNumbers;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)defaultUnit;
- (id)defaultSerializedRepresentation;
- (void)createDialogRequestWithAttribution:(id)a0 defaultState:(id)a1 prompt:(id)a2 completionHandler:(id /* block */)a3;
- (id)localizedLabelForPossibleUnit:(id)a0 magnitude:(id)a1 style:(unsigned long long)a2;
- (Class)singleStateClass;

@end
