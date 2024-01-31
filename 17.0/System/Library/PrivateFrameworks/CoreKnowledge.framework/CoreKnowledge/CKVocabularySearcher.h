@class NSObject;
@protocol CKVSearchService;

@interface CKVocabularySearcher : NSObject {
    NSObject<CKVSearchService> *_searchService;
}

+ (void)initialize;
+ (id)makeSearcher;
+ (id)makeSearcherForUserId:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)matchSpansOfString:(id)a0;
- (BOOL)_validateAppIds:(id)a0 andAddToCriteria:(id)a1;
- (BOOL)_validateCustomTypes:(id)a0 andAddToCriteria:(id)a1;
- (BOOL)_validateUtteranceTokens:(id)a0;
- (id)initWithSearchService:(id)a0 userId:(id)a1 prewarm:(BOOL)a2;
- (id)matchSpansOfUtterance:(id)a0;
- (id)searchCustomVocabulary:(id)a0 appIds:(id)a1 vocabularyTypes:(id)a2;
- (id)searchCustomVocabularyWithWildcardPatterns:(id)a0 appIds:(id)a1 vocabularyTypes:(id)a2;

@end
