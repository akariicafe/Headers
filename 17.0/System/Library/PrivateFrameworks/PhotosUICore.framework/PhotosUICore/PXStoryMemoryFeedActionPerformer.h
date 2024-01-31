@class NSString;

@interface PXStoryMemoryFeedActionPerformer : NSObject <PXFeedActionPerformer>

@property (readonly, copy, nonatomic) id /* block */ viewControllerSetupBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_presentViewController:(id)a0 contentViewController:(id)a1 fromViewController:(id)a2 animated:(BOOL)a3 completion:(id /* block */)a4;
- (void)deleteItemsInSelection:(id)a0 undoManager:(id)a1;
- (BOOL)handlePrimaryActionOnItemAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 inDataSource:(id)a1 fromViewController:(id)a2;
- (id)initWithViewControllerSetupBlock:(id /* block */)a0;
- (BOOL)navigateToObjectReference:(id)a0 originalSource:(id)a1 fromViewController:(id)a2 animated:(BOOL)a3 willPresentHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;

@end
