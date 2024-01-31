@interface SYLastModifiedDocumentFetchRequest : NSObject

+ (id)_buildQueryStringWithDocumentRelatedUniqueIdentifier:(id)a0;
+ (id)_buildResultWithMatches:(id)a0;
+ (id)_createSearchQueryWithString:(id)a0;
+ (void)fetchLastModifiedDocument:(id)a0 completion:(id /* block */)a1;

@end
