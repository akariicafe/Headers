@class NSString, CRRecentContactsLibrary;

@interface CNUIDefaultUserActionFetcher : NSObject <CNUIDefaultUserActionFetcher>

@property (readonly, nonatomic) CRRecentContactsLibrary *library;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultActionItemForActionItem:(id)a0 recentContacts:(id)a1;
+ (BOOL)doesRecentContact:(id)a0 matchUserActionItem:(id)a1;
+ (id)queryForUserActionItem:(id)a0;
+ (id)recentContactsForUserActionItem:(id)a0 recentsLibrary:(id)a1 scheduler:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)defaultActionItemForActionItems:(id)a0 schedulerProvider:(id)a1;
- (id)initWithRecentsLibrary:(id)a0;
- (id)observableForDefaultActionsChanged;

@end
