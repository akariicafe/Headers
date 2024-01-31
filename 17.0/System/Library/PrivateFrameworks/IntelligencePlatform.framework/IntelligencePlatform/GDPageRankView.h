@class _PASSqliteDatabase;
@protocol GDViewAccessAssertion;

@interface GDPageRankView : NSObject <GDPageRankView> {
    id<GDViewAccessAssertion> _accessAssertion;
    _PASSqliteDatabase *_db;
}

- (void).cxx_destruct;
- (id)initWithAccessAssertion:(id)a0 database:(id)a1;
- (id)pageRanksWithError:(id *)a0;

@end
