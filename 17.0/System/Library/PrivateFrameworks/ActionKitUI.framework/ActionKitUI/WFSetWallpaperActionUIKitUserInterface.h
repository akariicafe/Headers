@class NSString;

@interface WFSetWallpaperActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFSetWallpaperActionUserInterface, PRUIModalRemoteViewControllerDelegate, SBSUIWallpaperPreviewViewControllerDelegate>

@property (nonatomic) long long locations;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isiPad;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)wallpaperPreviewViewControllerCancelButtonPressed:(id)a0;
- (void)wallpaperPreviewViewControllerSetButtonPressed:(id)a0;
- (void)modalRemoteViewController:(id)a0 didDismissWithResponse:(id)a1;
- (void)showPreviewForConfiguration:(id)a0 selectedPoster:(id)a1 completionHandler:(id /* block */)a2;
- (void)showPreviewWithInput:(id)a0 key:(id)a1 wallpaperLocation:(long long)a2 completionHandler:(id /* block */)a3;

@end
