@class UIAlertAction;

@interface SFFormAutoFillMultipleLoginsAlertController : UIAlertController {
    UIAlertAction *_cancelAction;
}

@property (nonatomic) BOOL cancelsWhenAppEntersBackground;

+ (id)alertControllerWithMatchesFromFormProtectionSpace:(id)a0 matchesFromOtherProtectionSpaces:(id)a1 externalCredentials:(id)a2 preferredStyle:(long long)a3 formURL:(id)a4 completionHandler:(id /* block */)a5;

- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_sceneDidEnterBackground:(id)a0;

@end
