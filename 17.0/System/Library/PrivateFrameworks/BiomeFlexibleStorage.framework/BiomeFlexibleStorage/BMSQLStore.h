@class NSArray, _bmFMDatabase, NSURL;

@interface BMSQLStore : NSObject {
    _bmFMDatabase *_db;
}

@property (class, readonly, nonatomic) NSArray *migrations;

@property (readonly, nonatomic) BOOL dbIsReady;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } dbLock;
@property (readonly, nonatomic) _bmFMDatabase *db;
@property (readonly, nonatomic) NSURL *dbURL;
@property (readonly, nonatomic) void *sqliteHandle;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithFMDBHandle:(id)a0;

@end
