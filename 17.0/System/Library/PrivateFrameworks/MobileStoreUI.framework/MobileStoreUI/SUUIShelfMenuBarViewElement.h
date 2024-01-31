@class NSString, NSArray, SUUIMenuBarViewElementConfiguration;

@interface SUUIShelfMenuBarViewElement : SUUIShelfViewElement <_SUUIMenuBarViewElementConfigurationReloadDelegate, SUUIMenuBarViewElement> {
    NSArray *_focusedViewElements;
    NSArray *_regularViewElements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SUUIMenuBarViewElementConfiguration *configuration;

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (unsigned long long)elementType;
- (void)enumerateChildrenUsingBlock:(id /* block */)a0;
- (void)_menuBarViewElementConfigurationRequestsReload:(id)a0;
- (void)_reloadMenuItems;
- (id)applyUpdatesWithElement:(id)a0;
- (id)focusedViewElementForMenuItemAtIndex:(unsigned long long)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (id)regularViewElementForMenuItemAtIndex:(unsigned long long)a0;

@end
