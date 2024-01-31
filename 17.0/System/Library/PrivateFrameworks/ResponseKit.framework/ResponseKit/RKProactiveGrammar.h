@interface RKProactiveGrammar : NSObject

+ (id)sharedManager;
+ (id)getEntities:(id)a0;
+ (id)getOTAPathForRKBundle:(id)a0;

- (id)init;
- (void)dealloc;
- (void *)chineseTokenizer;
- (id)copyAttributedTokenForText:(id)a0 forLanguage:(id)a1;
- (id)copyAttributedTokenForText:(id)a0 forLanguageModel:(void *)a1 withLanguageCode:(id)a2;
- (id)getEquivalenceClass:(id)a0;
- (void *)getLanguageModel:(id)a0;

@end
