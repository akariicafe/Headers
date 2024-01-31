@class NSXPCListener, NSString, NSMutableDictionary, SBWalletNotificationSource, MCProfileConnection, NSMutableArray;

@interface SBCardItemsController : NSObject <SBCardItemsControllerRemoteInterface, NSXPCListenerDelegate> {
    NSMutableDictionary *_cardItems;
    NSMutableArray *_connections;
    NSXPCListener *_listener;
    MCProfileConnection *_profileConnection;
    BOOL _cardWhileLockedAllowed;
}

@property (retain, nonatomic) SBWalletNotificationSource *walletNotificationSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)getCardItemsForControllerWithIdentifier:(id)a0 withHandler:(id /* block */)a1;
- (void)setCardItems:(id)a0 forControllerWithIdentifier:(id)a1;
- (void)_activateCardItem:(id)a0 animated:(BOOL)a1;
- (void)_deactivateCardItem:(id)a0;
- (void)_updateCardItem:(id)a0;
- (void)_updateRestrictions;
- (void)_updateThumbnailForCardItem:(id)a0 withSnapshotter:(id)a1 completion:(id /* block */)a2;

@end
