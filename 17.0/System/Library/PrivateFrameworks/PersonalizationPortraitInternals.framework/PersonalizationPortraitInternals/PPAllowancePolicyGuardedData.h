@class NSSet;

@interface PPAllowancePolicyGuardedData : NSObject {
    NSSet *notificationBlocklist;
    NSSet *notificationAllowlist;
    NSSet *searchableItemBlocklist;
    NSSet *searchableItemAllowlist;
}

- (void).cxx_destruct;

@end
