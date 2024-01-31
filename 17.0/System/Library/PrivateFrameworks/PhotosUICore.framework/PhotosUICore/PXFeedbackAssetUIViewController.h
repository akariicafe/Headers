@class UINavigationController, NSArray, NSDictionary, PXFeedbackLikeItOrNotComboUIViewController, PHAsset, PXAutoloopVideoProcessTask, NSString;
@protocol PXFeedbackAssetUIViewControllerDelegate;

@interface PXFeedbackAssetUIViewController : UIViewController <PXFeedbackFormDelegate, PXAutoloopVideoTaskDelegate>

@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) BOOL userLikedIt;
@property (retain, nonatomic) NSDictionary *positiveFeedback;
@property (retain, nonatomic) NSDictionary *negativeFeedback;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) PXFeedbackLikeItOrNotComboUIViewController *feedbackController;
@property (retain, nonatomic) PXAutoloopVideoProcessTask *autoLoopFrameworkDiagnosticsCurrentTask;
@property (retain, nonatomic) NSArray *autoLoopFrameworkDiagnosticFileURLs;
@property (readonly, weak, nonatomic) id<PXFeedbackAssetUIViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_fileRadarWithAutoLoopAsset:(id)a0 positiveFeedback:(id)a1 negativeFeedback:(id)a2;
- (void)_startAutoLoopVideoTaskForDiagnosticsWithAsset:(id)a0;
- (void)autoloopVideoTaskStatusDidChange:(id)a0;
- (void)continueFiling;
- (id)initWithAsset:(id)a0 delegate:(id)a1;
- (id)longTitleText;
- (id)negativeFeedbackKeys;
- (id)positiveFeedbackKeys;
- (BOOL)shouldDisplaySecondaryFeedbackButtons;
- (void)userDidFinish:(BOOL)a0;
- (void)userIndicatedDislike;
- (void)userIndicatedLike;
- (void)userSentPositiveFeedback:(id)a0 negativeFeedback:(id)a1 customFeedback:(id)a2;
- (id)viewTitleForRadar;

@end
