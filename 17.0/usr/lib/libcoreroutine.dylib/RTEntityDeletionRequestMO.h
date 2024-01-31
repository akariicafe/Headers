@class NSDictionary, NSUUID;

@interface RTEntityDeletionRequestMO : RTCloudManagedObject

@property (retain, nonatomic) NSDictionary *recordIDs;
@property (copy, nonatomic) NSUUID *targetDeviceIdentifier;

+ (id)fetchRequest;
+ (id)managedObjectWithCloudManagedObjects:(id)a0 context:(id)a1;

- (void)buildDeleteRequestFromCloudManagedObject:(id)a0 context:(id)a1;
- (void)buildDeleteRequestFromCloudManagedObjects:(id)a0 context:(id)a1;
- (id)identifiersByTypeInSubgraphOfEntity:(id)a0 shouldTombstone:(BOOL)a1;
- (void)mergeEntriesFromDictionary:(id)a0 intoDictionary:(id)a1;

@end
