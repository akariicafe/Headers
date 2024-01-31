@class CNContactStore, ESCalDBHelper, NSString, NoteContext, NSMutableArray, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface ESLocalDBHelper : NSObject {
    NSObject<OS_dispatch_queue> *_abDBQueue;
    NSObject<OS_dispatch_queue> *_calDBQueue;
    NSObject<OS_dispatch_queue> *_noteDBQueue;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *os_log;

@property (nonatomic) void *abDB;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSMutableArray *saveRequests;
@property (nonatomic) int abConnectionCount;
@property (nonatomic) struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; } *calDB;
@property (nonatomic) int calConnectionCount;
@property (retain, nonatomic) ESCalDBHelper *calDBHelper;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NoteContext *noteDB;
@property (nonatomic) int noteConnectionCount;
@property (copy, nonatomic) id /* block */ calUnitTestCallbackBlock;

+ (id)abTestABDBDir;
+ (id)sharedInstanceForAccountType:(id)a0 creatingClass:(Class)a1;
+ (void)abSetTestABDBDir:(id)a0;
+ (id)calTestCalDBDir;
+ (void)calSetTestCalDBDir:(id)a0;

- (id)abConstraintPlistPath;
- (BOOL)useContacts;
- (void)calOpenDatabaseAsGenericClientForAccountID:(id)a0;
- (void)abOpenDBAsGenericClient;
- (BOOL)noteSaveDB;
- (void)executeAllSaveRequests;
- (void)calOpenDatabaseForAccountID:(id)a0 clientID:(id)a1;
- (BOOL)calSaveDatabaseAndFlushCachesForAccountID:(id)a0;
- (void)noteOpenDB;
- (id)init;
- (void)abOpenDBWithClientIdentifier:(id)a0;
- (void)dealloc;
- (BOOL)calSaveDatabaseForAuxDatabaseRef:(void *)a0;
- (BOOL)_abOpenDBWithClientIdentifier:(id)a0;
- (void)_registerForAddressBookYieldNotifications;
- (BOOL)calCloseDatabaseForAuxDatabaseRef:(void *)a0 save:(BOOL)a1;
- (void)calOpenDatabaseForAuxDatabaseRef:(void *)a0 clientID:(id)a1;
- (void)addSaveRequest:(id)a0;
- (id)changeTrackingID;
- (void *)abDBThrowOnNil:(BOOL)a0;
- (struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; } *)calDatabaseForAuxDatabaseRef:(void *)a0;
- (BOOL)calSaveDatabaseForAccountID:(id)a0;
- (void).cxx_destruct;
- (BOOL)abSaveDB;
- (void)abProcessAddedRecords;
- (struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; } *)calDatabaseForAccountID:(id)a0;
- (BOOL)calCloseDatabaseForAccountID:(id)a0 save:(BOOL)a1;
- (void)abProcessAddedImages;
- (BOOL)noteCloseDBAndSave:(BOOL)a0;
- (void)calOpenDatabaseAsGenericClientForAuxDatabaseRef:(void *)a0;
- (BOOL)abCloseDBAndSave:(BOOL)a0;
- (void)calUnitTestsSetCallbackBlockForSave:(id /* block */)a0;

@end
