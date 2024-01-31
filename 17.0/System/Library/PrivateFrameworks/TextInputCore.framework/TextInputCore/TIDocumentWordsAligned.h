@class NSMutableArray, NSMutableDictionary;

@interface TIDocumentWordsAligned : NSObject

@property (retain, nonatomic) NSMutableArray *inDocumentWordsStack;
@property (retain, nonatomic) NSMutableDictionary *leftContextToWordMap;

- (void)pushWordToDocument:(id)a0;
- (id)deleteWordsUpToContext:(id)a0;
- (id)init;
- (id)preferredLeftContextToWordMapKeyForLeftContext:(id)a0 andMatchingLeftContext:(id)a1;
- (id)wordsForContext:(id)a0;
- (id)matchingLeftContextToWordMapKey:(id)a0;
- (void)replaceLeftContextToWordMapKey:(id)a0 withNewKey:(id)a1;
- (id)_wordsFromContext:(id)a0 shouldDelete:(BOOL)a1;
- (id)wordsFromContext:(id)a0;
- (void)addToContextMap:(id)a0;
- (id)description;
- (void)insertWord:(id)a0 atIndex:(long long)a1;
- (id)lastWord;
- (void).cxx_destruct;
- (void)removeFromContextMap:(id)a0;
- (unsigned long long)wordsCount;

@end
