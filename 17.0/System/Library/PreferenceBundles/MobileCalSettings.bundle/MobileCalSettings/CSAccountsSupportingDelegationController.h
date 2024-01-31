@class NSArray, EKEventStore;

@interface CSAccountsSupportingDelegationController : PSListController {
    NSArray *_accountsSupportingDelegation;
    EKEventStore *_eventStore;
}

- (id)init;
- (id)specifiers;
- (void).cxx_destruct;
- (void)reloadDelegates;
- (id)specifiersForAccountsSupportingDelegation;

@end
