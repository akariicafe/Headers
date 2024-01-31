@class PUBrowsingSession, PUAssetActionPerformer, PXActionManager, NSArray, NSString, UIViewController;
@protocol PUMenuActionControllerDelegate, PXRegionOfInterestProvider;

@interface PUMenuActionController : NSObject <PUAssetActionPerformerDelegate> {
    struct { BOOL didDismissWithActionIdentifier; BOOL preventRevealInMomentAction; } _delegateRespondsTo;
}

@property (retain, nonatomic, setter=_setActiveActionPerformer:) PUAssetActionPerformer *_activeActionPerformer;
@property (retain, nonatomic) PUBrowsingSession *browsingSession;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (weak, nonatomic) id<PXRegionOfInterestProvider> regionOfInterestProvider;
@property (weak, nonatomic) id<PUMenuActionControllerDelegate> delegate;
@property (retain, nonatomic) PXActionManager *photosUICoreActionManager;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)assetActionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (id)undoManagerForAssetActionPerformer:(id)a0;
- (void).cxx_destruct;
- (BOOL)assetActionPerformer:(id)a0 presentViewController:(id)a1;
- (void)_executeActionPerformer:(id)a0;
- (id)_contextMenuActionWithTitle:(id)a0 image:(id)a1 attributes:(unsigned long long)a2 actionHandler:(id /* block */)a3;
- (id)_copyMenuElement;
- (void)_notifyDelegateOfAction:(id)a0;
- (void)_performFavoriteAction:(BOOL)a0;
- (void)_performSimpleActionWithType:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_promptTrashActionConfirmationForAsset:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)contextMenuActionIfAvailableForActionType:(unsigned long long)a0;
- (id)debugActions;

@end
