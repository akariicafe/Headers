@class HFActionSetBuilder, NSArray, NSString, HURecommendedTriggerItemModuleController, HUTriggerTypePickerItemManager;
@protocol HUTriggerEditorDelegate;

@interface HUTriggerTypePickerViewController : HUItemTableViewController <HURecommendedTriggerItemModuleControllerDelegate, HUTriggerEditorDelegate>

@property (retain, nonatomic) HFActionSetBuilder *actionSetBuilder;
@property (retain, nonatomic) NSArray *anonymousActionBuilders;
@property (readonly, nonatomic) HUTriggerTypePickerItemManager *itemManager;
@property (readonly, weak, nonatomic) HURecommendedTriggerItemModuleController *recommendationModuleController;
@property (weak, nonatomic) id<HUTriggerEditorDelegate> delegate;
@property (nonatomic) BOOL showSuggestedAutomations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)_cancel:(id)a0;
- (id)_createTriggerBuilderOfClass:(Class)a0;
- (id)_createTriggerEditorForItem:(id)a0;
- (id)buildItemModuleControllerForModule:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithActionSetBuilder:(id)a0 anonymousActionBuilders:(id)a1 delegate:(id)a2;
- (id)initWithActionSetBuilder:(id)a0 delegate:(id)a1;
- (void)recommendedTriggerModuleController:(id)a0 didSelectToOpenTriggerBuilder:(id)a1;
- (void)recommendedTriggerModuleControllerDidSelectShowMore:(id)a0;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (void)triggerEditor:(id)a0 didCommitTriggerBuilder:(id)a1 withError:(id)a2;
- (void)triggerEditor:(id)a0 didFinishWithTriggerBuilder:(id)a1;
- (BOOL)triggerEditor:(id)a0 shouldCommitTriggerBuilder:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
