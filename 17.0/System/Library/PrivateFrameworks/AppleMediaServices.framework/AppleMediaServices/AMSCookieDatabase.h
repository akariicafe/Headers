@class NSString, AMSSQLiteConnection;

@interface AMSCookieDatabase : NSObject <AMSSQLiteConnectionDelegate>

@property (readonly, nonatomic) AMSSQLiteConnection *connection;
@property (readonly, copy, nonatomic) NSString *dbPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_databasePathForIdentifier:(id)a0 error:(id *)a1;
+ (id)cookieDatabaseForIdentifier:(id)a0 error:(id *)a1;
+ (id)databasePathForIdentifiers:(id)a0 error:(id *)a1;
+ (id)cookieDatabaseForIdentifiers:(id)a0 error:(id *)a1;
+ (id)_databasePathForIdentifiers:(id)a0 fileManager:(id)a1 error:(id *)a2;
+ (void)_cleanUpProtectionClassAtPath:(id)a0 fileManager:(id)a1;
+ (id)_dataVaultPathForIdentifier:(id)a0 error:(id *)a1;
+ (id)cookieDatabaseForIdentifiers:(id)a0 error:(id *)a1 fileManager:(id)a2;

- (void)close;
- (id)initWithConnection:(id)a0 path:(id)a1;
- (void)dealloc;
- (BOOL)connectionNeedsResetForCorruption:(id)a0;
- (BOOL)_removeCookieProperties:(id)a0 error:(id *)a1;
- (void)_bindCookieProperties:(id)a0 column:(unsigned long long)a1 position:(int)a2 using:(id)a3;
- (id)cookiePropertiesWithError:(id *)a0;
- (void).cxx_destruct;
- (id)_cookieDictionaryForCursor:(id)a0;
- (BOOL)updateCookiesWithCookiePropertiesToAdd:(id)a0 cookiePropertiesToRemove:(id)a1 error:(id *)a2;
- (BOOL)_addCookieProperties:(id)a0 error:(id *)a1;
- (BOOL)_executeStatement:(id)a0 columns:(id)a1 forCookieProperties:(id)a2 error:(id *)a3;

@end
