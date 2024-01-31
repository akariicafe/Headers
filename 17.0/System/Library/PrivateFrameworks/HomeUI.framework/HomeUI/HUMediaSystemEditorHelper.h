@class HFMediaSystemBuilder, NAFuture;
@protocol HUMediaSystemEditorHelperDelegate;

@interface HUMediaSystemEditorHelper : NSObject

@property (retain, nonatomic) NAFuture *inFlightCommitFuture;
@property (retain, nonatomic) NAFuture *accountArbitrationFuture;
@property (weak, nonatomic) id<HUMediaSystemEditorHelperDelegate> delegate;
@property (readonly, nonatomic) HFMediaSystemBuilder *mediaSystemBuilder;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)createMediaSystemWithAccessory:(id)a0;
- (id /* block */)_authKitContextGenerator;
- (id)_checkIfAccessoriesNeedSoftwareUpdateToSupportPairing;
- (void)_configureMediaSystemBuilderToMoveHomePodsToRoom:(id)a0;
- (id)_executeAppleMusicAccountReconcilationForMediaSystemBuilder:(id)a0;
- (id)_executePreferredMediaUserReconcilationForMediaSystemBuilder:(id)a0;
- (id)_promptForRoomChange;
- (id)createMediaSystem;

@end
