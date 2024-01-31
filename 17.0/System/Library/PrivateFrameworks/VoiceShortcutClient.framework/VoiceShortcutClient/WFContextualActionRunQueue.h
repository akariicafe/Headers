@class NSMutableArray;

@interface WFContextualActionRunQueue : NSObject

@property (readonly, nonatomic) NSMutableArray *runnerClients;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

+ (id)sharedQueue;

- (id)init;
- (void).cxx_destruct;
- (void)enqueueRun:(id)a0;
- (void)runFinished:(id)a0;

@end
