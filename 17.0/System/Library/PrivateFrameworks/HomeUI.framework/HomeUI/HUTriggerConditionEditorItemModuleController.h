@class HUTriggerConditionDetailEditingContext, HUTriggerConditionEditorItemModule, NSString;
@protocol HUTriggerConditionEditorItemModuleControllerDelegate;

@interface HUTriggerConditionEditorItemModuleController : HUItemModuleController <HUSwitchCellDelegate, HUTriggerTimeConditionDetailEditorDelegate>

@property (retain, nonatomic) HUTriggerConditionDetailEditingContext *detailEditingContext;
@property (readonly, nonatomic) HUTriggerConditionEditorItemModule *module;
@property (readonly, weak, nonatomic) id<HUTriggerConditionEditorItemModuleControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)didSelectItem:(id)a0;
- (BOOL)_canEditConditionOptionItem:(id)a0;
- (void)_dismissDetailEditor:(id)a0;
- (void)_presentDetailEditorForConditionOptionItem:(id)a0;
- (void)accessoryButtonTappedForItem:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (id)initWithModule:(id)a0 delegate:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)timeConditionEditor:(id)a0 didFinishWithCondition:(id)a1;
- (void)timeConditionEditorDidCancel:(id)a0;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;

@end
