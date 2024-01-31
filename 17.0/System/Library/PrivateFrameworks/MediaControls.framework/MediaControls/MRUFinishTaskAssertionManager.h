@class MSVTimer, NSMapTable, RBSAssertion;

@interface MRUFinishTaskAssertionManager : NSObject

@property (readonly, nonatomic) NSMapTable *tokenMap;
@property (retain, nonatomic) RBSAssertion *taskAssertion;
@property (retain, nonatomic) MSVTimer *autoInvalidationTimer;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)acquireForTaskToken:(id)a0 withReason:(id)a1 invalidationHandler:(id /* block */)a2;
- (void)releaseForTaskToken:(id)a0;

@end
