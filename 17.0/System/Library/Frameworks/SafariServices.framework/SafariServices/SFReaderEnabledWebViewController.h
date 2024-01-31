@class _SFReaderController, NSString, _WKRemoteObjectInterface;
@protocol SFReaderEnabledWebViewControllerDelegate;

@interface SFReaderEnabledWebViewController : SFWebViewController <SFAppBannerMetaTagContentObserver, _SFReaderControllerDelegate, WKNavigationDelegatePrivate> {
    _WKRemoteObjectInterface *_appBannerMetaTagContentObserverInterface;
}

@property (readonly, nonatomic) _SFReaderController *readerController;
@property (weak, nonatomic) id<SFReaderEnabledWebViewControllerDelegate> delegate;
@property (nonatomic) BOOL supportsAdvancedPrivacyProtections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFindAppBannerWithContent:(id)a0;
- (void)webView:(id)a0 didCommitNavigation:(id)a1;
- (void)readerController:(id)a0 didDetermineAdditionalTextSamples:(id)a1 dueTo:(long long)a2;
- (void)readerController:(id)a0 didClickLinkRequestingNewWindowInReaderWithRequest:(id)a1;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)createReaderWebViewForReaderController:(id)a0;
- (void)readerController:(id)a0 didDetermineReaderAvailability:(id)a1 dueTo:(long long)a2;
- (void)invalidate;
- (void)loadView;
- (void).cxx_destruct;
- (void)readerController:(id)a0 didClickLinkInReaderWithRequest:(id)a1;
- (void)_updateDarkModeEnabled;
- (void)readerController:(id)a0 contentDidBecomeReadyWithDetectedLanguage:(id)a1;
- (void)setUpReaderWithReaderWebView:(id)a0;

@end
