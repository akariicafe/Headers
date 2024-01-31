@interface SignpostSupportExactProcessNameBlocklist : SignpostSupportExactProcessNameFilter

- (unsigned long long)_compoundPredicateType;
- (BOOL)_wantsNotEqual;
- (BOOL)passesProcessName:(id)a0;

@end
