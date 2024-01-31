@class NSMutableDictionary;

@interface _UIKeyCommandMatchingCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *commandKeyPlaneConflictsByInput;
@property (readonly, nonatomic) NSMutableDictionary *reachabilityByInput;

- (id)init;
- (void).cxx_destruct;

@end
