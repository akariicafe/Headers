@class NSXPCListener, NSArray, NSString, NSMutableSet, NSObject, NSLock;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CADServer : NSObject <NSXPCListenerDelegate, ClientConnectionDelegate, DatabaseChangeHandling, CalActivatable> {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _backgroundTaskCount;
    NSXPCListener *_NSXPCListener;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSObject<OS_dispatch_queue> *_tccQueue;
    NSMutableSet *_clientConnections;
    NSLock *_connectionLock;
    NSArray *_signalSensors;
    NSObject<OS_dispatch_queue> *_initDataFirstUnlockQueue;
    BOOL _initializationFinished;
}

@property (retain, nonatomic) NSArray *modules;
@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *alarmQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_exit;
- (void)_dumpState;
- (void)_registerForNotifications;
- (void)_protectedDataDidBecomeAvailable;
- (void)_handleXPCConnection:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_registerForAnalyticsCollection;
- (void)_registerMaintenanceActivities;
- (void)_registerForAlarmEvents;
- (void)_handleDatabaseChanged;
- (id)initWithModules:(id)a0;
- (void)_cleanupChangeTablesInDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; } *)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_finishInitializationWithDataAvailable;
- (void)_migrateIfNeeded;
- (void)_startBirthdayListener;
- (void)activate;
- (void)_tearDownSignalHandlers;
- (unsigned long long)_lastKnownContactsAuthorization;
- (void)_registerForAttachmentCleanup;
- (id)_storeTypeStringFromType:(int)a0;
- (void)_registerForOccurrenceCacheUpdate;
- (void)registerForStateCapture;
- (void)_setupBirthdayListener;
- (void)_registerActivityWithIdentifier:(const char *)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_deactivateAndExit;
- (void)_registerForDatabaseCleanup;
- (void)_registerForConferenceURLRenewal;
- (void)clientConnectionDied:(id)a0;
- (void)_setUpSignalHandlers;
- (void)_trimExtendAndUpdateOccurrenceCache:(BOOL)a0;
- (unsigned long long)_contactsAuthorization;
- (void)_registerForChangeTableCleanup;
- (void)cleanupDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; } *)a0;
- (void)deactivate;
- (void)_registerContactsAccess;

@end
