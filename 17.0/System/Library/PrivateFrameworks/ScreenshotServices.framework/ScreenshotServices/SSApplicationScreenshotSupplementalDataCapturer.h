@class FBSOpenApplicationService;

@interface SSApplicationScreenshotSupplementalDataCapturer : NSObject {
    FBSOpenApplicationService *_openAppService;
}

+ (id)settingsForDocumentCapture:(BOOL)a0 elementIdentifier:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_sendRequestForEnvironmentElement:(id)a0 info:(id)a1 completionBlock:(id /* block */)a2;
- (void)captureDocumentForEnvironmentElement:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)captureMetadataForEnvironmentElement:(id)a0 withCompletionBlock:(id /* block */)a1;

@end
