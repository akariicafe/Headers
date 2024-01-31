@class NSMutableArray, EDReferenceCollection;

@interface EDConditionalFormatting : NSObject {
    NSMutableArray *mRules;
    EDReferenceCollection *mRanges;
    BOOL mApplyToDate;
}

+ (id)conditionalFormatting;

- (id)init;
- (unsigned long long)ruleCount;
- (id)rangeAtIndex:(unsigned long long)a0;
- (id)description;
- (void)addRange:(id)a0;
- (void).cxx_destruct;
- (void)addRule:(id)a0;
- (id)rules;
- (unsigned long long)rangeCount;
- (id)ruleAtIndex:(unsigned long long)a0;
- (BOOL)isApplyToDate;

@end
