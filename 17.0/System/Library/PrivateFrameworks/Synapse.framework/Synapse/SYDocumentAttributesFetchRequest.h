@interface SYDocumentAttributesFetchRequest : NSObject

+ (id)_buildQueryStringWithIndexKeys:(id)a0;
+ (id)_buildResultWithMatches:(id)a0;
+ (BOOL)_isValidSearchableItem:(id)a0 loggableErrorDescription:(id *)a1;
+ (void)fetchAttributesForDocumentsWithIndexKeys:(id)a0 completion:(id /* block */)a1;

@end
