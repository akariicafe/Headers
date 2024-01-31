@class NSArray, NSMutableDictionary, NSDictionary, PKPassEntitlementsComposer;
@protocol PKPassEntitlementSelectionSectionControllerDelegate;

@interface PKPassEntitlementSelectionSectionController : PKPassShareSectionController {
    unsigned long long _mode;
    NSArray *_shareableEntitlements;
    NSMutableDictionary *_selectedEntitlements;
    unsigned long long _maxEntitlementSelectionCount;
    NSDictionary *_groupedEntitlements;
    NSMutableDictionary *_toggleTags;
    PKPassEntitlementsComposer *_entitlementComposer;
}

@property (weak, nonatomic) id<PKPassEntitlementSelectionSectionControllerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (void)_clearEntitlementSelectionAnimated:(BOOL)a0;
- (void)_clearEntitlementSelectionInGroup:(id)a0 animated:(BOOL)a1;
- (void)_updateEntitlementGroups;
- (id)decorateListCell:(id)a0 forEntitlementEntry:(id)a1;
- (id)headerAttributedStringForIdentifier:(id)a0;
- (id)initWithMode:(unsigned long long)a0 entitlementComposer:(id)a1 maxEntitlementSelectionCount:(unsigned long long)a2 delegate:(id)a3;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (void)toggleValueChanged:(id)a0;

@end
