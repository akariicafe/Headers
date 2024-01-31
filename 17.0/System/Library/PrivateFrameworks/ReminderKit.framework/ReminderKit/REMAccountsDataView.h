@class REMStore;

@interface REMAccountsDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

- (id)fetchAllAccountsForDumpingWithError:(id *)a0;
- (id)fetchActiveCloudKitAccountObjectIDsWithFetchOption:(long long)a0 error:(id *)a1;
- (id)initWithStore:(id)a0;
- (id)fetchAccountWithExternalIdentifier:(id)a0 error:(id *)a1;
- (id)fetchAllAccountsWithError:(id *)a0;
- (void).cxx_destruct;
- (id)accountsFromStorages:(id)a0;
- (id)fetchAllAccountsForAccountManagementWithError:(id *)a0;
- (id)fetchPrimaryActiveCloudKitAccountREMObjectIDWithError:(id *)a0;
- (id)fetchPrimaryActiveCloudKitAccountWithError:(id *)a0;
- (id)fetchAccountsWithExternalIdentifiers:(id)a0 error:(id *)a1;
- (id)fetchAccountWithObjectID:(id)a0 error:(id *)a1;
- (id)fetchAccountsWithObjectIDs:(id)a0 error:(id *)a1;

@end
