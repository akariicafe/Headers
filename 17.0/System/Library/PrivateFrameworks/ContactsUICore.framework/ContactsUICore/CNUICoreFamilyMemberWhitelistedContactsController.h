@class NSArray, NSString, CNFuture;
@protocol CNCancelable, CNUICoreFamilyMemberContactsUpdating, CNUICoreFamilyMemberContactsObserver, CNUICoreContactStoreFacade, CNSchedulerProvider, CNUICoreFamilyMemberContactsModelFetching;

@interface CNUICoreFamilyMemberWhitelistedContactsController : NSObject <CNUICoreFamilyMemberWhitelistedContactsDataSource>

@property (class, readonly, nonatomic) NSArray *propertyKeysContainingSenstiveData;

@property (readonly, nonatomic) id<CNUICoreFamilyMemberContactsModelFetching> modelFetcher;
@property (readonly, nonatomic) id<CNUICoreFamilyMemberContactsUpdating> familyMemberContactsUpdator;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) id<CNUICoreContactStoreFacade> familyMemberScopedContactStore;
@property (readonly, nonatomic) id<CNUICoreContactStoreFacade> mainContactStoreFacade;
@property (retain, nonatomic) NSArray *familyMemberContactItems;
@property (retain, nonatomic) CNFuture *familyMemberContactItemsFuture;
@property (retain, nonatomic) CNFuture *addContactsToWhitelistFuture;
@property (retain, nonatomic) CNFuture *updateContactsInWhitelistFuture;
@property (retain, nonatomic) CNFuture *deleteContactsFromWhitelistFuture;
@property (readonly, nonatomic) id<CNCancelable> contactStoreDidChangeToken;
@property (weak, nonatomic) id<CNUICoreFamilyMemberContactsObserver> observer;
@property (readonly, nonatomic) long long fetchStatus;
@property (readonly, nonatomic) BOOL familyMemberContainerIsEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contactByRemovingSensitiveDataFromContact:(id)a0;
+ (id)controllerWithFamilyMember:(id)a0 options:(id)a1 schedulerProvider:(id)a2;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)contactRepresentingItem:(id)a0;
- (void)updateWhitelistByAddingContacts:(id)a0;
- (void)updateWhitelistByRemovingContacts:(id)a0;
- (id)initWithModelFetcher:(id)a0 familyMemberContactsUpdator:(id)a1 familyMemberScopedContactStoreFacade:(id)a2 mainContactStoreFacade:(id)a3 schedulerProvider:(id)a4;
- (void)setupChangeNotificationResponse;
- (void)cancelContactItemsFetch;
- (id)contactItemFutureFromFetcher;
- (void)finishWhitelistedContactsTasks;
- (id)initWithFamilyMember:(id)a0 options:(id)a1 schedulerProvider:(id)a2;
- (void)triggerContactItemsFetch;
- (void)updateWhitelistByUpdatingContacts:(id)a0;

@end
