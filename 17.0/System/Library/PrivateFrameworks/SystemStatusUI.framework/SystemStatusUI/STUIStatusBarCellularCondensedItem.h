@class STUIStatusBarStringView, STUIStatusBarCellularNetworkTypeView, STUIStatusBarEmergencySignalView, STUIStatusBarIdentifier, STUIStatusBarDualCellularSignalView, STUIStatusBarMultilineStringView;

@interface STUIStatusBarCellularCondensedItem : STUIStatusBarCellularItem

@property (class, readonly) STUIStatusBarIdentifier *dualSignalStrengthDisplayIdentifier;
@property (class, readonly) STUIStatusBarIdentifier *dualNameDisplayIdentifier;
@property (class, readonly) STUIStatusBarIdentifier *dualSingleLineNameDisplayIdentifier;
@property (class, readonly) STUIStatusBarIdentifier *dualSingleLineNameAndTypeDisplayIdentifier;
@property (class, readonly) STUIStatusBarIdentifier *sosSignalStrengthDisplayIdentifier;
@property (class, readonly) STUIStatusBarIdentifier *animatedTypeDisplayIdentifier;

@property (retain, nonatomic) STUIStatusBarDualCellularSignalView *dualSignalView;
@property (retain, nonatomic) STUIStatusBarMultilineStringView *dualNameView;
@property (retain, nonatomic) STUIStatusBarStringView *dualSingleLineNameView;
@property (retain, nonatomic) STUIStatusBarStringView *dualSingleLineNameAndTypeView;
@property (retain, nonatomic) STUIStatusBarEmergencySignalView *sosSignalView;
@property (retain, nonatomic) STUIStatusBarCellularNetworkTypeView *animatedNetworkTypeView;
@property (nonatomic) BOOL reducesFontSize;

+ (id)groupWithHighPriority:(long long)a0 lowPriority:(long long)a1 typeClass:(Class)a2 allowDualNetwork:(BOOL)a3;

- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (void)_create_dualSingleLineNameView;
- (BOOL)canEnableDisplayItem:(id)a0 fromData:(id)a1;
- (id)dependentEntryKeys;
- (void)_create_dualNameView;
- (id)_stringForCellularType:(long long)a0;
- (BOOL)_animateServiceType:(long long)a0 prefixLength:(long long *)a1 currentType:(long long)a2;
- (void)applyStyleAttributes:(id)a0 toDisplayItem:(id)a1;
- (id)entryForDisplayItemWithIdentifier:(id)a0;
- (id)_fontForEntry:(id)a0 styleAttributes:(id)a1 baselineOffset:(double *)a2;
- (BOOL)_showCallFowardingForEntry:(id)a0;
- (id)initWithIdentifier:(id)a0 statusBar:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_nonCondensedFontRangeForEntry:(id)a0;
- (void).cxx_destruct;
- (void)_create_dualSignalView;
- (id)_singleCellularEntryMatching:(id /* block */)a0;
- (id)viewForIdentifier:(id)a0;
- (void)_create_dualSingleLineNameAndTypeView;
- (void)_create_animatedNetworkTypeView;
- (void)_create_sosSignalView;
- (void)prepareAnimation:(id)a0 forDisplayItem:(id)a1;

@end
