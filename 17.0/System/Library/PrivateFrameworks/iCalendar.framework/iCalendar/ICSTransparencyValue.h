@interface ICSTransparencyValue : ICSPredefinedValue

+ (id)transparencyValueFromICSString:(id)a0;
+ (id)transparencyTypeFromCode:(int)a0;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
