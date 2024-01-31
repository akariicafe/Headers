@class NSString, NSMutableArray, UIDragItem;

@interface _UITableViewDropAnimation : NSObject <UIDragAnimating>

@property (retain, nonatomic) UIDragItem *dragItem;
@property (retain, nonatomic) NSMutableArray *animationsBlocks;
@property (retain, nonatomic) NSMutableArray *completionBlocks;
@property (nonatomic, getter=_didBeginAnimation, setter=_setDidBeginAnimation:) BOOL didBeginAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addCompletion:(id /* block */)a0;
- (void)addAnimations:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_addClientBlocksToAnimator:(id)a0;
- (void)_executeCompletionBlocks;
- (id)initWithDragItem:(id)a0;

@end
