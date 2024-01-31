@class NSNumber, NSArray;

@interface MTRDoorLockClusterLockOperationEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *lockOperationType;
@property (copy, nonatomic) NSNumber *operationSource;
@property (copy, nonatomic) NSNumber *userIndex;
@property (copy, nonatomic) NSNumber *fabricIndex;
@property (copy, nonatomic) NSNumber *sourceNode;
@property (copy, nonatomic) NSArray *credentials;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
