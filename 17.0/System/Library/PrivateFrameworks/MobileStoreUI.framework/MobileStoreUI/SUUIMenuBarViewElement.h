@class NSString, NSArray, SUUIMenuBarViewElementConfiguration;

@interface SUUIMenuBarViewElement : SUUIViewElement <_SUUIMenuBarViewElementConfigurationReloadDelegate, SUUIMenuBarViewElement> {
    NSArray *_titleViewElements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SUUIMenuBarViewElementConfiguration *configuration;

+ (id)supportedFeatures;
+ (Class)_shelfMenuBarViewElementClass;
+ (Class)_titlesMenuBarViewElementClass;

- (id)titleForMenuItemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_menuBarViewElementConfigurationRequestsReload:(id)a0;
- (void)_reloadMenuItems;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
