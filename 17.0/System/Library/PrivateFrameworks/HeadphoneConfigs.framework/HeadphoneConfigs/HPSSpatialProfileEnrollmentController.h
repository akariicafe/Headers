@class UIVisualEffectView, NSMutableData, UILabel, OBHeaderView, NSString, HRTFEnrollmentSession, HPSSpatialProfileEarTutorialView, BluetoothManager, UIActivityIndicatorView, NSTimer, HPSSpatialProfileEarDotsMovieView, NSArray, CEKSubjectIndicatorView, HPSSpatialProfileSoundHapticManager, NSObject, UIView, HPSSpatialProfileEarPillContainerView, UIStackView, HPSSpatialProfileAnalytics, HPSSpatialProfileVideoCaptureSession, UIImageView, OBTrayButton, CIContext, UIScrollView, CIDetector, HPSSpatialProfileUIPearlEnrollView;
@protocol OS_dispatch_queue;

@interface HPSSpatialProfileEnrollmentController : UIViewController <HRTFEnrollmentSessionDelegate, BKUIPearlEnrollViewDelegate, HPSSpatialProfileManagerViewController> {
    UIView *_enrollContentView;
    UIView *_scrollContentView;
    UIScrollView *_scrollView;
    UIView *_scrollInnerContentView;
    UIStackView *_scrollInnerStackView;
    OBHeaderView *_infoView;
    UILabel *_learnMoreView;
    OBTrayButton *_continueButton;
    OBTrayButton *_occlusionContinueButton;
    OBTrayButton *_earDistanceWarnContinueButton;
    UIVisualEffectView *_buttonTrayEffectView;
    UIView *_spacerViewFirst;
    UIView *_spacerViewSecond;
    UIView *_welcomeContentView;
    UIImageView *_welcomeImageView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _visageFrame;
    HPSSpatialProfileSoundHapticManager *_soundHapticManager;
    HPSSpatialProfileUIPearlEnrollView *_enrollView;
    HPSSpatialProfileEarPillContainerView *_earPillContainer;
    UIView *_tutorialContentView;
    HPSSpatialProfileEarTutorialView *_earTutorialView;
    HPSSpatialProfileEarDotsMovieView *_earDotsMovieView;
    CEKSubjectIndicatorView *_earBoundingBoxView;
    NSTimer *_captureViewTimer;
    NSTimer *_postProcessTimer;
    NSTimer *_postProcessSpinnerTimer;
    NSTimer *_tutorialResumeEnrollTimer;
    BOOL _welcomeSpinnerOn;
    BOOL _postProcessSpinnerOn;
    NSTimer *_startEarEnrollWarningCoolDownTimer;
    BOOL _supressEarEnrollWarning;
    int _currentStep;
    int _previousStep;
    unsigned long long _sessionState;
    HPSSpatialProfileVideoCaptureSession *videoCaptureSession;
    HRTFEnrollmentSession *_enrollmentSession;
    NSMutableData *_profileData;
    HPSSpatialProfileAnalytics *_enrollmentAnalytics;
    UIActivityIndicatorView *_spinner;
    float _initialVolume;
    BOOL _volumeChanged;
    BOOL _enrollmentStarted;
    BOOL _enrollmentReady;
    BOOL _enrollmentPaused;
    BOOL _enrollmentCompleted;
    BOOL _enrollViewInitialized;
    double _currentProgress;
    int _faceBoundingBoxStatus;
    NSTimer *_faceInFrameHandlerTimer;
    BOOL _faceDetected;
    BOOL _faceStraightZeroAngleCaptured;
    BOOL _faceCaptured;
    BOOL _faceUpFilled;
    BOOL _faceDownFilled;
    BOOL _faceLeftFilled;
    BOOL _faceRightFilled;
    unsigned char _earCaptureSoundStep;
    BOOL _rightEarDetected;
    BOOL _rightEarCaptured;
    BOOL _rightEarFrontCaptured;
    BOOL _rightEarMidCaptured;
    BOOL _rightEarRearCaptured;
    unsigned char _rightEarCaptureCount;
    unsigned char _rightEarInViewCount;
    int _rightEarStatus;
    BOOL _leftEarDetected;
    BOOL _leftEarCaptured;
    BOOL _leftEarFrontCaptured;
    BOOL _leftEarMidCaptured;
    BOOL _leftEarRearCaptured;
    unsigned char _leftEarCaptureCount;
    unsigned char _leftEarInViewCount;
    BOOL _earBoundingBoxDetected;
    unsigned char _earBoundingBoxDetectTracker;
    int _leftEarStatus;
    int _currentTrackingEar;
    NSObject<OS_dispatch_queue> *_stepSerialQueue;
    NSObject<OS_dispatch_queue> *_visualDetectionQueue;
    BOOL _debugMode;
    BluetoothManager *_btManager;
    BOOL _bluetoothBecameAvailable;
    BOOL _inEarDetectDisabledPopUpShown;
    BOOL _isEarOccluded;
    unsigned char _earOcclusionDetectTracker;
    NSTimer *_occlusionWarnCoolDownTimer;
    BOOL _supressEarOcclusionWarning;
    unsigned char _occlusionSupressTimeOut;
    BOOL _earTooClose;
    unsigned char _earTooCloseDetectTracker;
    NSTimer *_earTooCloseWarnCoolDownTimer;
    BOOL _earTooFar;
    unsigned char _earTooFarDetectTracker;
    BOOL _motionBlurr;
    unsigned char _motionBlurrTracker;
    BOOL _supressEarDistanceWarning;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _currentEarBB;
    NSTimer *_earEnrollmentNudgeTimer;
    double _lastEarCaptureTime;
    BOOL _isLookingAtPhone;
    unsigned char _faceInFrameCount;
    CIContext *_frameContext;
    CIDetector *_frameDetector;
    double _leftEarLastYaw;
    double _rightEarLastYaw;
    double _leftLastReceivedYaw;
    double _rightLastReceivedYaw;
    NSTimer *_enrollGuidanceTimer;
    double _enrollGuidancePitch;
    double _currentYaw;
    double _candidateYaw;
    NSArray *_pendingYaw;
    NSArray *_feedBackBinning;
    NSArray *_feedBackPitch;
}

@property (nonatomic) BOOL pillsFilled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ dismissalHandler;

- (id)init;
- (void)viewDidLoad;
- (int)state;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)continueButtonTapped;
- (void)stopTimers;
- (void)didReachLargeNudgePeakForEnrollView:(id)a0;
- (void)didReachSmallNudgePeakForEnrollView:(id)a0;
- (void)enrollView:(id)a0 didNudgeInDirection:(unsigned long long)a1 nudgeCount:(unsigned long long)a2;
- (void)enrollView:(id)a0 willNudgeInDirection:(unsigned long long)a1 nudgeCount:(unsigned long long)a2;
- (void)retrieveProfile;
- (void)setupAudioVideo;
- (void)startEnrollment;
- (BOOL)isEarMovingFast;
- (void)pauseEnrollment;
- (void)startOcclusionWarnCoolDownTimer;
- (void)alertEarDistanceWarning:(int)a0;
- (void)alertEarEnrollWarning;
- (void)alertOcclusionWarning;
- (id)angleArrayToBinaryString:(id)a0;
- (void)bluetoothDidBecomeAvailable;
- (void)cancelBlur;
- (void)cancelSpatialAudioProfile;
- (void)captureViewTimerDidFire;
- (BOOL)checkAndShowInEarPopup;
- (void)checkVolume;
- (void)cleanUpSpinner;
- (void)clearBoundingBox;
- (void)continueEarDistanceWarning;
- (void)continueOcclusionWarning;
- (void)didReceiveCaptureVideo:(id)a0 colorImage:(id)a1 depthImage:(id)a2 faceObject:(id)a3;
- (void)didReceiveStateUpdateForSession:(id)a0 stateInfo:(id)a1;
- (void)earCentralPartCaptured;
- (void)earLeftPartCaptured;
- (void)earRightPartCaptured;
- (void)fillFacePillsByDirection:(int)a0;
- (void)forceBlur;
- (id)getBudsInEarString;
- (void)hideContinueButton;
- (void)hideEarDistanceWarningContinueButton;
- (void)hideEarPillsDots;
- (void)hideOcclusionContinueButton;
- (BOOL)isEarOccluded;
- (BOOL)isEarTooClose;
- (BOOL)isEarTooFar;
- (BOOL)isPresentingWrongEar;
- (void)moveToStep:(int)a0;
- (void)nudgeEar;
- (void)playEarCaptureSoundWithCompletion:(id /* block */)a0;
- (void)prepareSpinner;
- (void)pulseEarBoundingBox;
- (void)resetVolume;
- (void)restartOcclusionWarnCoolDownTimer;
- (void)resumeEnrollment;
- (void)sendTipKitSignal;
- (void)setupEarBoundingBox;
- (void)setupEarTutorialView;
- (void)setupEnrollController;
- (void)setupEnrollViewUI;
- (void)setupWelcomeContentView;
- (void)showBudsInEarPopUp:(id)a0;
- (void)showContinueButton;
- (void)showEarDistanceWarningContinueButton;
- (void)showEarPillsDots;
- (void)showLandscapeAlert;
- (void)showOcclusionContinueButton;
- (void)startCaptureViewTimer;
- (void)startEarDistanceWarnCoolDownTimer;
- (void)startEarEnrollWarningTimer;
- (void)startEarEnrollmentNudgeTimer;
- (void)startEnrollGuidanceTimer;
- (void)startFaceInFrameHandlerTimer;
- (void)startPostProcessSpinner;
- (void)startPostProcessTimer;
- (void)startTutorialResumeEnrollTimer;
- (void)startWelcomeSpinner;
- (void)stopCaptureViewTimer;
- (void)stopEarDistanceWarnCoolDownTimer;
- (void)stopEarEnrollmentNudgeTimer;
- (void)stopEnrollGuidanceTimer;
- (void)stopEnrollment;
- (void)stopFaceInFrameHandlerTimer;
- (void)stopOcclusionWarnCoolDownTimer;
- (void)stopPostProcessSpinner;
- (void)stopPostProcessTimer;
- (void)stopTutorialResumeEnrollTimer;
- (void)stopWelcomeSpinner;
- (void)syncProfile;
- (void)translateEarBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 previewLayerBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)triggerEarDistanceWarnCoolDownTimer;
- (void)triggerEarEnrollmentNudgeTimer;
- (void)triggerEnrollGuidanceTimer;
- (void)triggerFaceInFrameHandlerTimeout;
- (void)triggerOcclusionWarnCoolDownTimer;
- (void)triggerPostProcessTimeout;
- (void)triggerstartEarEnrollWarningTimer;
- (void)tutorialResumeEnrollTimerDidFire;
- (void)updateBoundingBoxHiddenStatus;
- (void)updateCurrentTrackingEar:(id)a0 rightEarPoseStatus:(id)a1 earBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 earStatus:(int)a3;
- (void)updateEarEnrollText;
- (void)updateFaceTrackingStatus:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)userCancelEnrollment;

@end
