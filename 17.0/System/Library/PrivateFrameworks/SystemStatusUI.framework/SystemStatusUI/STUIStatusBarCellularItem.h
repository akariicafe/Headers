@class STUIStatusBarCellularSignalView, NSString, STUIStatusBarIdentifier, STUIStatusBarStringView, STUIStatusBarImageView;
@protocol STUIStatusBarCellularItemTypeStringProvider;

@interface STUIStatusBarCellularItem : STUIStatusBarItem

@property (class, readonly) STUIStatusBarIdentifier *signalStrengthDisplayIdentifier;
@property (class, readonly) STUIStatusBarIdentifier *warningDisplayIdentifier;
@property (class, readonly) STUIStatusBarIdentifier *nameDisplayIdentifier;
@property (class, readonly) STUIStatusBarIdentifier *typeDisplayIdentifier;
@property (class, readonly) STUIStatusBarIdentifier *callForwardingDisplayIdentifier;
@property (class, readonly) STUIStatusBarIdentifier *rawDisplayIdentifier;

@property (readonly, nonatomic) NSString *cellularDataEntryKey;
@property (retain, nonatomic) STUIStatusBarStringView *serviceNameView;
@property (retain, nonatomic) STUIStatusBarCellularSignalView *signalView;
@property (retain, nonatomic) STUIStatusBarStringView *networkTypeView;
@property (retain, nonatomic) STUIStatusBarImageView *warningView;
@property (retain, nonatomic) STUIStatusBarImageView *callForwardingView;
@property (retain, nonatomic) STUIStatusBarStringView *rawStringView;
@property (nonatomic) BOOL showsDisabledSignalBars;
@property (nonatomic) BOOL marqueeServiceName;
@property (weak, nonatomic) id<STUIStatusBarCellularItemTypeStringProvider> typeStringProvider;

+ (id)groupWithHighPriority:(long long)a0 lowPriority:(long long)a1 typeClass:(Class)a2 allowDualNetwork:(BOOL)a3;

- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (void)_create_warningView;
- (id)dependentEntryKeys;
- (id)_stringForCellularType:(long long)a0;
- (void)_create_signalView;
- (void)_create_callForwardingView;
- (void)_create_rawStringView;
- (id)entryForDisplayItemWithIdentifier:(id)a0;
- (BOOL)_updateSignalView:(id)a0 withUpdate:(id)a1 entry:(id)a2 forceShowingDisabledSignalBars:(BOOL)a3;
- (id)_fillColorForUpdate:(id)a0 entry:(id)a1;
- (void)_create_networkTypeView;
- (BOOL)_showCallFowardingForEntry:(id)a0;
- (id)initWithIdentifier:(id)a0 statusBar:(id)a1;
- (void).cxx_destruct;
- (void)setmarqueeServiceName:(BOOL)a0;
- (id)viewForIdentifier:(id)a0;
- (id)_backgroundColorForUpdate:(id)a0 entry:(id)a1;
- (void)prepareAnimation:(id)a0 forDisplayItem:(id)a1;
- (void)_create_serviceNameView;

@end
