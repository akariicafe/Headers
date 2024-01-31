@class NSCountedSet, NSString, NSArray, NSDictionary, BSAtomicFlag, PBFPosterRoleProcessor, NSMutableArray;
@protocol PBFPosterRoleProcessorResult, PBFPosterRoleCoordinatorTransitionContext;

@interface _PBFPosterRoleProcessorTransaction : NSObject <PBFPosterRoleProcessorTransaction, BSCancellable> {
    NSMutableArray *_emittedEvents;
    NSMutableArray *_executedChanges;
    BSAtomicFlag *_invalidationFlag;
    BSAtomicFlag *_cancelFlag;
}

@property (readonly, nonatomic) NSString *shortIdentifier;
@property (readonly, weak, nonatomic) PBFPosterRoleProcessor *processor;
@property (readonly, nonatomic) BOOL isInvalidated;
@property (readonly) NSCountedSet *affectedRoles;
@property (readonly) NSArray *emittedEvents;
@property (readonly) NSArray *executedChanges;
@property (readonly) NSArray *observers;
@property (retain) id<PBFPosterRoleProcessorResult> results;
@property (readonly, nonatomic) id<PBFPosterRoleCoordinatorTransitionContext> context;
@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transactionWithReason:(id)a0 context:(id)a1 userInfo:(id)a2 observers:(id)a3 processor:(id)a4;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)cancel;
- (void)appendEmittedEvent:(id)a0;
- (void)appendExecutedChange:(id)a0;

@end
