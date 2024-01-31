@class NSString;
@protocol CNUICoreFamilyMemberContactsModelFetching, CNUICoreFamilyInfoFetching, CNSchedulerProvider;

@interface CNUICoreProposedContactsFetchingDecorator : NSObject <CNUICoreFamilyMemberContactsModelFetching>

@property (readonly, nonatomic) id<CNUICoreFamilyMemberContactsModelFetching> modelFetcher;
@property (readonly, nonatomic) id<CNUICoreFamilyInfoFetching> familyInfoFetcher;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proposedContactsFromFamilyInfo:(id)a0;
+ (id)modelWithProposedContactsFromFamilyInfo:(id)a0;

- (void).cxx_destruct;
- (id)allContactsModel;
- (id)initWithModelFetcher:(id)a0 familyInfoFetcher:(id)a1 schedulerProvider:(id)a2;
- (id)initWithModelFetcher:(id)a0 familyMember:(id)a1 schedulerProvider:(id)a2;
- (id)whitelistedContactsModel;

@end
