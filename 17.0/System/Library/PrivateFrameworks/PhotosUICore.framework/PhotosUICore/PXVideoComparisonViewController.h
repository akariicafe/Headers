@class NSURL, UILabel, UIVisualEffectView, PHAsset, PXSettings, PXVideoPlayerView, UIProgressView, NSString, AVPlayerItem, ISWrappedAVPlayer, UISegmentedControl, NSError, UIAlertAction;

@interface PXVideoComparisonViewController : UIViewController <UIAdaptivePresentationControllerDelegate> {
    PXVideoPlayerView *_videoView;
    ISWrappedAVPlayer *_videoPlayer;
    UIProgressView *_progressView;
    UILabel *_statusLabel;
    UISegmentedControl *_variantSegmentedControl;
    UIVisualEffectView *_statusBackgroundView;
}

@property (retain, nonatomic) NSURL *inputVideoURL;
@property (retain, nonatomic) AVPlayerItem *inputPlayerItem;
@property (retain, nonatomic) NSError *inputVideoError;
@property (nonatomic) int videoRequestID;
@property (retain, nonatomic) AVPlayerItem *variantPlayerItem;
@property (retain, nonatomic) NSError *variantVideoError;
@property (readonly, nonatomic) PHAsset *inputAsset;
@property (readonly, nonatomic) NSString *inputVideoDescription;
@property (readonly, nonatomic) NSString *variantVideoDescription;
@property (readonly, nonatomic) NSString *inputVideoButtonsTitle;
@property (readonly, nonatomic) NSString *variantVideoButtonsTitle;
@property (readonly, nonatomic) BOOL useVariantVideoByDefaultInToggle;
@property (readonly, nonatomic) UIAlertAction *extraAlertAction;
@property (readonly, nonatomic) PXSettings *settings;
@property (readonly, nonatomic) NSString *radarTitle;
@property (readonly, nonatomic) NSString *radarClassification;
@property (readonly, nonatomic) NSString *radarComponentID;
@property (readonly, nonatomic) NSString *radarComponentName;
@property (readonly, nonatomic) NSString *radarComponentVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)presentationControllerDidDismiss:(id)a0;
- (long long)modalPresentationStyle;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)_handleActionButton:(id)a0;
- (void)_handleVariantSegmentedControl:(id)a0;
- (void)_exportInputVideo;
- (void)_exportVariantVideo;
- (void)_exportVariantVideoWithCompletionHandler:(id /* block */)a0;
- (void)_fileRadar;
- (void)_handleRefreshButton:(id)a0;
- (void)_handleResultButton:(id)a0;
- (void)_handleSettingsButton:(id)a0;
- (void)_handleSettingsDone:(id)a0;
- (void)_hideProgressAndStatus;
- (void)_prepareInputAndVariantVideos;
- (void)_prepareVariantVideo;
- (void)_reloadInputAndVariantVideos;
- (void)_showAlertWithMessage:(id)a0;
- (void)_showProgressAndStatus;
- (void)_updateDisplayedPlayerItem;
- (void)_updatePlayerItem:(id)a0 error:(id)a1;
- (void)_updateProgress:(float)a0 status:(id)a1;
- (id)initWithInputAsset:(id)a0;
- (void)invalidateInputAndVariantReferences;
- (void)prepareVariantVideoForExportWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (void)prepareVariantVideoWithProgress:(id /* block */)a0 completion:(id /* block */)a1;

@end
