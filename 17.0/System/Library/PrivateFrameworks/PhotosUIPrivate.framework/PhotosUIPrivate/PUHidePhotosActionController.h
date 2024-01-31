@class NSArray, NSUndoManager, PXHideAssetsAction;

@interface PUHidePhotosActionController : NSObject {
    PXHideAssetsAction *_action;
}

@property (readonly, copy, nonatomic) NSArray *assets;
@property (readonly, nonatomic) NSUndoManager *undoManager;

- (void).cxx_destruct;
- (void)performActionWithCompletionHandler:(id /* block */)a0;
- (id)alertControllerForTogglingAssetsVisibilityWithCompletionHandler:(id /* block */)a0;
- (id)initWithAssets:(id)a0 undoManager:(id)a1;

@end
