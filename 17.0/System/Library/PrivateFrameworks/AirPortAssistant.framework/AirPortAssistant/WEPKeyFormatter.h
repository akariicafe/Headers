@interface WEPKeyFormatter : UTF8Formatter

+ (id)sharedWEPKeyFormatter;
+ (id)wepKeyFormatter:(unsigned long long)a0;

- (BOOL)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;

@end
