@class NSObject, GEOSQLiteDB, geo_isolater, NSMutableArray;
@protocol OS_dispatch_source;

@interface _GEOConfigDBOperationQueue : NSObject {
    GEOSQLiteDB *_db;
    geo_isolater *_isolator;
    NSMutableArray *_operations;
    NSObject<OS_dispatch_source> *_timer;
}

- (id)init:(id)a0;
- (void)cancelTimer;
- (void)dealloc;
- (void)flush;
- (void)scheduleTimer;
- (void).cxx_destruct;
- (void)enqueueOperation:(id)a0;
- (void)flushOnDBQueue;

@end
