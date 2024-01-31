@class NSString, STUIStatusBarStringView;

@interface STUIStatusBarNameItem : STUIStatusBarItem

@property (readonly, nonatomic) NSString *nameEntryKey;
@property (retain, nonatomic) STUIStatusBarStringView *nameView;

- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)dependentEntryKeys;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)a0;
- (void)_create_nameView;

@end
