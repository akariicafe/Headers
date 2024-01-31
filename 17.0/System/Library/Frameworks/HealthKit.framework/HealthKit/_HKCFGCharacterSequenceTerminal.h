@class NSCharacterSet;

@interface _HKCFGCharacterSequenceTerminal : _HKCFGTerminal

@property (copy, nonatomic) NSCharacterSet *characterSet;

- (unsigned long long)_minimumLength;
- (BOOL)_scanValue:(id *)a0 withScanner:(id)a1;
- (void).cxx_destruct;
- (id)_label;

@end
