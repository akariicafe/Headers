@class NSString, ACAccountStore, NSObject;
@protocol OS_dispatch_queue;

@interface PCSAccountsModel : NSObject

@property (retain) ACAccountStore *store;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property BOOL accountsChanged;
@property (readonly) NSString *username;
@property (readonly) NSString *dsid;
@property (readonly) NSString *identifier;
@property (readonly) NSString *lastError;

+ (id)defaultAccountsModel;
+ (BOOL)currentPersonaSupportsPrimaryAccount:(id *)a0;
+ (id)altDSIDForDSID:(id)a0;
+ (id)settingsKeyForKey:(id)a0 error:(id *)a1;
+ (id)accountForCurrentPersona;

- (id)init;
- (void)_accountStoreDidChange:(id)a0;
- (void)update;
- (void).cxx_destruct;
- (void)faultIfCurrentPersonaIsDataSeparated;

@end
