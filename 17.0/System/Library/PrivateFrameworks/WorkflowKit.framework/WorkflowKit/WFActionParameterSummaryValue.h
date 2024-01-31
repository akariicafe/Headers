@class NSArray, NSDictionary, NSString;

@interface WFActionParameterSummaryValue : NSObject

@property (readonly, copy, nonatomic) NSArray *requiredVisibleParameterKeys;
@property (readonly, copy, nonatomic) NSDictionary *requiredValues;
@property (readonly, copy, nonatomic) NSString *summaryString;
@property (readonly, copy, nonatomic) NSString *key;

+ (id)parenthesisRegularExpression;

- (void).cxx_destruct;
- (void)explodeKeys:(id)a0 currentKeyIndex:(unsigned long long)a1 possibleValuesPerKey:(id)a2 currentCombination:(id)a3 results:(id)a4;
- (id)explodedKeysWithPossibleValuesInAction:(id)a0;
- (id)initWithKey:(id)a0 summaryString:(id)a1;
- (id)mapPossibleValuesToKeys:(id)a0;
- (id)matchVisibleParameterKeys:(id)a0 checkingRequiredValuesInAction:(id)a1;
- (id)namedRequiredValuesInAction:(id)a0;

@end
