@interface HostnameFormatter : APFormatter

+ (id)hostnameFormatter:(unsigned long long)a0;
+ (id)hostnameSet;

- (BOOL)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;

@end
