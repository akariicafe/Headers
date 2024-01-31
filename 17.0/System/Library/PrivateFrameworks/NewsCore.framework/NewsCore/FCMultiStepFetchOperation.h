@class NSMutableArray, NFMutexLock;

@interface FCMultiStepFetchOperation : FCFetchOperation

@property (retain, nonatomic) NSMutableArray *steps;
@property (retain, nonatomic) NSMutableArray *stepResults;
@property (retain, nonatomic) NFMutexLock *accessLock;

- (void)customizeChildOperation:(id)a0 forFetchStep:(SEL)a1;
- (id)completeFetchOperation;
- (id)init;
- (void)performOperation;
- (void)addNonCriticalFetchStep:(SEL)a0;
- (void)addFetchStep:(SEL)a0;
- (void)_performNextStep;
- (void).cxx_destruct;

@end
