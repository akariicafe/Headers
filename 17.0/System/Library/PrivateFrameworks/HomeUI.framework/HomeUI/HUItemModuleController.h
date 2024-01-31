@class HFItemModule, NSString;
@protocol HUItemModuleControllerHosting;

@interface HUItemModuleController : NSObject <HUItemTextEditingController>

@property (weak, nonatomic) id<HUItemModuleControllerHosting> host;
@property (nonatomic) unsigned long long hostType;
@property (readonly, nonatomic) HFItemModule *module;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithModule:(id)a0;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (BOOL)canSelectItem:(id)a0;
- (unsigned long long)didSelectItem:(id)a0;
- (void)accessoryButtonTappedForItem:(id)a0;
- (id)asGeneric;
- (BOOL)canSelectDisabledItem:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (Class)collectionCellClassForItem:(id)a0;
- (id)collectionLayoutSectionForSectionWithIdentifier:(id)a0 layoutEnvironment:(id)a1;
- (id)currentTextForTextField:(id)a0 item:(id)a1;
- (id)defaultTextForTextField:(id)a0 item:(id)a1;
- (id)leadingSwipeActionsForItem:(id)a0;
- (id)placeholderTextForTextField:(id)a0 item:(id)a1;
- (long long)rowAnimationForOperationType:(unsigned long long)a0 item:(id)a1 suggestedAnimation:(long long)a2;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (BOOL)shouldHideFooterBelowSectionWithIdentifier:(id)a0;
- (BOOL)shouldHideHeaderAboveSectionWithIdentifier:(id)a0;
- (BOOL)shouldManageTextFieldForItem:(id)a0;
- (void)textDidChange:(id)a0 forTextField:(id)a1 item:(id)a2;
- (void)textFieldDidBeginEditing:(id)a0 item:(id)a1;
- (void)textFieldDidEndEditing:(id)a0 item:(id)a1;
- (id)textFieldForVisibleItem:(id)a0;
- (id)trailingSwipeActionsForItem:(id)a0;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;

@end
