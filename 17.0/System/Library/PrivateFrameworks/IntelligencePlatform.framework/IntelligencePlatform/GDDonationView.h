@class _PASSqliteDatabase;
@protocol GDViewAccessAssertion;

@interface GDDonationView : NSObject <GDDonationView> {
    id<GDViewAccessAssertion> _accessAssertion;
    _PASSqliteDatabase *_db;
}

- (void).cxx_destruct;
- (void)enumerateTriples:(id /* block */)a0;
- (id)initWithAccessAssertion:(id)a0 database:(id)a1;

@end
