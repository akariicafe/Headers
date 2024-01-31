@interface _GEONaturalLanguageNumberFormatter : NSNumberFormatter

- (BOOL)_isHalfDecimal:(double)a0 outIsExact:(out BOOL *)a1;
- (BOOL)_isNumberNearNaturalNumber:(double)a0 outIsExact:(out BOOL *)a1;
- (id)_string_nAndAHalfDistance:(id)a0 isApproximate:(BOOL)a1;
- (id)_string_nDistance:(id)a0 isApproximate:(BOOL)a1;
- (int)_tenthsDecimalPlace:(double)a0;
- (id)stringFromDistanceMeasurement:(id)a0 roundedDistanceMeasurement:(id)a1;

@end
