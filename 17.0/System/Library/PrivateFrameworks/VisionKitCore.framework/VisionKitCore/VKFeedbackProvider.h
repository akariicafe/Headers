@class NSError, NSString, VKCImageAnalyzerRequest, NSURL, VKFeedbackAttachment, NSDictionary, VKCImageAnalysis, NSMutableArray, UIViewController;
@protocol VKFeedbackAssetsProvider;

@interface VKFeedbackProvider : NSObject <VKFeedbackProviderViewControllerDelegate> {
    unsigned long long _type;
    NSDictionary *_metadata;
    NSURL *_attachmentsFolderURL;
    NSMutableArray *_screenshots;
    VKFeedbackAttachment *_requestAssetAttachment;
    VKFeedbackAttachment *_analysisArchiveAttachment;
    id /* block */ _userResponseHandler;
}

@property (retain, nonatomic) id<VKFeedbackAssetsProvider> assetsProvider;
@property (weak, nonatomic) VKCImageAnalysis *imageAnalysis;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) VKCImageAnalyzerRequest *request;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)provideFeedbackWithType:(unsigned long long)a0 options:(unsigned long long)a1 metadata:(id)a2 consentPresentingView:(id)a3;
- (void)_captureScreenshots;
- (id)_jsonRepresentationForAttributesDictionary:(id)a0;
- (void)_saveFeedbackAttributesJSON:(id)a0;
- (void)_saveImage:(id)a0 withName:(id)a1;
- (void)_saveScreenshots;
- (void)feedbackProviderViewController:(id)a0 submitWithOptions:(unsigned long long)a1 attachments:(id)a2;
- (void)feedbackProviderViewControllerDidCancel:(id)a0;
- (void)provideFeedbackWithType:(unsigned long long)a0;
- (void)provideFeedbackWithType:(unsigned long long)a0 consentPresentingView:(id)a1;
- (void)provideFeedbackWithType:(unsigned long long)a0 options:(unsigned long long)a1 metadata:(id)a2 promisedAttachments:(id)a3 userResponseHandler:(id /* block */)a4;

@end
