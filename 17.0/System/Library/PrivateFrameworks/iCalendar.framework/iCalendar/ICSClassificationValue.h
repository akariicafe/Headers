@interface ICSClassificationValue : ICSPredefinedValue

+ (id)classificationFromCode:(int)a0;
+ (id)classificationValueFromICSString:(id)a0;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
