@class HMCameraProfile, UINavigationController, HMCameraClip;

@interface HUCameraRecordingFeedbackActivity : UIActivity

@property (retain, nonatomic) HMCameraClip *cameraClip;
@property (retain, nonatomic) HMCameraProfile *cameraProfile;
@property (copy, nonatomic) id /* block */ submissionHandler;
@property (retain, nonatomic) UINavigationController *previewNavigationController;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityViewController;
- (id)activityImage;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (id)initWithCameraClip:(id)a0 cameraProfile:(id)a1 completionHandler:(id /* block */)a2;

@end
