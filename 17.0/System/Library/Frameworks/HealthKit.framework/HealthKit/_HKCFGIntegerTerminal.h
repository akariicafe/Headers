@interface _HKCFGIntegerTerminal : _HKCFGTerminal

@property (copy, nonatomic) id /* block */ condition;

- (unsigned long long)_minimumLength;
- (BOOL)_scanValue:(id *)a0 withScanner:(id)a1;
- (void).cxx_destruct;
- (id)_label;
- (id)characterSet;

@end
