@class NSNumber;

@interface MTRActionsClusterActionFailedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *actionID;
@property (copy, nonatomic) NSNumber *invokeID;
@property (copy, nonatomic, getter=getNewState) NSNumber *newState;
@property (copy, nonatomic) NSNumber *error;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
