@class NSArray, CNSchedulerProvider, NSString;
@protocol CNScheduler, CNUICoreFamilyInfoFetching, CNUICoreContactStoreFacade, CNDowntimeWhitelistContainerFetching;

@interface CNUICoreFamilyMemberContactsModelRetriever : NSObject <CNUICoreFamilyMemberContactsModelFetching>

@property (class, readonly, nonatomic) long long contactFormatterStyle;
@property (class, readonly, nonatomic) NSArray *keysToFetch;

@property (readonly, nonatomic) id<CNUICoreContactStoreFacade> contactStore;
@property (readonly, nonatomic) id<CNUICoreFamilyInfoFetching> familyInfoFetcher;
@property (readonly, nonatomic) id<CNDowntimeWhitelistContainerFetching> downtimeContainerFetcher;
@property (readonly, nonatomic) CNSchedulerProvider *schedulerProvider;
@property (readonly, nonatomic) id<CNScheduler> backgroundOrImmediateScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)allContacts;
- (id)initWithFamilyMember:(id)a0 schedulerProvider:(id)a1;
- (id)allContactsModel;
- (id)initWithContactStoreFacade:(id)a0 familyInfoFetcher:(id)a1 downtimeContainerFetcher:(id)a2 schedulerProvider:(id)a3;
- (id)initWithDowntimeContainerFetcher:(id)a0 schedulerProvider:(id)a1;
- (id)modelBuilderForContacts:(id)a0 familyInfo:(id)a1;
- (id)modelBuilderForWhitelistedContacts:(id)a0 familyInfo:(id)a1;
- (id)whitelistedContactsModel;

@end
