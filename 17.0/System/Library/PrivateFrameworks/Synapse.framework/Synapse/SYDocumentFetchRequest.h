@interface SYDocumentFetchRequest : NSObject

+ (id)_buildResultWithMatches:(id)a0;
+ (id)_contentURLForItem:(id)a0;
+ (void)_fetchDocumentsWithReason:(id)a0 queryString:(id)a1 completion:(id /* block */)a2;
+ (BOOL)_isSearchableItemValid:(id)a0 loggableErrorDescription:(id *)a1;
+ (id)_itemIdFromSearchableItem:(id)a0;
+ (void)fetchAllDocumentsMatchingAnyIndexIdWithCompletion:(id /* block */)a0;
+ (void)fetchDocumentsWithIndexIds:(id)a0 completion:(id /* block */)a1;

@end
