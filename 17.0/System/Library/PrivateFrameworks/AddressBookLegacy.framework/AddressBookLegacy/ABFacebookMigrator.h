@class NSString, ACAccountStore;

@interface ABFacebookMigrator : NSObject

@property (nonatomic) void *addressBook;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) void *facebookSource;
@property (nonatomic) int mergeDestinationSourceID;
@property (nonatomic) BOOL mayHaveFacebookSource;
@property (nonatomic, getter=isCheckDone) BOOL checkDone;
@property (nonatomic) unsigned long long facebookContactsCount;
@property (retain, nonatomic) NSString *destinationDescription;

+ (int)_findFacebookStoreID:(struct CPSqliteConnection { struct CPSqliteDatabase *x0; struct sqlite3 *x1; struct __CFDictionary *x2; struct __CFDictionary *x3; void *x4; void /* function */ *x5; void /* function */ *x6; void *x7; unsigned int x8; BOOL x9; } *)a0;
+ (BOOL)_performQuery:(id)a0 withStoreID:(int)a1 connection:(struct CPSqliteConnection { struct CPSqliteDatabase *x0; struct sqlite3 *x1; struct __CFDictionary *x2; struct __CFDictionary *x3; void *x4; void /* function */ *x5; void /* function */ *x6; void *x7; unsigned int x8; BOOL x9; } *)a2;
+ (BOOL)isAccountTypeFacebook:(id)a0;
+ (BOOL)isSourceFacebook:(void *)a0;
+ (BOOL)mayHaveFacebookContacts:(void *)a0;
+ (BOOL)removeFacebookSensitiveInformation:(struct CPSqliteConnection { struct CPSqliteDatabase *x0; struct sqlite3 *x1; struct __CFDictionary *x2; struct __CFDictionary *x3; void *x4; void /* function */ *x5; void /* function */ *x6; void *x7; unsigned int x8; BOOL x9; } *)a0;

- (BOOL)_removeContactsAccount:(void *)a0;
- (id)initWithAddressBook:(void *)a0 accountStore:(id)a1;
- (void)dealloc;
- (id)initWithAddressBook:(void *)a0;
- (void)mergeFacebookContacts;
- (void)_detectFacebookSource;
- (void).cxx_destruct;
- (void)deleteFacebookContacts;
- (void)performPendingMergeOrDeleteAction;
- (BOOL)_mergeContactsFromAccount:(void *)a0 toDestinationSourceID:(int)a1;
- (int)findBestMergeDestinationSourceID;
- (void)_startDatabaseDoctorToPerformAction:(id)a0;
- (BOOL)canMergeFacebookContacts;

@end
