@class ICQUpgradeFlowManager, ICQRemoteContext, ICQOffer, NSString, ICQUpgradeFlowOptions, ICQRemoteUIDataLoader, ICQLink;
@protocol ICQUpgradeFlowManagerDelegate;

@interface ICQUIOutOfProcessUpgradeFlowManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _presentationLock;
}

@property (retain, nonatomic) ICQRemoteContext *remoteContext;
@property (retain, nonatomic) ICQRemoteUIDataLoader *loader;
@property (nonatomic) BOOL isPresented;
@property (retain, nonatomic) ICQOffer *offer;
@property (retain, nonatomic) ICQLink *link;
@property (copy, nonatomic) ICQUpgradeFlowOptions *flowOptions;
@property (weak, nonatomic) ICQUpgradeFlowManager *flowManager;
@property (weak, nonatomic) id<ICQUpgradeFlowManagerDelegate> delegate;
@property (copy, nonatomic) NSString *presentingSceneIdentifier;
@property (copy, nonatomic) NSString *presentingSceneBundleIdentifier;

+ (id)sharedManager;

- (id)init;
- (id)_rootViewController;
- (void).cxx_destruct;
- (void)_beginExtensionKitFlowWithViewController:(id)a0;
- (void)_beginSBRemoteAlertFlow;
- (BOOL)_canUseExtensionKitForURL:(id)a0;
- (void)_clearServerUIURL;
- (BOOL)_isDefaultOfferFlow:(id)a0;
- (void)_startUpsellWithOffer:(id)a0 link:(id)a1 preloadedRemoteUIData:(id)a2 error:(id)a3;
- (id)_topMostPresentingViewController;
- (void)beginFlowWithViewController:(id)a0;

@end
