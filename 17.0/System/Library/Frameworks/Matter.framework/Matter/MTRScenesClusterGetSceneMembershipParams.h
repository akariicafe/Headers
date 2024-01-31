@class NSNumber;

@interface MTRScenesClusterGetSceneMembershipParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *groupId;
@property (copy, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
