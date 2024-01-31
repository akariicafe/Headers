@class NSString;
@protocol _MSMessageComposeHostProtocol;

@interface _MSMessageAppExtensionHostContext : NSExtensionContext <_MSMessageComposeHostImplProtocol> {
    NSString *_queuedCanShowBrowserPluginIdentifier;
    id /* block */ _queuedCanShowBrowserCompletion;
}

@property (weak, nonatomic) id<_MSMessageComposeHostProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_allowedItemPayloadClasses;
+ (id)_extensionContextHostProtocolAllowedClassesForItems;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (void)_dismiss;
- (void)_stageAssetArchive:(id)a0 skipShelf:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_contentDidLoad;
- (void)_canShowBrowserForPluginIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_dismissAndPresentPhotosApp;
- (void)_dragMediaItemCanceled;
- (void)_dragMediaItemMoved:(id)a0 frameInRemoteView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rotation:(double)a2 scale:(double)a3 completionHandler:(id /* block */)a4;
- (void)_openURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_presentAlertSheetWith:(id)a0 styles:(id)a1 completion:(id /* block */)a2;
- (void)_presentAlertWithTitle:(id)a0 message:(id)a1 buttonTitle:(id)a2 completion:(id /* block */)a3;
- (void)_presentAlertWithTitle:(id)a0 message:(id)a1 buttonTitle:(id)a2 destructiveButtonTitle:(id)a3 completion:(id /* block */)a4;
- (void)_remoteViewDidBecomeReadyForDisplay;
- (void)_remoteViewNeedsSizeMatchBeforeSnapshotSwap;
- (void)_remoteViewProvidesExplicitSizeSnapshot;
- (void)_removeAssetArchiveWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_requestFullScreenModalPresentationWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)_requestHostSceneIdentifierWithCompletion:(id /* block */)a0;
- (void)_requestPresentationStyle:(unsigned long long)a0;
- (void)_requestPresentationWithStickerType:(id)a0 identifier:(id)a1;
- (void)_requestResize;
- (void)_requestStickerExtensionMetadataDictionary:(id /* block */)a0;
- (void)_showBrowserForPluginIdentifier:(id)a0 style:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_stageAppItem:(id)a0 skipShelf:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_stageMediaItem:(id)a0 skipShelf:(BOOL)a1 forceStage:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_stageRichLink:(id)a0 skipShelf:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_startDragMediaItem:(id)a0 frameInRemoteView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fence:(id)a2 completionHandler:(id /* block */)a3;
- (void)_stickerDruidDragEndedWithPayload:(id)a0;
- (void)_stickerDruidDragEndedWithPayload:(id)a0 pluginIdentifier:(id)a1;
- (void)_stickerDruidDragStarted;
- (void)_updateSnapshotForNextLaunch:(id)a0;

@end
