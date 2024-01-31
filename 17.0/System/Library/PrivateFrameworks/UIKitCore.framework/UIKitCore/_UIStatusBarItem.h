@class NSMutableDictionary, NSSet, _UIStatusBarIdentifier, _UIStatusBar;

@interface _UIStatusBarItem : NSObject

@property (class, readonly) _UIStatusBarIdentifier *identifier;
@property (class, readonly) _UIStatusBarIdentifier *defaultDisplayIdentifier;

@property (retain, nonatomic) NSMutableDictionary *displayItems;
@property (readonly, weak) _UIStatusBar *statusBar;
@property (readonly, nonatomic) _UIStatusBarIdentifier *identifier;
@property (readonly, nonatomic) NSSet *dependentEntryKeys;
@property (readonly, nonatomic) BOOL needsUpdate;

+ (id)createItemForIdentifier:(id)a0 statusBar:(id)a1;
+ (id)displayItemIdentifierFromIdentifier:(id)a0 string:(id)a1;
+ (id)displayItemIdentifierFromString:(id)a0;
+ (Class)itemClassForIdentifier:(id)a0;
+ (id)itemIdentifierForDisplayItemIdentifier:(id)a0;
+ (id)itemIdentifierFromString:(id)a0;

- (void)setNeedsUpdate;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)overriddenStyleAttributesForData:(id)a0 identifier:(id)a1;
- (BOOL)canEnableDisplayItem:(id)a0 fromData:(id)a1;
- (void)applyStyleAttributes:(id)a0 toDisplayItem:(id)a1;
- (id)description;
- (id)initWithIdentifier:(id)a0 statusBar:(id)a1;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)a0;
- (void)prepareAnimation:(id)a0 forDisplayItem:(id)a1;
- (id)createDisplayItemForIdentifier:(id)a0;
- (id)_applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)displayItemForIdentifier:(id)a0;
- (void)updatedDisplayItemsWithData:(id)a0;

@end
