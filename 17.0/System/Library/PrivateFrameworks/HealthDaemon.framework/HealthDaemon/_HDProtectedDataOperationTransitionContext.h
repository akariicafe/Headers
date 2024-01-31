@interface _HDProtectedDataOperationTransitionContext : NSObject

@property (nonatomic) long long oldState;
@property (nonatomic) long long newState;
@property (readonly, nonatomic) BOOL hasNewState;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
