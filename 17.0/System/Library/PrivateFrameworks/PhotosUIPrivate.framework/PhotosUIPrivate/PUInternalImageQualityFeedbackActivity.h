@class NSString, PXFeedbackImageQualityUIViewController;

@interface PUInternalImageQualityFeedbackActivity : PXActivity <PXFeedbackImageQualityUIViewControllerDelegate> {
    PXFeedbackImageQualityUIViewController *_feedbackController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)activityCategory;

- (id)activityType;
- (id)assets;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityViewController;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)feedbackImageQualityUIViewController:(id)a0 didFinish:(BOOL)a1;

@end
