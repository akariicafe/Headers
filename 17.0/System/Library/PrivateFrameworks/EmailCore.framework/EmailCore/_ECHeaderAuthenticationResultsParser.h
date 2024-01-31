@interface _ECHeaderAuthenticationResultsParser : NSObject

+ (BOOL)_propertiesWithScanner:(id)a0 intoArray:(id *)a1;
+ (BOOL)_scanToCFWSOrEqualWithScanner:(id)a0 intoString:(id *)a1;
+ (BOOL)_scanToCFWSOrPeriodOrSemicolonWithScanner:(id)a0 intoString:(id *)a1;
+ (BOOL)_scanToCFWSOrSemicolonWithScanner:(id)a0 intoString:(id *)a1;
+ (BOOL)_skipCFWSWithScanner:(id)a0;
+ (BOOL)_statementWithScanner:(id)a0 intoStatement:(id *)a1;
+ (BOOL)_statementsWithScanner:(id)a0 intoArray:(id *)a1;
+ (long long)_versionWithScanner:(id)a0;

@end
