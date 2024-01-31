@class NSNumber;

@interface MTRDoorLockClusterDoorStateChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *doorState;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
