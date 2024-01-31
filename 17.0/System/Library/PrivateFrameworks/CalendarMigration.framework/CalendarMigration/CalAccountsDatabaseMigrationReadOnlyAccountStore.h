@class NSString;

@interface CalAccountsDatabaseMigrationReadOnlyAccountStore : NSObject <CalMigrationReadOnlyAccountStore> {
    struct sqlite3 { } *_database;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_unarchiveData:(id)a0;
+ (int)_calendarDataClassIdentifier:(struct sqlite3 { } *)a0;

- (id)initWithDatabaseURL:(id)a0;
- (void)dealloc;
- (id)accountWithIdentifier:(id)a0;
- (id)childAccountsForAccount:(id)a0 withTypeIdentifier:(id)a1;
- (id)topLevelAccountsWithAccountTypeIdentifier:(id)a0 error:(id *)a1;

@end
