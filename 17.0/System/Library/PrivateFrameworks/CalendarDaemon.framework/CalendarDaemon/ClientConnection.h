@class NSXPCConnection, CADAccountAccessHandler, NSString, CADDatabaseInitializationOptions, NSMutableDictionary, NSObject, NSMutableArray, PAApplication, CADOperationProxy, ClientIdentity;
@protocol CDBAccountInfo, CADACAccountsProvider, CADPermissionValidator, ClientConnectionDelegate, OS_dispatch_queue;

@interface ClientConnection : NSObject <CalCalendarDatabaseRestoreGenerationChangedDelegate, CalCalendarDatabaseIntegrityErrorReportingDelegate, CDBAccountInfo> {
    id<CADPermissionValidator> _permissionValidator;
    NSMutableDictionary *_databases;
    CADAccountAccessHandler *_accountAccessHandler;
    CADAccountAccessHandler *_strictAccountAccessHandler;
    id<CADACAccountsProvider> _accountsProvider;
    NSObject<OS_dispatch_queue> *_dbQueue;
    NSMutableArray *_operations;
    NSObject<OS_dispatch_queue> *_asynchronousOperationQueue;
    BOOL _initializationOptionsSet;
    int _databaseRestoreGeneration;
    int _auxDatabaseSequence;
    PAApplication *_privacyApplication;
}

@property (readonly, nonatomic) CADAccountAccessHandler *accountAccessHandler;
@property (weak, nonatomic) id<ClientConnectionDelegate> delegate;
@property (retain, nonatomic) id<CDBAccountInfo> localAccountInfo;
@property (readonly, nonatomic) ClientIdentity *identity;
@property (readonly, nonatomic) CADOperationProxy *cadOperationProxy;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) id<CADPermissionValidator> permissionValidator;
@property (readonly, nonatomic) NSString *changeTrackingID;
@property (readonly, nonatomic) CADDatabaseInitializationOptions *databaseInitializationOptions;
@property (readonly) BOOL initializationOptionsSet;
@property (readonly) int databaseRestoreGeneration;
@property (readonly, nonatomic) NSString *effectiveApplicationIdentifier;
@property (readonly, nonatomic) NSString *effectiveTeamIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCConnection:(id)a0;
- (id)operations;
- (void)addOperation:(id)a0;
- (BOOL)_isPrimaryObjectTypeForAccessLogging:(id)a0;
- (BOOL)withDatabaseForObject:(id)a0 perform:(id /* block */)a1;
- (void)clearCachedAuthorizationStatus;
- (id)_permissionValidator;
- (void)closeDatabases;
- (void)handleDatabaseChangedExternally;
- (void)_databaseRestoreGenerationChanged:(int)a0;
- (void)dealloc;
- (int)eventAccessLevel;
- (BOOL)isCalendarRestricted:(void *)a0 forAction:(unsigned long long)a1;
- (BOOL)isStoreRestricted:(void *)a0 forAction:(unsigned long long)a1;
- (BOOL)withDatabaseID:(int)a0 perform:(id /* block */)a1;
- (int)managedConfigurationAccountAccessForStore:(void *)a0;
- (void)handleDatabaseChanged;
- (id)strictAccountAccessHandler;
- (BOOL)addressIsAccountOwner:(id)a0;
- (id)_objectIDsToBeResolved:(id)a0;
- (id)accountsProvider;
- (void)dumpState;
- (BOOL)isCalendarItemRestricted:(void *)a0 forAction:(unsigned long long)a1;
- (id)_databases;
- (void)logAccessToObjects:(id)a0;
- (void)_closeDatabases;
- (void)performWithAllDatabases:(id /* block */)a0;
- (BOOL)withDatabaseForObjects:(id)a0 options:(unsigned long long)a1 perform:(id /* block */)a2;
- (void)databaseRestoreGenerationChanged:(int)a0;
- (id)_resolveObjectIDsForLogging:(id)a0;
- (id)_resolveObjectIDForLoggingAccessToEntity:(void *)a0;
- (void).cxx_destruct;
- (BOOL)reminderAccessGranted;
- (BOOL)isNotificationRestricted:(void *)a0 forAction:(unsigned long long)a1;
- (void)logAccessToEntities:(id)a0;
- (BOOL)isCalendarItemManaged:(void *)a0;
- (BOOL)withDatabaseForObjects:(id)a0 perform:(id /* block */)a1;
- (BOOL)trySetDatabaseInitializationOptions:(id)a0;
- (void)logAccessToObject:(id)a0;
- (void)validateAuxDatabases;
- (id)_createManagedConfigAccountAccessHandlerWithValidator:(id)a0;
- (BOOL)isAlarmRestricted:(void *)a0 forAction:(unsigned long long)a1;
- (void)addCreatedAuxDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; } *)a0;
- (id)restrictedCalendarRowIDsForAction:(unsigned long long)a0 inDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; } *)a1;
- (void)_initAccountAccessHandler;
- (BOOL)isStoreRestricted:(void *)a0 forAction:(unsigned long long)a1 strict:(BOOL)a2;
- (void)reportIntegrityErrors:(id)a0;
- (BOOL)isCalendarManaged:(void *)a0;
- (void)_logAccessToResolvedObjectIDs:(id)a0;
- (void)database:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; } *)a0 restoreGenerationChangedExternally:(int)a1;
- (id)_objectIDsResolvedAndLoggable:(id)a0;
- (BOOL)isStoreManaged:(void *)a0;
- (id)_accountsProvider;

@end
