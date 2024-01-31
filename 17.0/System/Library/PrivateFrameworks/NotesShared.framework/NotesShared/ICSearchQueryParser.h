@interface ICSearchQueryParser : NSObject

+ (id)_queryStringForSingleTokenString:(id)a0 queryFields:(id)a1 matchType:(unsigned char)a2 queryFlags:(id)a3;
+ (id)prefixMatchingQueryStringForSearchString:(id)a0 enableSpellCheckSPI:(BOOL)a1 languageForSpellchecking:(id)a2 expandedTokens:(id *)a3;
+ (id)queryStringForExpandedTokens:(id)a0 queryFields:(id)a1 matchType:(unsigned char)a2;
+ (id)queryStringForSearchString:(id)a0 queryFields:(id)a1 matchType:(unsigned char)a2;

@end
