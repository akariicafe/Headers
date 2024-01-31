@class NSTimer, _UIStatusBarVPNDisconnectView;

@interface _UIStatusBarVPNDisconnectItem : _UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarVPNDisconnectView *disconnectView;
@property (retain, nonatomic) NSTimer *slashBeginTimer;

- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (BOOL)canEnableDisplayItem:(id)a0 fromData:(id)a1;
- (id)dependentEntryKeys;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)a0;
- (void)_create_disconnectView;

@end
