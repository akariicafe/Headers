@class NSMapTable, NAFuture, HUAppleMusicAccountModule, HUButtonCell;
@protocol HUAppleMusicAccountModuleControllerDelegate;

@interface HUAppleMusicAccountModuleController : HUItemModuleController

@property (weak, nonatomic) HUButtonCell *logoutButton;
@property (retain, nonatomic) NAFuture *logoutFuture;
@property (weak, nonatomic) HUButtonCell *loginButton;
@property (retain, nonatomic) NAFuture *loginFuture;
@property (weak, nonatomic) HUButtonCell *activeAuthCell;
@property (retain, nonatomic) NSMapTable *itemToCellMap;
@property (readonly, nonatomic) HUAppleMusicAccountModule *module;
@property (weak, nonatomic) id<HUAppleMusicAccountModuleControllerDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)module;
- (void)logout;
- (id)initWithModule:(id)a0;
- (BOOL)canSelectItem:(id)a0;
- (unsigned long long)didSelectItem:(id)a0;
- (id)_authCells;
- (id)_authenticationContextForAccessory:(id)a0 account:(id)a1;
- (BOOL)_canExecuteAccountAction;
- (id)_companionLoginWithAccount:(id)a0 cell:(id)a1;
- (void)_disableCells;
- (void)_enableCells;
- (id)_proxyLoginWithAccount:(id)a0 cell:(id)a1;
- (void)_reloadForAuthEvent;
- (void)_setupButtonCell:(id)a0 enabled:(BOOL)a1;
- (void)_setupCompanionAuthenticationForAccount:(id)a0 cell:(id)a1;
- (void)_setupProxyAuthenticationForAccount:(id)a0 cell:(id)a1;
- (void)_updateModuleState:(unsigned long long)a0 notifyDelegate:(BOOL)a1;
- (Class)cellClassForItem:(id)a0;
- (void)clearLogoutFuture;
- (id)kickOffManualLogin;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;

@end
