@class _PASSqliteDatabase;

@interface GDSQLFeatureRetriever : NSObject {
    _PASSqliteDatabase *_db;
}

- (id)initWithDatabase:(id)a0;
- (void).cxx_destruct;
- (id)featureForKey:(id)a0 error:(id *)a1;
- (id)featureKeysWithError:(id *)a0;

@end
