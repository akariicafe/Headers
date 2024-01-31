@class MTRDoorLockClusterGetUserResponseParams, MTRDoorLockClusterGetCredentialStatusResponseParams, NSNumber;

@interface HMMTRCredentialUserTuple : NSObject

@property (retain) MTRDoorLockClusterGetCredentialStatusResponseParams *credential;
@property (retain) MTRDoorLockClusterGetUserResponseParams *user;
@property (retain) NSNumber *currentFabricIndex;

- (void).cxx_destruct;

@end
