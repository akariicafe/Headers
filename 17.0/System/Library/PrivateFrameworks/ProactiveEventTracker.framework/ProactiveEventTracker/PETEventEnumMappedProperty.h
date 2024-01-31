@class NSDictionary;

@interface PETEventEnumMappedProperty : PETEventProperty {
    NSDictionary *_enumMap;
    BOOL _autoSanitizeValues;
}

- (unsigned long long)cardinality;
- (id)possibleValues;
- (id)description;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })validRange;
- (void).cxx_destruct;
- (BOOL)isValidValue:(id)a0;
- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (id)longestValueString;
- (id)initWithName:(id)a0 enumMapping:(id)a1 autoSanitizeValues:(BOOL)a2;

@end
