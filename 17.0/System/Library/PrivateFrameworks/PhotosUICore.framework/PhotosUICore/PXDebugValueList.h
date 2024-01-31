@class NSMutableArray;

@interface PXDebugValueList : NSObject <NSFastEnumeration>

@property (readonly, nonatomic) NSMutableArray *debugValues;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)addValueWithLabel:(id)a0 integerValue:(long long)a1;
- (void)addValueWithLabel:(id)a0;
- (void)addValueWithLabel:(id)a0 boolValue:(BOOL)a1;
- (void)addValueWithLabel:(id)a0 boolValue:(BOOL)a1 positiveValue:(BOOL)a2 positiveHighlighted:(BOOL)a3 negativeHighlighted:(BOOL)a4;
- (void)addValueWithLabel:(id)a0 doubleValue:(double)a1;
- (void)addValueWithLabel:(id)a0 highlightedScore:(double)a1;
- (void)addValueWithLabel:(id)a0 stringValue:(id)a1;
- (void)addValueWithLabel:(id)a0 stringValue:(id)a1 highlightStyle:(unsigned long long)a2;

@end
