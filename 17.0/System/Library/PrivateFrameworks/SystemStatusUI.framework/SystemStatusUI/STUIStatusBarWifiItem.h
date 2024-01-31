@class STUIStatusBarWifiSignalView, STUIStatusBarIdentifier, STUIStatusBarImageView, STUIStatusBarStringView;

@interface STUIStatusBarWifiItem : STUIStatusBarItem

@property (class, readonly) STUIStatusBarIdentifier *signalStrengthDisplayIdentifier;
@property (class, readonly) STUIStatusBarIdentifier *iconDisplayIdentifier;
@property (class, readonly) STUIStatusBarIdentifier *rawDisplayIdentifier;

@property (retain, nonatomic) STUIStatusBarWifiSignalView *signalView;
@property (retain, nonatomic) STUIStatusBarImageView *networkIconView;
@property (retain, nonatomic) STUIStatusBarStringView *rawStringView;

+ (id)groupWithPriority:(long long)a0;

- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)dependentEntryKeys;
- (double)_interspaceForUpdate:(id)a0;
- (void)_create_signalView;
- (void)_create_rawStringView;
- (id)_fillColorForUpdate:(id)a0 entry:(id)a1;
- (void)_create_networkIconView;
- (double)_barThicknessForUpdate:(id)a0;
- (void).cxx_destruct;
- (long long)_barCountForUpdate:(id)a0;
- (id)viewForIdentifier:(id)a0;
- (double)_totalWidthForUpdate:(id)a0;
- (id)_backgroundColorForUpdate:(id)a0 entry:(id)a1;

@end
