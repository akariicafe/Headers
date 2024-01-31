@class _SFWebProcessPlugInPageController, NSString, WBSCertificateWarningPageContext, _WKRemoteObjectInterface;
@protocol WBSCertificateWarningPageHandler;

@interface SFWebProcessPlugInCertificateWarningController : NSObject <WBSCertificateWarningPagePresenter> {
    _SFWebProcessPlugInPageController *_pageController;
    _WKRemoteObjectInterface *_certificateWarningPagePresenterInterface;
    id<WBSCertificateWarningPageHandler> _certificateWarningPageHandlerProxy;
}

@property (readonly, nonatomic) WBSCertificateWarningPageContext *warningPageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)visitWebsiteWithoutPrivateRelay;
- (void)dealloc;
- (void)_clearCertificateWarningPagePresenterInterface;
- (void)injectCertificateWarningBindingsForFrame:(id)a0 inScriptWorld:(id)a1;
- (void)openClockSettings;
- (void)goBackSelected;
- (void)visitInsecureWebsiteWithTemporaryBypass;
- (void)showCertificateInformation;
- (void)certificateWarningPageLoaded;
- (void).cxx_destruct;
- (void)prepareCertificateWarningPage:(id)a0;
- (void)_setUpCertificateWarningPagePresenterInterface;
- (id)initWithPageController:(id)a0;
- (id)_certificateWarningPageHandlerProxy;
- (void)visitInsecureWebsite;

@end
