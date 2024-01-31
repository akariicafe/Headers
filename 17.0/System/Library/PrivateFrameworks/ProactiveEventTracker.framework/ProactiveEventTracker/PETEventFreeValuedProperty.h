@interface PETEventFreeValuedProperty : PETEventProperty

- (unsigned long long)cardinality;
- (id)initWithName:(id)a0;
- (id)possibleValues;
- (id)description;
- (BOOL)isValidValue:(id)a0;
- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (id)longestValueString;

@end
