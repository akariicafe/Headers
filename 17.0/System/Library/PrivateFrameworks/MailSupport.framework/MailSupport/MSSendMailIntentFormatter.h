@interface MSSendMailIntentFormatter : NSFormatter

- (id)stringForObjectValue:(id)a0;
- (BOOL)allowsReverseTransformation;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (id)_stringForAddresses:(id)a0;

@end
