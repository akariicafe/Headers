@class CKVIndexManager, CKVSettings;

@interface CKVSpanMatcherFactory : NSObject {
    CKVIndexManager *_indexManager;
    CKVSettings *_settings;
}

- (id)init;
- (void).cxx_destruct;
- (id)makeSpanMatcher;
- (id)initWithIndexManager:(id)a0 settings:(id)a1;

@end
