@class WBSPhishingConfiguration, NSString, NSURL, NSObject, WBSRemotePlistController;
@protocol WBSPhishingAssetControllerDelegate, OS_dispatch_queue, WBSMobileAssetControllerProtocol;

@interface WBSPhishingAssetController : NSObject <WBSMobileAssetControllerDelegate, WBSRemotePlistControllerDelegate, WBSPhishingAssetControllerProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
    id<WBSMobileAssetControllerProtocol> _assetController;
    BOOL _canUpdateConfiguration;
    WBSPhishingConfiguration *_configuration;
    WBSRemotePlistController *_configurationController;
    id<WBSPhishingAssetControllerDelegate> _delegate;
    NSURL *_assetURL;
}

@property (class, readonly, nonatomic) NSString *mobileAssetType;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<WBSPhishingAssetControllerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)didDownloadPlistForRemotePlistController:(id)a0;
- (BOOL)_sendAssetToDelegateIfPossible:(id)a0;
- (void)_configurationWasUpdated:(id)a0;
- (id)_createConfigurationControllerWithDefaultConfigurationURL:(id)a0 updateConfiguration:(id)a1 defaultsKey:(id)a2;
- (BOOL)_sendAssetToDelegateIfPossible;
- (id)initWithMobileAssetController:(id)a0 canUpdateConfiguration:(BOOL)a1;
- (void)mobileAssetController:(id)a0 didBecomeAvailable:(id)a1;
- (void)mobileAssetController:(id)a0 didDownload:(id)a1;
- (void)mobileAssetController:(id)a0 didFailCatalogDownload:(id)a1;
- (void)mobileAssetController:(id)a0 didFailDownload:(id)a1;
- (void)mobileAssetController:(id)a0 didFailRetrieve:(id)a1;
- (void)mobileAssetController:(id)a0 willPerformQuery:(id)a1;

@end
