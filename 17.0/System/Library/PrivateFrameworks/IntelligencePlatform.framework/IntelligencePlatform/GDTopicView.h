@class NSString, _PASSqliteDatabase;
@protocol GDViewAccessAssertion;

@interface GDTopicView : NSObject <GDTopicViewProtocol> {
    id<GDViewAccessAssertion> _accessAssertion;
    _PASSqliteDatabase *_db;
}

@property (readonly, nonatomic) NSString *databaseFilePath;

- (void).cxx_destruct;
- (void)enumerateTopicsWithBlock:(id /* block */)a0;
- (id)initWithAccessAssertion:(id)a0 database:(id)a1;

@end
