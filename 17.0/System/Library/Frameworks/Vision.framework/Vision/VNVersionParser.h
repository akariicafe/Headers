@interface VNVersionParser : NSObject

+ (BOOL)_isSeparatedString:(id)a0 equalToString:(id)a1 atIndex:(unsigned long long)a2 usingSeparator:(id)a3;
+ (BOOL)isMajorVersion:(id)a0 equalToMajorVersion:(id)a1;
+ (BOOL)isMinorVersion:(id)a0 equalToMinorVersion:(id)a1;

@end
