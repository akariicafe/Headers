@class PXAssetActionManager, NSString, PXAssetActionPerformer, UIViewController;
@protocol PXActionPerformerDelegate, PXMemoryAssetsActionFactory;

@interface PUPXAssetActionPerformer : PUAssetActionPerformer <PXActionPerformerDelegate> {
    PXAssetActionPerformer *_underlyingActionPerformer;
}

@property (readonly, weak, nonatomic) id<PXActionPerformerDelegate> forwardingDelegate;
@property (retain, nonatomic) UIViewController *presentedViewController;
@property (retain, nonatomic) PXAssetActionManager *underlyingActionManager;
@property (readonly, nonatomic) id<PXMemoryAssetsActionFactory> memoryAssetsActionFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (unsigned long long)state;
- (id)undoManagerForActionPerformer:(id)a0;
- (void)actionPerformer:(id)a0 didChangeState:(unsigned long long)a1;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)performWithCompletionHandler:(id /* block */)a0;
- (id)initWithActionType:(unsigned long long)a0 assets:(id)a1 orAssetsByAssetCollection:(id)a2;
- (id)initWithUnderlyingActionPerformer:(id)a0;

@end
