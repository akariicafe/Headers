@class NSArray, NSMutableSet, NSMutableDictionary;

@interface SBSwitcherModelRemovalResults : NSObject {
    NSMutableSet *_appLayouts;
    NSMutableDictionary *_appLayoutToAction;
    NSMutableDictionary *_displayItemToHide;
    NSMutableDictionary *_appLayoutToReplacement;
}

@property (readonly, copy, nonatomic) NSArray *appLayouts;

- (id)init;
- (void).cxx_destruct;
- (void)executeActionForAppLayout:(id)a0;
- (void)removeAppLayout:(id)a0;
- (id)replacementAppLayoutForAppLayout:(id)a0;
- (void)setAction:(id /* block */)a0 forAppLayout:(id)a1;
- (void)setHide:(BOOL)a0 forDisplayItem:(id)a1;
- (void)setReplacementAppLayout:(id)a0 forAppLayout:(id)a1;
- (BOOL)willHideDisplayItem:(id)a0;

@end
