@interface ICSActionValue : ICSPredefinedValue

+ (id)actionParameterFromCode:(int)a0;
+ (id)actionValueFromICSString:(id)a0;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
