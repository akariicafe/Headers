@class NSString, NSDate, TSCERegexMatcher, TSKFormat;

@interface TSCELogicalTest : NSObject {
    int _operation;
    struct TSCENumberValue { void /* function */ **_vptr$TSCEAbstractValue; struct TSUDecimal { struct { unsigned long long w[2]; } _decimal; } _decimal; struct TSCEFormat { TSKFormat *_tskFormat; unsigned int _formatType; unsigned char _formatState; struct TSCEDurationFormat { unsigned char _useAutomaticUnits : 1; unsigned char _durationUnitSmallest : 6; unsigned char _durationUnitLargest : 6; unsigned char _durationStyle : 3; } _durationFormat; struct TSCEBaseFormat { unsigned char base; unsigned char basePlaces; BOOL baseUseMinusSign; } _baseFormat; struct TSCEFractionFormat { char fractionAccuracy; } _fractionFormat; struct TSCENumberFormat { unsigned char decimalPlaces; unsigned char negativeStyle : 3; unsigned char showThousandsSeparator : 1; unsigned char useAccountingStyle : 1; unsigned short currencyCodeIndex; } _numberFormat; } _format; unsigned short _baseUnit; BOOL _isUnitlessZero; } _value;
}

@property (retain, nonatomic) TSCERegexMatcher *matcher;
@property (nonatomic) void *evaluationContext;
@property (retain, nonatomic) NSString *string;
@property (retain, nonatomic) NSDate *date;

+ (id)logicalTestWithCriterion:(struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[32]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[11]; } x0; unsigned char x1; })a0 functionSpec:(id)a1 evaluationContext:(void *)a2;

- (id).cxx_construct;
- (id)description;
- (unsigned long long)cost;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (int)criteriaParser:(id)a0;
- (BOOL)compare:(struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[32]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[11]; } x0; unsigned char x1; })a0 withContext:(void *)a1;
- (id)initWithCriterion:(struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[32]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[11]; } x0; unsigned char x1; })a0 functionSpec:(id)a1 evaluationContext:(void *)a2;

@end
