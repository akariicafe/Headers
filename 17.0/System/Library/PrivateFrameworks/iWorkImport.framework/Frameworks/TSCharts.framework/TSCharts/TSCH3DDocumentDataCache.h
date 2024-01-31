@class TSKDocumentRoot;

@interface TSCH3DDocumentDataCache : NSObject {
    TSKDocumentRoot *_documentRoot;
}

+ (id)dataCacheWithDocumentRoot:(id)a0;
+ (id)dataFromCache:(id)a0 forFile:(id)a1 group:(id)a2 generateBlock:(id /* block */)a3;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDocumentRoot:(id)a0;
- (id)dataForFile:(id)a0 group:(id)a1 generateBlock:(id /* block */)a2;
- (BOOL)debug_nukeDocumentCachePathForGroup:(id)a0;

@end
