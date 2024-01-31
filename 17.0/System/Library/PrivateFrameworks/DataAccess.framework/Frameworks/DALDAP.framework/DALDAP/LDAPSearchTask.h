@class DAContactsSearchQuery, NSMutableArray, NSObject;
@protocol OS_ldap_operation;

@interface LDAPSearchTask : LDAPTask

@property (retain, nonatomic) NSMutableArray *foundContacts;
@property (retain, nonatomic) NSObject<OS_ldap_operation> *operation;
@property (readonly, nonatomic) DAContactsSearchQuery *query;

- (id)initWithQuery:(id)a0;
- (void)disable;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)performTask;
- (void)_performQuery;
- (int)numDownloadedElements;
- (void)_failImmediately;
- (id)_copySearchStringForQueryInput:(id)a0;
- (void)_appendKey:(id)a0 value:(id)a1 toSearchResultElement:(id)a2;
- (void)_promptForPasswordDueToError:(id)a0;
- (id)_searchStringForWord:(id)a0;
- (id)daLevelErrorForLDAPError:(int)a0;

@end
