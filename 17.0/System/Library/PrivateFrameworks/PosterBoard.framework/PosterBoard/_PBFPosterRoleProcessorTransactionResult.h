@class NSSet, NSDictionary, NSArray, NSString;

@interface _PBFPosterRoleProcessorTransactionResult : NSObject <PBFPosterRoleProcessorResult>

@property (copy, nonatomic) NSSet *affectedRoles;
@property (copy, nonatomic) NSDictionary *collectionDiffsPerRole;
@property (copy, nonatomic) NSDictionary *preCommitActivePosterConfigurationForRole;
@property (copy, nonatomic) NSDictionary *postCommitActivePosterConfigurationForRole;
@property (copy, nonatomic) NSArray *emittedEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
