@class NSString, HFMediaAccessControlEditorItemModule;
@protocol HUMediaAccessControlEditorModuleControllerDelegate;

@interface HUMediaAccessControlEditorModuleController : HUItemModuleController <UITextFieldDelegate, HUSwitchCellDelegate>

@property (readonly, weak, nonatomic) HFMediaAccessControlEditorItemModule *module;
@property (weak, nonatomic) id<HUMediaAccessControlEditorModuleControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldReturn:(id)a0;
- (void).cxx_destruct;
- (id)initWithModule:(id)a0;
- (unsigned long long)didSelectItem:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (id)updateAccessControlDescriptor:(id)a0;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;

@end
