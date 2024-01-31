@class NSString;
@protocol CalReminderKitProvider, CalReminderMigrationDefaultsProvider;

@interface CalCalendarDatabaseReminderMigrator : NSObject <CalMigrator>

@property (readonly, nonatomic) id<CalReminderKitProvider> reminderKitProvider;
@property (readonly, nonatomic) id<CalReminderMigrationDefaultsProvider> defaultsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_accountTypeForStore:(void *)a0;
+ (id)_attemptAccountMigrationForStore:(void *)a0 withContext:(id)a1 accountType:(long long *)a2;
+ (BOOL)_attemptMigrationForStore:(void *)a0 withContext:(id)a1;
+ (id)_colorStringForCalendar:(void *)a0;
+ (id)_identifierForCalendar:(void *)a0;
+ (id)_identifierForReminder:(void *)a0;
+ (id)_identifierForStore:(void *)a0;
+ (void)_migrateCalendarAsReminderList:(void *)a0 withContext:(id)a1 accountChangeItem:(id)a2 accountType:(long long)a3;
+ (void)_migrateReminder:(void *)a0 withContext:(id)a1 listChangeItem:(id)a2;
+ (void)_migrateReminderListsInStore:(void *)a0 withContext:(id)a1 accountChangeItem:(id)a2 accountType:(long long)a3;
+ (void)_migrateRemindersInCalendar:(void *)a0 withContext:(id)a1 listChangeItem:(id)a2;
+ (BOOL)_preCheckStoreForPossibleMigrationDisablingRemindersIfNeeded:(void *)a0 withContext:(id)a1 accountType:(long long *)a2 identifier:(id *)a3;
+ (void)_removeRemindersDataAfterSuccessfulMigrationFromDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; } *)a0 withContext:(id)a1;
+ (void)_setWasMigratedAndClearSyncTokenInAllCalendarsForStore:(void *)a0 withContext:(id)a1;
+ (BOOL)_shouldMigrateCalendarAsReminderList:(void *)a0;
+ (void)_visitCalendarForMigrationAsReminderList:(void *)a0 withContext:(id)a1 accountChangeItem:(id)a2 accountType:(long long)a3;

- (void).cxx_destruct;
- (BOOL)attemptMigrationWithCalendarDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; } *)a0;
- (id)initWithReminderKitProvider:(id)a0 defaultsProvider:(id)a1;
- (BOOL)_attemptMigrationForDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; } *)a0 inCalendarDirectory:(id)a1 withContext:(id)a2;
- (BOOL)_attemptMigrationWithCalendarDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; } *)a0;
- (BOOL)_attemptMigrationWithHomeDirectory:(id)a0;
- (BOOL)_performMigrationForCalendarDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; } *)a0 inCalendarDirectory:(id)a1 withContext:(id)a2;
- (void)_performPreMigrationTasksInCalendarDirectory:(id)a0 withContext:(id)a1;
- (BOOL)attemptMigrationWithHomeDirectory:(id)a0;

@end
