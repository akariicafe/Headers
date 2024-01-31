@class NSTimer, STUIStatusBarVPNDisconnectView;

@interface STUIStatusBarVPNDisconnectItem : STUIStatusBarItem

@property (retain, nonatomic) STUIStatusBarVPNDisconnectView *disconnectView;
@property (retain, nonatomic) NSTimer *slashBeginTimer;

- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (BOOL)canEnableDisplayItem:(id)a0 fromData:(id)a1;
- (id)dependentEntryKeys;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)a0;
- (void)_create_disconnectView;

@end
