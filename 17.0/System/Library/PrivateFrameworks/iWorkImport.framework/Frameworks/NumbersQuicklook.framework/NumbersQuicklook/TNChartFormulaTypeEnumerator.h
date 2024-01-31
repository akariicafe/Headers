@class NSArray;

@interface TNChartFormulaTypeEnumerator : NSObject {
    NSArray *_keys;
    unsigned long long _count;
    unsigned long long _index;
}

- (void).cxx_destruct;
- (unsigned long long)nextFormulaType;
- (id)initWithChartFormulaStorage:(id)a0;

@end
