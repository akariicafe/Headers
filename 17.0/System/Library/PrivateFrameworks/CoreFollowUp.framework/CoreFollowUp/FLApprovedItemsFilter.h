@class NSSet;

@interface FLApprovedItemsFilter : NSObject {
    NSSet *_approvedItemIdentifiers;
    NSSet *_approvedClientIdentifiers;
}

+ (id)sharedFilter;

- (void).cxx_destruct;
- (BOOL)overrideGroupRestrictionsForItem:(id)a0;
- (unsigned long long)approvalStatusForItem:(id)a0;

@end
