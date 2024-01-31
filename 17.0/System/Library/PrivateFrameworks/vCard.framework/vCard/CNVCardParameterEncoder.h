@interface CNVCardParameterEncoder : NSObject

+ (id)substitutions;
+ (id)encodeParameterValue:(id)a0;
+ (BOOL)mustEncloseStringInQuotes:(id)a0;
+ (id)stringByEnclosingInQuotesIfNecessary:(id)a0;
+ (id)stringByReplacingEncodableCharactersInString:(id)a0;

@end
