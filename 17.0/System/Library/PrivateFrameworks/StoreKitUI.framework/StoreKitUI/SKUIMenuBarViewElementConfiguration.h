@class SKUIMenuItemViewElement, NSString, NSArray, IKAppMenuBarDocument;
@protocol SKUIMenuBarViewElementConfigurationDelegate, _SKUIMenuBarViewElementConfigurationReloadDelegate;

@interface SKUIMenuBarViewElementConfiguration : NSObject <IKAppMenuBarDocumentDelegate> {
    IKAppMenuBarDocument *_menuBarDocument;
    long long _menuBarStyle;
    NSArray *_menuItemViewElements;
}

@property (nonatomic, getter=_needsReload, setter=_setNeedsReload:) BOOL needsReload;
@property (weak, nonatomic, getter=_reloadDelegate, setter=_setReloadDelegate:) id<_SKUIMenuBarViewElementConfigurationReloadDelegate> reloadDelegate;
@property (weak, nonatomic) id<SKUIMenuBarViewElementConfigurationDelegate> delegate;
@property (readonly, nonatomic) long long menuBarStyle;
@property (readonly, nonatomic) unsigned long long numberOfMenuItems;
@property (readonly, nonatomic) BOOL scrollEnabled;
@property (readonly, nonatomic) SKUIMenuItemViewElement *selectedMenuItemViewElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_ensureDataLoaded;
- (id)_initWithMenuBarDocument:(id)a0;
- (void)_reloadWithMenuBarStyle:(long long)a0 menuItemViewElements:(id)a1 scrollEnabled:(BOOL)a2;
- (void)contentWillAppearForMenuItemAtIndex:(unsigned long long)a0 withEntityValueProvider:(id)a1 clientContext:(id)a2;
- (id)documentForEntityUniqueIdentifier:(id)a0;
- (id)documentForMenuItemAtIndex:(unsigned long long)a0;
- (id)documentOptionsForEntityUniqueIdentifier:(id)a0;
- (id)documentOptionsForMenuItemAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfMenuItemViewElement:(id)a0;
- (void)menuBarDocument:(id)a0 didReplaceDocumentForEntityWithUniqueIdentifier:(id)a1;
- (void)menuBarDocument:(id)a0 didReplaceDocumentForMenuItem:(id)a1;
- (void)menuBarDocument:(id)a0 didSelectMenuItem:(id)a1 animated:(BOOL)a2;

@end
