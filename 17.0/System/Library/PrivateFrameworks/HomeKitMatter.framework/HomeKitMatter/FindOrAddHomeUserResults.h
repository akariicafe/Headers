@class MTRDoorLockClusterGetUserResponseParams;

@interface FindOrAddHomeUserResults : NSObject

@property (retain) MTRDoorLockClusterGetUserResponseParams *existingUser;
@property long long newUserSlot;

- (void).cxx_destruct;

@end
