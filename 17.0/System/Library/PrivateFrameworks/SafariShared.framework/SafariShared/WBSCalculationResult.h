@class NSString, CalculateResult;

@interface WBSCalculationResult : NSObject {
    CalculateResult *_result;
}

@property (readonly, nonatomic, getter=isCalculation) BOOL calculation;
@property (readonly, nonatomic, getter=isCurrencyConversion) BOOL currencyConversion;
@property (readonly, nonatomic) NSString *sectionTitle;
@property (readonly, nonatomic) NSString *formattedExpression;
@property (readonly, nonatomic) NSString *formattedResult;
@property (readonly, nonatomic) NSString *formattedEquation;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCalculateResult:(id)a0;
- (id)reflectedStringForQueryString:(id)a0;

@end
