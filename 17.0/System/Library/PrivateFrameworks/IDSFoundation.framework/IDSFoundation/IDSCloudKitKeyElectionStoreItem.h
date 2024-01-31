@class NSString, ENGroupID;

@interface IDSCloudKitKeyElectionStoreItem : NSObject

@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) ENGroupID *groupID;

- (id)description;
- (void).cxx_destruct;

@end
