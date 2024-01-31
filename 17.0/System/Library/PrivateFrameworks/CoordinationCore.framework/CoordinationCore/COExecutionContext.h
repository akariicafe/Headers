@class NSDictionary;

@interface COExecutionContext : NSObject <NSCopying, NSMutableCopying>

@property (copy, nonatomic) NSDictionary *metadata;

- (id)dispatchQueue;
- (id)init;
- (id)label;
- (void)dispatchSync:(id /* block */)a0;
- (void)dispatchAsync:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithDispatchQueue:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMetadata:(id)a0;
- (id)meshName;
- (id /* block */)analyticsRecorder;
- (void)assertDispatchQueue;
- (id)constituentForMe;
- (BOOL)leaderElectionConfigured;
- (id)meshControllerDescription;
- (id)networkActivityFactory;

@end
