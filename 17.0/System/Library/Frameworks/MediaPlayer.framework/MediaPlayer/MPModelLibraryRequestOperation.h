@class MPModelLibraryRequest;

@interface MPModelLibraryRequestOperation : MPAsyncOperation

@property (copy, nonatomic) MPModelLibraryRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)_executeLegacyRequest;
- (id)_itemProperties;
- (void)_executeNewRequest;
- (void)execute;
- (id)_sectionProperties;
- (void)_insertPropertyCacheForEntityPID:(long long)a0 entityClass:(void *)a1 entityTranslator:(id)a2 translationContext:(id)a3 propertyCachesVector:(const void *)a4;
- (void).cxx_destruct;
- (void)_sanityCheckRequest;
- (id)_libraryView;

@end
