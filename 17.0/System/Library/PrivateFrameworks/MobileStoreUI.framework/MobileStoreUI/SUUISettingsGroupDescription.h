@class SUUISettingsGroupsDescription, SUUIClientContext, SUUIGroupViewElement, SUUISettingsGroupController, NSMutableSet, SUUISettingsHeaderFooterDescription, SUUISettingsContext, SUUISettingsObjectStore;

@interface SUUISettingsGroupDescription : NSObject {
    NSMutableSet *_editableSettings;
    SUUISettingsHeaderFooterDescription *_footerDescription;
    SUUISettingsHeaderFooterDescription *_headerDescription;
    SUUISettingsObjectStore *_settingDescriptions;
    SUUISettingsContext *_settingsContext;
}

@property (readonly, nonatomic) SUUIClientContext *clientContext;
@property (weak, nonatomic) SUUISettingsGroupController *controller;
@property (weak, nonatomic) SUUISettingsGroupsDescription *parent;
@property (retain, nonatomic) SUUIGroupViewElement *viewElement;

- (unsigned long long)index;
- (void)reloadData;
- (void)recycle;
- (id)description;
- (BOOL)hasHeader;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)_presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dispatchUpdate:(id)a0;
- (id)initWithParent:(id)a0 settingsContext:(id)a1;
- (id)indexPathForSettingDescription:(id)a0;
- (void)_dismissViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_dispatchUpdateForSettingDescription:(id)a0 updateType:(long long)a1;
- (void)_updatedEditsValid;
- (void)addSettingDescription:(id)a0;
- (void)addSettingViewElement:(id)a0;
- (void)addSibling:(id)a0;
- (void)deleteSettingDescription:(id)a0;
- (void)deleteSettingsGroup;
- (id)editableSettingDescriptions;
- (id)footerDescription;
- (BOOL)hasEditableSettingDescriptions;
- (BOOL)hasFooter;
- (BOOL)hasNoVisibleSettings;
- (id)headerDescription;
- (void)hideSettingDescription:(id)a0;
- (void)hideSettingsGroup;
- (BOOL)isSettingDescriptionHidden:(id)a0;
- (id)newSiblingWithClass:(Class)a0;
- (unsigned long long)numberOfSettings;
- (void)reloadSettingDescription:(id)a0;
- (void)requestLayoutForWidth:(double)a0 context:(id)a1;
- (void)revealSettingDescription:(id)a0;
- (void)revealSettingsGroup;
- (void)setFooterDescription:(id)a0;
- (void)setFooterViewElement:(id)a0;
- (void)setHeaderDescription:(id)a0;
- (void)setHeaderViewElement:(id)a0;
- (id)settingDescriptionAtIndex:(unsigned long long)a0;
- (id)viewElementForSettingAtIndex:(unsigned long long)a0;

@end
