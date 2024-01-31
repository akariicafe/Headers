@class NSArray, CNFuture, NSString, FAFetchFamilyCircleRequest;
@protocol CNSchedulerProvider, CNUICoreContactStoreFacade;

@interface CNUICoreFamilyInfoRetriever : NSObject <CNUICoreFamilyInfoFetching>

@property (class, readonly, nonatomic) NSArray *keysToFetch;

@property (readonly, nonatomic) id<CNUICoreContactStoreFacade> mainContactStore;
@property (readonly, nonatomic) FAFetchFamilyCircleRequest *fetchFamilyCircleRequest;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) BOOL matchFamilyMembersWithContacts;
@property (retain, nonatomic) CNFuture *familyFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contactsMatchingFamilyMember:(id)a0 inContactStore:(id)a1;
+ (id)familyCircleFromRequest:(id)a0 schedulerProvider:(id)a1;
+ (id)familyInfoWithFamilyMembers:(id)a0 meContact:(id)a1;
+ (id)familyInfoWithFamilyMembers:(id)a0 meContact:(id)a1 matchedWithContactsInContactStore:(id)a2;
+ (id)meContactFromStore:(id)a0 schedulerProvider:(id)a1;

- (id)init;
- (id)familyInfo;
- (void).cxx_destruct;
- (id)createFamilyFuture;
- (id)initWithMainContactStoreFacade:(id)a0 fetchFamilyCircleRequest:(id)a1 matchFamilyMembersWithContacts:(BOOL)a2 schedulerProvider:(id)a3;
- (id)initWithMainContactStoreFacade:(id)a0 matchFamilyMembersWithContacts:(BOOL)a1 schedulerProvider:(id)a2;

@end
