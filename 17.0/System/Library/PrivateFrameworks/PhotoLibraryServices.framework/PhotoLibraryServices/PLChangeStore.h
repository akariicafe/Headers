@class NSURL, PLPhotoLibraryPathManager, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PLChangeStore : NSObject {
    NSObject<OS_dispatch_queue> *_eventsIsolation;
    NSMutableArray *_events;
    struct sqlite3 { } *_database;
    NSObject<OS_dispatch_queue> *_databaseIsolation;
    unsigned long long _firstOnDiskEventIndex;
    int _sqliteOpenFlags;
}

@property (readonly, nonatomic) unsigned long long firstOnDiskEventIndex;
@property (readonly, nonatomic) NSURL *databaseFileURL;
@property (readonly, nonatomic) PLPhotoLibraryPathManager *photoLibraryPathManager;

- (void)dealloc;
- (void)openDatabase;
- (void)_clearStore;
- (struct sqlite3_stmt { } *)prepareStatement:(const char *)a0;
- (void).cxx_destruct;
- (void)setupDatabase;
- (unsigned long long)lastIndex;
- (void)bindXPCData:(id)a0 toStatement:(struct sqlite3_stmt { } *)a1 column:(int)a2;
- (void)_backupStore;
- (void)bindInt64:(long long)a0 toStatement:(struct sqlite3_stmt { } *)a1 column:(int)a2;
- (void)bindInt:(int)a0 toStatement:(struct sqlite3_stmt { } *)a1 column:(int)a2;
- (void)bindString:(id)a0 toStatement:(struct sqlite3_stmt { } *)a1 column:(int)a2;
- (void)bindUUID:(unsigned char[16])a0 toStatement:(struct sqlite3_stmt { } *)a1 column:(int)a2;
- (void)clearStore:(id /* block */)a0;
- (void)enumeratePersistedDidSaveEventsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withBlock:(id /* block */)a1;
- (void)getEventsSinceIndex:(unsigned long long)a0 filteredBy:(id /* block */)a1 onQueue:(id)a2 withBlock:(id /* block */)a3;
- (BOOL)getInMemoryEventsSinceIndex:(unsigned long long)a0 filteredBy:(id /* block */)a1 onQueue:(id)a2 withBlock:(id /* block */)a3;
- (void)getOnDiskEventsSinceIndex:(unsigned long long)a0 filteredBy:(id /* block */)a1 onQueue:(id)a2 withBlock:(id /* block */)a3;
- (id)initWithPhotoLibraryPathManager:(id)a0;
- (id)newArrayWithEventsSince:(unsigned long long)a0 filteredBy:(id /* block */)a1 lastEventIndex:(unsigned long long *)a2;
- (void)performBlockAsTransaction:(id /* block */)a0;
- (void)prepareAndEvaluateStatement:(const char *)a0;

@end
