@class STUIStatusBarIdentifier;

@interface STUIStatusBarSpacerItem : STUIStatusBarItem

@property (class, readonly) STUIStatusBarIdentifier *randomDisplayIdentifier;

- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (BOOL)canEnableDisplayItem:(id)a0 fromData:(id)a1;
- (id)createDisplayItemForIdentifier:(id)a0;

@end
