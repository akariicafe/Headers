@class NSArray, NSString, MCMError, NSMutableSet, NSMutableArray;

@interface MCMResultWithOwnersAndGroupsBase : MCMResultBase <MCMResultWithOwnersAndGroups> {
    NSMutableArray *_mutableOwnerIdentifiers;
    NSMutableArray *_mutableGroupIdentifiers;
    NSMutableSet *_facts;
}

@property (readonly, nonatomic) NSArray *ownerIdentifiers;
@property (readonly, nonatomic) NSArray *groupIdentifiers;
@property (readonly, nonatomic) MCMError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
