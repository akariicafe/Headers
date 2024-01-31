@class NSString, OBPrivacyLinkController, OBPrivacyPresenter;

@interface TPSCloudCallingListController : TPSListController <TPSCloudCallingURLControllerDelegate>

@property (readonly, nonatomic) OBPrivacyLinkController *privacyLinkController;
@property (readonly, nonatomic) OBPrivacyPresenter *privacyPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)appendAboutWiFiCallingFooterToGroupSpecifier:(id)a0;
- (void)presentOrUpdateViewController:(id)a0;
- (void)presentPrivacyPresenter;
- (void)privacySplashControllerDidRequestDismissal:(id)a0;

@end
