@class UIMenu;

@interface _UIHostedMenuManager : NSObject

@property (copy, nonatomic) UIMenu *rootMenu;
@property (retain, nonatomic) UIMenu *displayedMenu;

- (void).cxx_destruct;
- (id)_menuForIdentifier:(id)a0 menu:(id)a1;
- (id)_menuLeafForIdentifier:(id)a0 menu:(id)a1;
- (id)menuForIdentifier:(id)a0;
- (id)menuLeafForIdentifier:(id)a0;

@end
