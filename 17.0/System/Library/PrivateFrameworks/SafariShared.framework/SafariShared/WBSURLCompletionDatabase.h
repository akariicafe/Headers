@class m_capacity, NSString;
@protocol WBSURLCompletionDataSource;

@interface WBSURLCompletionDatabase : NSObject {
    struct Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { m_capacity **m_buffer; unsigned int x0; unsigned int m_size; } _fullTextBookmarkMatchesCache;
    struct Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { m_capacity **m_buffer; unsigned int x0; unsigned int m_size; } _fullTextHistoryMatchesCache;
    struct Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { m_capacity **m_buffer; unsigned int x0; unsigned int m_size; } _prefixBookmarkMatchesCache;
    struct Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { m_capacity **m_buffer; unsigned int x0; unsigned int m_size; } _prefixHistoryMatchesCache;
    NSString *_fullTextBookmarkMatchesCacheString;
    NSString *_fullTextHistoryMatchesCacheString;
    NSString *_prefixBookmarkMatchesCacheString;
    NSString *_prefixHistoryMatchesCacheString;
    NSString *_prefixHistoryMatchesCacheProfileIdentifier;
    NSString *_fullTextHistoryMatchesCacheStringProfileIdentifier;
}

@property (weak, nonatomic) id<WBSURLCompletionDataSource> dataSource;

+ (BOOL)_isMatchURLString:(id)a0 equivalentToBaseURLString:(id)a1;
+ (BOOL)_matchIsNotURLMatchAndTitleLooksLikeURLForBookmarkAndHistoryCompletionMatch:(const void *)a0;
+ (BOOL)_matchMistookErrorTitleForPageTitleForBookmarkAndHistoryCompletionMatch:(const void *)a0;
+ (BOOL)_redirectionChainsOfCompletionMatchData:(id)a0 containURLString:(id)a1;
+ (struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::RawPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>, WTF::DefaultRefDerefTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> { struct BookmarkAndHistoryCompletionMatch *x0; })_synthesizeURLMatchWithURLString:(id)a0 title:(id)a1 topHitFromMatches:(struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::RawPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>, WTF::DefaultRefDerefTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> { struct BookmarkAndHistoryCompletionMatch *x0; })a2 historyMatches:(void *)a3 bookmarkMatches:(void *)a4 typedString:(id)a5 timeNow:(double)a6 completionDataSource:(id)a7;
+ (struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::RawPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>, WTF::DefaultRefDerefTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> { struct BookmarkAndHistoryCompletionMatch *x0; })_topHitFromBaseURLMatchForTopHitFromMatches:(struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::RawPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>, WTF::DefaultRefDerefTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> { struct BookmarkAndHistoryCompletionMatch *x0; })a0 shouldReplaceTopHitFromMatches:(BOOL *)a1 historyMatches:(void *)a2 bookmarkMatches:(void *)a3 typedString:(id)a4 searchParameters:(id)a5 timeNow:(double)a6 completionDataSource:(id)a7;
+ (BOOL)_topHitFromMatches:(struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::RawPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>, WTF::DefaultRefDerefTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> { struct BookmarkAndHistoryCompletionMatch *x0; })a0 isOneOfManyUnremarkableMatchesInLocalHistoryMatches:(void *)a1 inDomain:(id)a2;
+ (void)initializeURLCompletionOnMainThread;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_getSortedFullTextMatchesForTypedString:(id)a0 filterResultsUsingProfileIdentifier:(id)a1 topHits:(void *)a2 historyMatches:(void *)a3 historyLimit:(unsigned long long)a4 bookmarkMatches:(void *)a5 bookmarkLimit:(unsigned long long)a6 searchParameters:(id)a7;
- (void)_getSortedMatchesForTypedString:(id)a0 filterResultsUsingProfileIdentifier:(id)a1 topHits:(void *)a2 historyMatches:(void *)a3 historyLimit:(unsigned long long)a4 bookmarkMatches:(void *)a5 bookmarkLimit:(unsigned long long)a6 searchParameters:(id)a7 prefixMatchesOnly:(BOOL)a8;
- (void)_getSortedPrefixMatchesForTypedString:(id)a0 filterResultsUsingProfileIdentifier:(id)a1 topHits:(void *)a2 historyMatches:(void *)a3 historyLimit:(unsigned long long)a4 bookmarkMatches:(void *)a5 bookmarkLimit:(unsigned long long)a6 searchParameters:(id)a7;
- (void)_getUnsortedFullTextMatchesForTypedString:(id)a0 filterResultsUsingProfileIdentifier:(id)a1 historyMatches:(void *)a2 bookmarkMatches:(void *)a3 dataTypes:(unsigned int)a4;
- (void)_getUnsortedPrefixMatchesForTypedString:(id)a0 filterResultsUsingProfileIdentifier:(id)a1 historyMatches:(void *)a2 bookmarkMatches:(void *)a3;
- (void)_removeMatchesThatMistookErrorTitleForPageTitleFromMatches:(void *)a0;
- (void)_removeMatchesWithTitlesThatLookLikeURLsRemovedFromMatches:(void *)a0;
- (void)clearBookmarkMatchesCaches;
- (void)clearBookmarkMatchesCachesKeepingEmptyValues:(BOOL)a0;
- (void)clearHistoryMatchesCache;
- (void)clearMatchesCaches;
- (void)getBestMatchesForTypedString:(id)a0 filterResultsUsingProfileIdentifier:(id)a1 topHits:(id *)a2 matches:(id *)a3 limit:(unsigned long long)a4 forQueryID:(long long)a5 withSearchParameters:(id)a6;

@end
