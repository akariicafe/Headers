@class NSString, SKUIMenuBarViewElementConfiguration, NSArray;

@interface SKUIMenuBarViewElement : SKUIViewElement <_SKUIMenuBarViewElementConfigurationReloadDelegate, SKUIMenuBarViewElement> {
    NSArray *_titleViewElements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SKUIMenuBarViewElementConfiguration *configuration;

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
