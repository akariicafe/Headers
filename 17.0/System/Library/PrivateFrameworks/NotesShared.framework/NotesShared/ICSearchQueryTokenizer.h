@class NLTokenizer;

@interface ICSearchQueryTokenizer : NSObject

@property (class, readonly, nonatomic) NLTokenizer *tokenizer;

+ (void)_combineConnectorAndTokensAndRemoveDividersInPlaceForMutableTokenArray:(id)a0 searchString:(id)a1;
+ (id)_expandedTokensForSearchQuerySegmentArray:(id)a0 searchString:(id)a1 language:(id)a2;
+ (void)_insertConnectorAndDividerSegmentsIntoMutableTokenArray:(id)a0 searchString:(id)a1;
+ (id)_queryTokensForSearchString:(id)a0 language:(id)a1;
+ (void)_sortMutableSearchQueryTokensInPlace:(id)a0;
+ (id)connectorCharacterSet;
+ (id)expandedTokensForSearchString:(id)a0 language:(id)a1;
+ (id)nonConnectorCharacterSet;
+ (id)spellChecker;
+ (id)spellCheckerGuessesForSearchString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 language:(id)a2;
+ (id)tokensFromString:(id)a0 language:(id)a1;

@end
