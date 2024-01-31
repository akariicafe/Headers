@class SFWebProcessPlugInCertificateWarningController;

@interface SFCertificateWarningJSController : NSObject <SFCertificateWarningJSControllerMethods> {
    SFWebProcessPlugInCertificateWarningController *_certificateWarningController;
}

- (void)openClockSettings;
- (void)goBackSelected;
- (void)visitInsecureWebsiteWithTemporaryBypass;
- (void)showCertificateInformation;
- (void).cxx_destruct;
- (void)visitInsecureWebsite;
- (id)bypassFeatureButtonText;
- (id)bypassFeatureIconPath;
- (id)bypassFeatureTitleText;
- (void)bypassFeatureVisitWebsite;
- (id)bypassFeatureWarningText;
- (id)initWithCertificateWarningController:(id)a0;
- (void)pageLoaded;

@end
