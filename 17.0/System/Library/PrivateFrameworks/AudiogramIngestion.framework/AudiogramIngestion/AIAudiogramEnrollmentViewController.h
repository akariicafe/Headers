@class NSDate, NSString, NSArray, AIAudiogramIngestionEngine, OBTextWelcomeController, HKHealthStore, HKUnitPreferenceController, AIAudiogramLoadingViewController;
@protocol AIAudiogramConfirmResultsViewControllerDelegate;

@interface AIAudiogramEnrollmentViewController : OBNavigationController <UINavigationControllerDelegate, UIAdaptivePresentationControllerDelegate, VNDocumentCameraViewControllerDelegate, PHPickerViewControllerDelegate, UIDocumentPickerDelegate, AIAudiogramIngestionEngineDelegate>

@property (weak, nonatomic) id<AIAudiogramConfirmResultsViewControllerDelegate> audiogramConfirmationDelegate;
@property (retain, nonatomic) OBTextWelcomeController *validationFailedController;
@property (retain, nonatomic) AIAudiogramLoadingViewController *loadingController;
@property (nonatomic) BOOL isCameraAvailable;
@property (retain, nonatomic) AIAudiogramIngestionEngine *audiogramEngine;
@property (retain, nonatomic) NSArray *audiogramImages;
@property (nonatomic) BOOL analyticsIngestionAttempted;
@property (nonatomic) unsigned long long analyticsImportSource;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKUnitPreferenceController *unitPreferenceController;
@property (retain, nonatomic) NSDate *initialDate;
@property (nonatomic) unsigned long long analyticsClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (long long)modalPresentationStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)presentationControllerShouldDismiss:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void)picker:(id)a0 didFinishPicking:(id)a1;
- (void)_cancelTapped:(id)a0;
- (void)documentCameraViewController:(id)a0 didFailWithError:(id)a1;
- (void)documentCameraViewController:(id)a0 didFinishWithScan:(id)a1;
- (void)documentCameraViewControllerDidCancel:(id)a0;
- (void)_openCamera;
- (id)_imagesFromPDF:(id)a0;
- (void)_cameraAccessisAuthorizedForHealth:(id /* block */)a0;
- (void)_hideAnalyzingAudiogram;
- (void)_importAudiogramImage;
- (void)_importTapped:(id)a0;
- (void)_manuallyImportAudiogram;
- (void)_openCameraTapped:(id)a0;
- (void)_openDocumentsTapped:(id)a0;
- (void)_openPhotosTapped:(id)a0;
- (void)_prepareToImportAudiogramImages:(id)a0;
- (void)_presentCameraAuthorizationStatusDeniedAlert;
- (void)_showAnalyzingAudiogram;
- (void)_showCameraAuthorizationInSetting;
- (void)_showDownloadingAudiogram;
- (void)_showResultsForAudiogram:(id)a0;
- (void)_showValidationFailed;
- (void)_showWelcome;
- (void)audiogramIngestionEngineModelDownloadComplete;
- (void)audiogramIngestionEngineModelDownloadFailed:(id)a0;
- (void)audiogramIngestionEngineModelDownloadProgressed:(float)a0;
- (void)setHealthStore:(id)a0 unitPreferenceController:(id)a1 initialDate:(id)a2;

@end
