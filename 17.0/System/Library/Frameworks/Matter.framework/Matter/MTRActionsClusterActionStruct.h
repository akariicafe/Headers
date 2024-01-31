@class NSNumber, NSString;

@interface MTRActionsClusterActionStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *actionID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSNumber *endpointListID;
@property (copy, nonatomic) NSNumber *supportedCommands;
@property (copy, nonatomic) NSNumber *state;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
