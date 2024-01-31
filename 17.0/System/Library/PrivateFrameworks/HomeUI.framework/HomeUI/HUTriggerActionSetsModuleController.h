@class HUItemCollectionViewController;
@protocol HUTriggerSummaryActionGridViewControllerProtocol, HUTriggerActionSetsModuleControllerDelegate;

@interface HUTriggerActionSetsModuleController : HUItemModuleController <HUEmbeddedTriggerActionGridViewControllerDelegate, HUEmbeddedTriggerActionSetGridViewControllerDelegate>

@property (readonly, nonatomic) HUItemCollectionViewController<HUTriggerSummaryActionGridViewControllerProtocol> *actionSetsGridViewController;
@property (readonly, nonatomic) HUItemCollectionViewController<HUTriggerSummaryActionGridViewControllerProtocol> *actionsGridViewController;
@property (readonly, nonatomic) HUItemCollectionViewController<HUTriggerSummaryActionGridViewControllerProtocol> *prioritizedActionsGridViewController;
@property (weak, nonatomic) id<HUTriggerActionSetsModuleControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)reloadActions;
- (Class)cellClassForItem:(id)a0;
- (id)childViewControllersToPreload;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)triggerActionGridViewController:(id)a0 didUpdate:(id)a1;
- (void)triggerActionSetGridViewController:(id)a0 didUpdate:(id)a1;

@end
