@class NSArray, NSMutableDictionary, STUIStatusBarAnimation;

@interface STUIStatusBarTestItem : STUIStatusBarItem

@property (retain, nonatomic) NSMutableDictionary *stringViews;
@property (copy, nonatomic) NSArray *overrideDependentEntryKeys;
@property (retain, nonatomic) STUIStatusBarAnimation *additionAnimation;
@property (retain, nonatomic) STUIStatusBarAnimation *removalAnimation;
@property (retain, nonatomic) STUIStatusBarAnimation *otherAnimation;

+ (id)displayIdentifierForIndex:(long long)a0 displayIndex:(long long)a1;
+ (id)identifierForIndex:(long long)a0;

- (id)additionAnimationForDisplayItemWithIdentifier:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)dependentEntryKeys;
- (id)initWithIdentifier:(id)a0 statusBar:(id)a1;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)a0;
- (id)_defaultStringFromDisplayIdentifier:(id)a0;

@end
