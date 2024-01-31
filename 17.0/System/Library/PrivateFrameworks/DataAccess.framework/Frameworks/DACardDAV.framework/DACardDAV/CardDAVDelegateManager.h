@class CardDAVLocalDBHelper, ACAccountStore, NSString;
@protocol CardDAVDelegateInfoProvider;

@interface CardDAVDelegateManager : NSObject

@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (readonly, nonatomic) CardDAVLocalDBHelper *databaseHelper;
@property (readonly, nonatomic) id<CardDAVDelegateInfoProvider> delegateProvider;
@property (readonly, nonatomic) NSString *accountID;

+ (void)finishFutures:(id)a0;

- (id)removeAccount:(id)a0;
- (id)account;
- (id)saveAccount:(id)a0;
- (id)existingChildAccountsWithProperty:(id)a0;
- (void)deleteOrphanDatabasesLackingRepresentationInDelegateInfos:(id)a0;
- (void)updateDelegates;
- (id)addChildWithDelegateInfo:(id)a0;
- (id)collectDelegateInfoReturningError:(id *)a0;
- (void).cxx_destruct;
- (id)initWithDelegateInfoProvider:(id)a0 accountID:(id)a1 databaseHelper:(id)a2;

@end
