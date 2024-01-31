@interface CalDatabaseInMemoryChangeTracking : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _nextIndex;
    int _changeCount;
    unsigned long long _lastPrunedTimestamp;
    struct { unsigned long long timestamp; unsigned int rowID; unsigned char entityType : 8; unsigned int clientID : 22; unsigned char flags : 2; } _changes[512];
}

+ (void)setInterestedDatabases:(id)a0 forContext:(id)a1;
+ (id)canonicalizePath:(id)a0;
+ (id)pathForDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; } *)a0;
+ (id)changeTrackingForDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; } *)a0;
+ (id)changeTrackingForDatabaseWithPath:(id)a0;
+ (void)_setInterestedDatabasePaths:(id)a0 forContext:(id)a1;
+ (void)setInterestedDatabasePaths:(id)a0 forContext:(id)a1;

- (id)init;
- (id)changedEntityIDsBetweenMinExternalTimestamp:(unsigned long long)a0 minSelfTimestamp:(unsigned long long)a1 maxExternalTimestamp:(unsigned long long)a2 latestSelfTimestamp:(unsigned long long *)a3 client:(int)a4 changesAreSyncStatusOnly:(BOOL *)a5 deleteOffset:(unsigned long long *)a6;
- (int)_writeChanges:(id)a0 withTimestamp:(unsigned long long)a1 flags:(int)a2 clientID:(unsigned int)a3 atIndex:(int)a4;
- (void)clearAllChangesets;
- (void)addChangeset:(struct __CFArray { } *)a0 deletes:(struct __CFArray { } *)a1 clientID:(unsigned int)a2 onlySyncStatusChanged:(BOOL)a3;
- (id)changedEntityIDsBetweenTimestamp:(id)a0 andTimestamp:(unsigned long long)a1 latestTimestamp:(id *)a2 client:(unsigned int)a3 changesAreSyncStatusOnly:(BOOL *)a4 deleteOffset:(unsigned long long *)a5;
- (id)changedEntityIDsForDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; } *)a0 sinceTimestamp:(id)a1 latestTimestamp:(id *)a2 changesAreSyncStatusOnly:(BOOL *)a3 deleteOffset:(unsigned long long *)a4;

@end
