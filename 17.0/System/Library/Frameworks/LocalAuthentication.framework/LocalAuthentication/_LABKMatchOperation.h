@class NSString, BKMatchOperation;
@protocol BKMatchOperationDelegate;

@interface _LABKMatchOperation : _LABKOperation <BKMatchOperationDelegate>

@property (readonly, nonatomic) BKMatchOperation *_BKMatchOperation;
@property (weak, nonatomic) id<BKMatchOperationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)delegate;
- (void)matchOperation:(id)a0 failedWithReason:(long long)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)matchOperation:(id)a0 matchedWithResult:(id)a1;
- (void)matchOperation:(id)a0 presenceDetectedInLockout:(long long)a1;

@end
