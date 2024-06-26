@class PUVideoScrubberView, PUExitEditPerformanceEventBuilder, PEResourceLoader, PURedeyeToolController, PUPhotoEditPortraitToolController, UIViewController, NUMediaView, _PPTState, NUComposition, PXAction, NSObject, UIImageView, PUPhotoEditShadowView, PICompositionController, PUEditPluginSession, PEEditActionEventBuilder, PXUIAssetBadgeView, PUPhotoSceneHUD, UIImage, UIMenu, UIView, NSUndoManager, PXLivePhotoViewModulator, PELivePortraitBehaviorController, NSTimer, UIPencilInteraction, PUEnterEditPerformanceEventBuilder, UISwipeGestureRecognizer, PXImageLayerModulator, PLPhotoEditRenderer, PUEditableMediaProvider, PEEditSessionEventBuilder, PUAdjustmentsToolController, PUPhotoEditAggregateSession, PUPhotoEditIrisModel, NSArray, PUPhotoEditToolPickerController, PUPhotoEditButtonCenteredToolbar, PUPhotoEditToolbar, CEKBadgeTextView, PUQuickCropContext, PUPhotoEditSnapshot, PUPhotoEditPerfHUD, PUPhotoEditToolbarButton, PUPhotoEditViewControllerSpec, PLEditSource, NSString, NUBufferRenderClient, PEAutoAdjustmentController, UITapGestureRecognizer, PUEditActionActivity, UIButton, NSURL, NSDictionary, UIBarButtonItem, PUPhotoEditTitledNotchButton, PUFilterToolController, NSMutableSet, UIAlertController, PHContentEditingInput, PEValuesCalculator, PUProgressIndicatorView, NURenderContext, PUCropToolController, PUTouchingGestureRecognizer, PUPhotoEditMediaToolController, PUPhotoEditToolController, PXTimeInterval;
@protocol OS_dispatch_source, NUImageProperties, OS_dispatch_queue, PUEditableAsset, PUPhotoEditViewControllerSessionDelegate, PUPhotoEditViewControllerPresentationDelegate, PEMediaDestination;

@interface PUPhotoEditViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, UIPencilInteractionDelegate, PUPhotoEditToolControllerDelegate, PUVideoEditPluginSessionDataSource, PUImageEditPluginSessionDataSource, PUEditPluginSessionDelegate, PXPhotoLibraryUIChangeObserver, PUOneUpAssetTransitionViewController, PXForcedDismissableViewController, PUPhotoEditIrisModelChangeObserver, PHLivePhotoViewDelegate, PEResourceLoaderDelegate, PEPhotoKitMediaDestinationDelegate, PUViewControllerSpecChangeObserver, NUMediaViewDelegatePrivate, PUPhotoEditToolbarDelegate, PICompositionControllerDelegate, PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource, PUVideoScrubberViewDelegate, PEValuesCalculatorDelegate, UIToolbarDelegate, PXTapToRadarDiagnosticProvider, PEEditActionAnalyticsEventBuilderDelegate, PELivePortraitBehaviorDelegate, PUPhotoEditLayoutSource> {
    NSArray *__allTools;
    PUPhotoEditToolController *_currentEditingTool;
    PUPhotoEditToolController *_previousEditingTool;
    UIViewController *_currentTool;
    BOOL _switchingToolsAnimated;
    BOOL _leavingEdit;
    BOOL _toolControllerWantsScrubber;
    NUMediaView *_mediaView;
    id _videoScrubberTimeObserver;
    BOOL _isImageZooming;
    NUBufferRenderClient *_renderImageClient;
    BOOL _isAnimatingLayoutOrientation;
    BOOL _isAnimatingMediaViewInsets;
    PUTouchingGestureRecognizer *_livePhotoTouchRecognizer;
    BOOL _livePhotoIsPlaying;
    NSArray *_mainToolbarConstraints;
    NSArray *_secondaryToolbarConstraints;
    NSArray *_currentToolViewConstraints;
    NSArray *_placeholderImageViewConstraints;
    NSArray *_transientStatusBadgeConstraints;
    NSArray *_assetTypeBadgeConstraints;
    NSArray *_progressIndicatorViewConstraints;
    NSArray *_progressEventBlockingViewConstraints;
    NSArray *_mediaViewConstraints;
    NSArray *_actionButtonConstraints;
    PUPhotoEditToolbar *_mainToolbar;
    PUPhotoEditButtonCenteredToolbar *_secondaryToolbar;
    NSArray *_coreToolButtons;
    NSArray *_coreToolButtonViews;
    NSDictionary *_toolTagLabelMap;
    NSArray *_notchButtons;
    PUPhotoEditTitledNotchButton *_cancelButton;
    PUPhotoEditTitledNotchButton *_mainActionButton;
    long long _mainButtonAction;
    UIBarButtonItem *_edit1upToggleButton;
    BOOL _toolbarButtonsValid;
    PUPhotoEditToolPickerController *_toolPickerController;
    PUPhotoEditShadowView *_mainToolbarShadow;
    PUPhotoEditShadowView *_secondaryToolbarShadow;
    long long _currentlyHighlightedToolButtonTag;
    NSArray *_secondaryLeadingViews;
    NSArray *_secondaryTrailingViews;
    UIView *_secondaryCenterView;
    NSUndoManager *_undoManager;
    PUPhotoEditToolbarButton *_undoButton;
    PUPhotoEditToolbarButton *_redoButton;
    BOOL _updatingUndoButtons;
    PUPhotoEditToolbarButton *_pluginButton;
    PUPhotoEditToolbarButton *_markupButton;
    PUPhotoEditToolbarButton *_redEyeButton;
    UIButton *_ttrButton;
    BOOL _ttrExceededThreshold;
    PUPhotoEditToolbarButton *_zoomButton;
    PUEditPluginSession *_pluginSession;
    BOOL _pluginWorkImageVersionIsValid;
    long long _pluginWorkImageVersion;
    PUPhotoEditSnapshot *_stashedSnapshot;
    NSURL *_pluginFullSizeImageURL;
    NSString *_pluginFullSizeImageSandboxExtensionToken;
    NSString *_pluginSessionIdentifier;
    BOOL _pluginWorkingOffPenultimate;
    PEAutoAdjustmentController *_autoEnhanceController;
    UIImageView *_placeholderImageView;
    BOOL _placeholderImageViewTransitioningOut;
    CEKBadgeTextView *_transientStatusBadge;
    unsigned long long _transientStatusBadgeRequestID;
    UITapGestureRecognizer *_togglePreviewTapGestureRecognizer;
    unsigned long long _togglePreviewOriginalOffRequestID;
    UISwipeGestureRecognizer *_swipeDownGestureRecognizer;
    PXUIAssetBadgeView *_assetTypeBadge;
    BOOL _shouldShowRawDecodeBadge;
    BOOL _shouldShowProResBadge;
    PUProgressIndicatorView *_progressIndicatorView;
    id _progressIndicatorInteractionDisablingToken;
    int _inProgressSaveRequestID;
    BOOL _inProgressSaveIsDeferredRender;
    BOOL _inProgressSaveIsFromSwipe;
    NSObject<OS_dispatch_source> *_saveProgressTimer;
    UIView *_progressEventBlockingView;
    BOOL _downloadingForRevert;
    BOOL _didLoadTools;
    BOOL _needToReloadTools;
    BOOL _updatingToolbars;
    PUCropToolController *_cropController;
    PUFilterToolController *_filtersController;
    PUAdjustmentsToolController *_adjustmentsController;
    PUPhotoEditMediaToolController *_mediaToolController;
    PUPhotoEditPortraitToolController *_portraitToolController;
    _PPTState *_pptState;
    BOOL _isEmbeddedEdit;
    id<NUImageProperties> _imageProperties;
    struct CGSize { double width; double height; } _previewOriginalSavedImageSize;
    BOOL _shouldShowPortraitTool;
    NSMutableSet *_assetsWaitingForLibraryNotification;
    UIMenu *_askToSaveAsNewClipMenu;
    NSArray *_addedKeyCommands;
    NSDictionary *_toolControllerTagsByKeyCommandNumber;
    BOOL _hasCheckedPortraitVideo;
    BOOL _isAssetPortraitVideo;
    NSObject<OS_dispatch_queue> *_ttrDiagnosticQueue;
    NSObject<OS_dispatch_queue> *_smartCopyPasteQueue;
    PEEditActionEventBuilder *_pasteEditsEventBuilder;
}

@property (retain, nonatomic) PXImageLayerModulator *imageLayerModulator;
@property (retain, nonatomic) PXLivePhotoViewModulator *livePhotoViewModulator;
@property (readonly, nonatomic) PXImageLayerModulator *placeholderImageLayerModulator;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } initialSeekTime;
@property (nonatomic) long long layoutOrientation;
@property (retain, nonatomic) PEValuesCalculator *valuesCalculator;
@property (retain, nonatomic) PLPhotoEditRenderer *mainRenderer;
@property (retain, nonatomic) PURedeyeToolController *redEyeController;
@property (retain, nonatomic, setter=_setAggregateSession:) PUPhotoEditAggregateSession *aggregateSession;
@property (retain, nonatomic) PELivePortraitBehaviorController *livePortraitBehaviorController;
@property (retain, nonatomic) PEResourceLoader *resourceLoader;
@property (nonatomic) long long workImageVersion;
@property (retain, nonatomic) PICompositionController *compositionController;
@property (retain, nonatomic) PXAction *executedSessionAction;
@property (copy, nonatomic) NUComposition *uneditedComposition;
@property (copy, nonatomic) NUComposition *originalComposition;
@property (retain, nonatomic) NSString *adjustmentIdentifierAndVersion;
@property (retain, nonatomic) PUPhotoEditIrisModel *photoEditIrisModel;
@property (readonly, nonatomic) BOOL isVideoOn;
@property (readonly, nonatomic) BOOL isLoopingVideo;
@property (retain, nonatomic) PLEditSource *editSource;
@property (readonly, nonatomic) PUVideoScrubberView *videoScrubberView;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoScrubberSeekTime;
@property (readonly, nonatomic) NURenderContext *videoRenderContext;
@property (retain, nonatomic) PHContentEditingInput *editSourceContentEditingInput;
@property (nonatomic) BOOL hasLoadedRaw;
@property (retain, nonatomic) PLEditSource *originalImageEditSource;
@property (nonatomic) long long originalImageExifOrientation;
@property (nonatomic, getter=isPenultimateAvailable) BOOL penultimateAvailable;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } originalStillImageTime;
@property (nonatomic) BOOL isCachingVideo;
@property (nonatomic, getter=isRunningAutoCalculators) BOOL runningAutoCalculators;
@property (nonatomic) BOOL isTransitioningFromDownloadingToRunningAutoCalculators;
@property (nonatomic, getter=isRevertingToOriginal) BOOL revertingToOriginal;
@property (nonatomic) long long assetChangeDismissalState;
@property (nonatomic) long long saveCompletionDismissalState;
@property (retain, nonatomic) NSTimer *assetChangeTimeoutTimer;
@property (nonatomic) long long previewRenderType;
@property (nonatomic) BOOL shouldBePreviewingOriginal;
@property (weak, nonatomic) UIAlertController *cancelConfirmationAlert;
@property (weak, nonatomic) UIAlertController *revertConfirmationAlert;
@property (weak, nonatomic) UIAlertController *jpegPreviewForRawConfirmationAlert;
@property (weak, nonatomic) UIAlertController *irisRevertConfirmationAlert;
@property (nonatomic) struct CGSize { double width; double height; } lastKnownPreviewImageSize;
@property (nonatomic) BOOL burningInTrim;
@property (readonly, nonatomic) UIMenu *askToSaveAsNewClipMenu;
@property (nonatomic) long long mediaViewEdgeInsetsUpdateDisableCount;
@property (retain, nonatomic) UIPencilInteraction *pencilInteraction;
@property (retain, nonatomic) PUPhotoEditPerfHUD *perfHUD;
@property (retain, nonatomic) struct CGImage { } *gainMapImage;
@property (nonatomic) float gainMapValue;
@property (retain, nonatomic) PUPhotoSceneHUD *sceneHUD;
@property (nonatomic, getter=isFirstSinceBoot) BOOL firstSinceBoot;
@property (nonatomic, getter=isFirstSinceLaunch) BOOL firstSinceLaunch;
@property (retain, nonatomic) PXTimeInterval *enterEditTimeInterval;
@property (retain, nonatomic) PXTimeInterval *resourceCheckingInterval;
@property (retain, nonatomic) PXTimeInterval *resourceDownloadInterval;
@property (retain, nonatomic) PXTimeInterval *resourceLoadingInterval;
@property (retain, nonatomic) PXTimeInterval *autoCalcInterval;
@property (retain, nonatomic) PXTimeInterval *filterInterval;
@property (retain, nonatomic) PXTimeInterval *exitEditTimeInterval;
@property (retain, nonatomic) PXTimeInterval *editSessionTimeInterval;
@property (retain, nonatomic) PUEnterEditPerformanceEventBuilder *enterEditEventBuilder;
@property (retain, nonatomic) PUExitEditPerformanceEventBuilder *exitEditEventBuilder;
@property (retain, nonatomic) PEEditSessionEventBuilder *editSessionEventBuilder;
@property (copy) id /* block */ ppt_afterRenderBlock;
@property (copy) id /* block */ ppt_afterAutoenhanceBlock;
@property (copy) id /* block */ ppt_willBeginPlaybackBlock;
@property (copy) id /* block */ ppt_didEndPlaybackBlock;
@property (copy, nonatomic) id /* block */ ppt_editIsReadyNotificationBlock;
@property (copy, nonatomic) id /* block */ ppt_exitActionCompleteNotificationBlock;
@property (retain, nonatomic) PUEditActionActivity *copyPresetAction;
@property (retain, nonatomic) PUEditActionActivity *pastePresetAction;
@property (retain, nonatomic) PUEditActionActivity *radarAction;
@property (nonatomic) unsigned long long saveBackgroundTaskIdentifier;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) PUPhotoEditViewControllerSpec *photoEditSpec;
@property (readonly, nonatomic) NSObject<PUEditableAsset> *photo;
@property (readonly, nonatomic) PUEditableMediaProvider *mediaProvider;
@property (readonly, nonatomic) id<PEMediaDestination> mediaDestination;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } previewViewFrame;
@property (nonatomic) long long initialToolType;
@property (retain, nonatomic) PUQuickCropContext *quickCropContext;
@property (weak, nonatomic) id<PUPhotoEditViewControllerPresentationDelegate> presentationDelegate;
@property (weak, nonatomic) id<PUPhotoEditViewControllerSessionDelegate> sessionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (void)preheatEditDependenciesIfNeeded;
+ (id)_defaultLivePhotoRenderPipelineFilters;
+ (id)_defaultMediaViewRenderPipelineFilters;

- (void)updateViewConstraints;
- (void)validateCommand:(id)a0;
- (void)viewSafeAreaInsetsDidChange;
- (id)undoManager;
- (void)_updateBackgroundColor;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)_undoManagerWillUndo:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)viewDidLoad;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)_handleDoneButton:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (long long)preferredUserInterfaceStyle;
- (BOOL)prefersStatusBarHidden;
- (void)prepareForPopoverPresentation:(id)a0;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)viewWillDisappear:(BOOL)a0;
- (id)mediaView;
- (void).cxx_destruct;
- (BOOL)prepareForDismissingForced:(BOOL)a0;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)_preferredStatusBarHideAnimationParameters;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (id)imageProperties;
- (long long)positionForBar:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (BOOL)_hasUnsavedChanges;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (void)pencilInteractionDidTap:(id)a0;
- (void)_undoManagerCheckpoint:(id)a0;
- (id)_composition;
- (BOOL)isSpatialMedia;
- (id)adjustmentConstants;
- (id)_createMediaView;
- (void)photoLibraryChangesPausedDidChange;
- (void)compositionController:(id)a0 didAddAdjustment:(id)a1;
- (void)compositionController:(id)a0 didRemoveAdjustment:(id)a1;
- (void)compositionController:(id)a0 didUpdateAdjustment:(id)a1;
- (void)compositionController:(id)a0 didUpdateAdjustments:(id)a1;
- (void)_fileRadar;
- (void)_handleCancelButton:(id)a0;
- (void)_handleDoneAction:(id)a0;
- (void)_updateSubviewsOrdering;
- (void)autoEnhanceAssets:(id)a0;
- (void)copyAdjustments:(id)a0;
- (void)navigateToSegment:(id)a0;
- (void)pasteAdjustments:(id)a0;
- (void)photoEditResourceLoadRequestDidCompleteDownload:(id)a0;
- (void)photoEditResourceLoadRequestResourcesAvailabilityChanged:(id)a0 previousAvailability:(long long)a1 currentAvailability:(long long)a2;
- (void)photoEditResourceLoadRequestWillBeginDownload:(id)a0;
- (double)px_HDRFocus;
- (double)px_imageModulationIntensity;
- (void)resourceLoader:(id)a0 request:(id)a1 didCompleteWithResult:(id)a2;
- (void)resourceLoader:(id)a0 request:(id)a1 downloadProgress:(double)a2;
- (void)resourceLoader:(id)a0 request:(id)a1 mediaLoadDidFailWithError:(id)a2;
- (void)rotateAssetsClockwise:(id)a0;
- (void)rotateAssetsCounterclockwise:(id)a0;
- (void)toggleEditor:(id)a0;
- (void)trimToolPlayerWrapper:(id)a0 requestAssetWithFilters:(id)a1 completion:(id /* block */)a2;
- (void)_installGestureRecognizer:(id)a0 type:(unsigned long long)a1;
- (void)editPluginSession:(id)a0 didEndWithCompletionType:(unsigned long long)a1 forPluginIdentifier:(id)a2;
- (BOOL)isPortraitVideo;
- (BOOL)isStandardVideo;
- (void)ppt_scrollSelectedSliderByDelta;
- (void)toolControllerDidChangeWantsTapToToggleOriginalEnabled:(id)a0 enabled:(BOOL)a1;
- (id)toolControllerPlaceholderImage:(id)a0;
- (void)_addCropToolGainMapWithRequest:(id)a0;
- (void)_didEndAutoCalc;
- (void)_handleTogglePreviewTapGesture:(id)a0;
- (void)_loadPhotoEditResourcesIfNeeded;
- (void)_updateUndoRedoButtonsAnimated:(BOOL)a0;
- (BOOL)_wantsTTRButton;
- (void)configureEnablenessOfControlButton:(id)a0 animated:(BOOL)a1 canVisuallyDisable:(BOOL)a2;
- (void)ppt_cancelEdits;
- (void)toolControllerDidUpdateToolbar:(id)a0;
- (BOOL)_actionButtonsGoInTopToolbar;
- (id)_allTools;
- (BOOL)_canCompositionControllerBeReverted:(id)a0;
- (void)_cancelInProgressSaveRequest;
- (void)_captureSnapshotOfBasePhotoWithCompletionHandler:(id /* block */)a0;
- (void)_chooseInitialEditingTool;
- (void)_clearBadgeConstraints;
- (void)_clearToolbars;
- (void)_commitEditSessionActionWithAsset:(id)a0 initialCompositionController:(id)a1 savedCompositionController:(id)a2 localizedActionName:(id)a3;
- (void)_commitSaveAsCopyWithAsset:(id)a0;
- (id)_constraintsForToolView:(id)a0;
- (void)_createPencilInteractionIfNeeded;
- (void)_createVideoScrubberIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_cropPlaceholderViewFrameForImageSize:(struct CGSize { double x0; double x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_currentToolPreviewInsets;
- (id)_currentViewContentsForDismissTransition;
- (id)_defaultRenderPipelineFiltersForCurrentMode;
- (void)_didEndEnterEdit;
- (void)_didEndExitActionWithSessionKeys:(id)a0;
- (void)_didEndResourceLoading;
- (void)_didModifyAdjustmentWithLocalizedName:(id)a0;
- (void)_didStartAutoCalc;
- (void)_didStartEnterEdit;
- (void)_didStartExitAction;
- (void)_didStartResourceLoading;
- (void)_editPluginSession:(id)a0 checkVideoEnabled:(BOOL)a1 loadVideoComplementURLWithHandler:(id /* block */)a2;
- (void)_handle1upToggleButton:(id)a0;
- (void)_handleAutoEnhanceButton:(id)a0;
- (void)_handleCoarseScrubberValueDecrease:(id)a0;
- (void)_handleCoarseScrubberValueIncrease:(id)a0;
- (void)_handleCoarseSliderValueDecrease:(id)a0;
- (void)_handleCoarseSliderValueIncrease:(id)a0;
- (void)_handleDidLoadAdjustmentsAndBaseImageWithResult:(id)a0;
- (void)_handleDidLoadOriginalWithResult:(id)a0;
- (void)_handleLivePhotoTouchRecognizer:(id)a0;
- (void)_handleMainActionButton:(id)a0;
- (void)_handleMarkupButton:(id)a0;
- (void)_handleMediaViewReady:(id)a0 statistics:(id)a1;
- (void)_handlePluginButton:(id)a0;
- (void)_handleRedoButton:(id)a0;
- (void)_handleResourceLoadChange;
- (void)_handleRevertButton:(id)a0;
- (void)_handleSaveAction:(long long)a0;
- (void)_handleScrubberValueDecrease:(id)a0;
- (void)_handleScrubberValueIncrease:(id)a0;
- (void)_handleSliderValueDecrease:(id)a0;
- (void)_handleSliderValueIncrease:(id)a0;
- (void)_handleSwipeDownGesture:(id)a0;
- (void)_handleTTRButton:(id)a0;
- (void)_handleToolbarToolButton:(id)a0;
- (void)_handleUndoButton:(id)a0;
- (void)_handleZoomButton:(id)a0;
- (BOOL)_hasAdjustedSlowMotion;
- (void)_hideEphemeralViews:(BOOL)a0;
- (void)_hideProgressIndicatorImmediately:(BOOL)a0;
- (BOOL)_isLoopingVideo:(BOOL)a0;
- (BOOL)_isPreviewingOriginal;
- (BOOL)_isQuickCrop;
- (BOOL)_isReadyToRender;
- (BOOL)_isSaveProgressAvailable;
- (BOOL)_isWaitingForAssetChange;
- (BOOL)_isWaitingForSaveCompletion;
- (BOOL)_isZoomedIn;
- (void)_layoutShadowView:(id)a0 forToolbar:(id)a1;
- (id)_livePhotoGestureRecognizer;
- (void)_loadOriginalImageIfNeeded;
- (void)_loadToolsIfNeeded;
- (void)_loadToolsIfNeeded:(BOOL)a0;
- (BOOL)_markupGetsItsOwnButton;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_mediaViewEdgeInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_mediaViewEdgeInsetsWithGeometry:(id)a0;
- (id)_newOutputForContentEditingInput:(id)a0 compositionController:(id)a1;
- (id)_newToolButtonForTool:(id)a0;
- (void)_notifyDelegateSaveFinishedIfReadyWithAsset:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_oneUpTransitionPlaceholderViewFrame;
- (id)_orientedCIImageFromUIImage:(id)a0;
- (void)_pasteAdjustments;
- (void)_performDiscardAction;
- (void)_performRevertAction;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_placeholderViewFrameForImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)_ppt_conditionallyExecuteAfterRender;
- (void)_presentWarningForIrisRemovesEditsWithCompletion:(id /* block */)a0;
- (void)_reloadToolbarButtonsIfNeeded;
- (void)_removePlaceholderImageViewIfNeeded;
- (id)_renameFileAt:(id)a0 usingPrefix:(id)a1;
- (void)_requestLivePhotoAssetWithFilters:(id)a0 completion:(id /* block */)a1;
- (void)_resetModelAndBaseImagesToWorkImageVersion:(long long)a0;
- (void)_resignCurrentTool;
- (void)_restoreSnapshot:(id)a0 withCompletionHandler:(id /* block */)a1;
- (int)_revertToEmptyCompositionWithCompletionHandler:(id /* block */)a0;
- (int)_saveRevertedComposition:(id)a0 contentEditingInput:(id)a1 withCompletionHandler:(id /* block */)a2;
- (long long)_selectionIndicatorType;
- (void)_sendPasteEditsAnalytics;
- (void)_setOriginalURL:(id)a0 originalEditSource:(id)a1;
- (void)_setPlaybackEnabled:(BOOL)a0;
- (void)_setTransientStatusBadgeVisible:(BOOL)a0;
- (void)_setupImagePluginSession;
- (void)_setupToolsIfNeeded;
- (void)_setupVideoPluginSession;
- (BOOL)_shouldDisplayRedEyeTool;
- (BOOL)_shouldHideToolsForQuickCrop;
- (BOOL)_shouldRequestAsyncAdjustmentForAsset:(id)a0 compositionController:(id)a1;
- (BOOL)_shouldUseCropPlaceholderViewFrame;
- (void)_showCancelAndRevertOptionsAllowResetTool:(BOOL)a0;
- (void)_showJpegPreviewForRawRevertAlert;
- (void)_showProgressIndicator;
- (void)_startMarkupSession;
- (void)_startMonitoringSaveProgressIfNeeded;
- (void)_startShowingOriginalBadge;
- (void)_startTimeoutTimerForAssetChange;
- (void)_startWaitingForAssetChange:(id)a0;
- (void)_startWaitingForSaveRequestID:(int)a0;
- (void)_stopMonitoringSaveProgress;
- (void)_stopWaitingForAssetChangeWithAsset:(id)a0 success:(BOOL)a1;
- (void)_stopWaitingForSaveRequestWithAsset:(id)a0;
- (void)_timeoutWaitingForAssetChange;
- (id)_toolControllerForTag:(long long)a0;
- (void)_transitionToEditingTool:(id)a0 animated:(BOOL)a1;
- (void)_transitionToNewToolViewController:(id)a0 oldToolViewController:(id)a1 animationBlock:(id /* block */)a2 completion:(id /* block */)a3 animated:(BOOL)a4;
- (void)_undoManagerWillRedo:(id)a0;
- (void)_updateCancelButtonAnimated:(BOOL)a0;
- (void)_updateGainMap;
- (void)_updateKeyCommands;
- (void)_updateLayerModulation;
- (void)_updateLayoutOrientationWithViewSize:(struct CGSize { double x0; double x1; })a0 transitionCoordinator:(id)a1;
- (void)_updateLivePhotoPlaybackGestureRecognizer;
- (void)_updateMainActionButtonAnimated:(BOOL)a0;
- (void)_updateMediaViewEdgeInsets;
- (void)_updateMediaViewLayoutWithCoordinator:(id)a0 layoutOrientation:(long long)a1;
- (void)_updateMediaViewPlaybackStyle;
- (void)_updateModelDependentControlsAnimated:(BOOL)a0;
- (void)_updateMutedState;
- (void)_updatePenultimateAvailableWithCompletionHandler:(id /* block */)a0;
- (void)_updatePhotoEditIrisModel;
- (void)_updatePlaceholderImage;
- (void)_updatePluginButtonAnimated:(BOOL)a0;
- (void)_updatePluginSession;
- (void)_updatePluginWorkImageVersion;
- (BOOL)_updatePreviewOriginal:(BOOL)a0 withPresses:(id)a1;
- (void)_updatePreviewingOriginal;
- (void)_updateProgressEventBlockingViewConstraints;
- (void)_updateProgressIndicatorInteractionDisabledWithReason:(long long)a0 showsIndicator:(BOOL)a1 isSavingWithProgress:(BOOL)a2;
- (void)_updateRenderedPreviewForceRender:(BOOL)a0;
- (void)_updateSaveProgress;
- (void)_updateSpecDependentUIPieces;
- (void)_updateSwipeDownGestureRecognizer;
- (void)_updateTogglePreviewGestureRecognizer;
- (void)_updateToolbarBackgroundAnimated:(BOOL)a0;
- (void)_updateToolbarButtonPositions;
- (void)_updateToolbarShadowAlpha;
- (void)_updateToolbarShadowStyling:(id)a0 forToolbar:(id)a1;
- (void)_updateToolbarsAnimated:(BOOL)a0;
- (void)_updateToolbarsContentPadding;
- (void)_updateTraitCollectionAndLayoutReferenceSize;
- (void)_updateTraitCollectionAndLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateTransientStatusBadgeForPreviewingOriginal;
- (void)_updateValuesCalculator;
- (void)_updateVideoScrubber;
- (void)_updateVideoScrubberDisplayAnimate:(BOOL)a0;
- (void)_updateZoomButton;
- (void)_willModifyAdjustment;
- (void)addCropToolGainMapIfNeeded;
- (void)applyAutoEnhance:(id)a0 completion:(id /* block */)a1;
- (void)asShotCompositionController:(id /* block */)a0;
- (void)compositionControllerDidChangeForAdjustments:(id)a0;
- (BOOL)currentAssetNeedsGainMap;
- (id)currentTool;
- (long long)currentToolPickerLayoutDirection;
- (void)didFinishWithAsset:(id)a0 savedChanges:(BOOL)a1;
- (void)didFinishWithChanges:(BOOL)a0;
- (void)dismissAccessibilityHUDForPhotoEditToolbar:(id)a0;
- (void)dismissLivePhotoRevertConfirmationAlert;
- (void)editPluginSession:(id)a0 commitContentEditingOutput:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)editPluginSession:(id)a0 loadAdjustmentDataWithHandler:(id /* block */)a1;
- (void)editPluginSession:(id)a0 loadDisplaySizeImageWithHandler:(id /* block */)a1;
- (void)editPluginSession:(id)a0 loadFullSizeImageWithHandler:(id /* block */)a1;
- (void)editPluginSession:(id)a0 loadPlaceholderImageWithHandler:(id /* block */)a1;
- (void)editPluginSession:(id)a0 loadThumbnailImageWithSize:(struct CGSize { double x0; double x1; })a1 loadHandler:(id /* block */)a2;
- (void)editPluginSession:(id)a0 loadVideoComplementURLWithHandler:(id /* block */)a1;
- (void)editPluginSession:(id)a0 loadVideoURLWithHandler:(id /* block */)a1;
- (void)editPluginSessionAvailabilityDidChange:(id)a0;
- (void)editPluginSessionWillBegin:(id)a0;
- (void)editValuesCalculatorDidFinishComputingGeometricValues:(id)a0;
- (void)editValuesCalculatorHasChangedFlashStatus:(id)a0;
- (void)editValuesCalculatorHasChangedGeometricValues:(id)a0;
- (void)editValuesCalculatorHasChangedImageValues:(id)a0;
- (void)flashTransientBadgeWithText:(id)a0;
- (id)fontForButtons;
- (BOOL)hasLoopingVideoAdjustment;
- (id)initWithPhoto:(id)a0 mediaProvider:(id)a1 mediaDestination:(id)a2;
- (void)initialCinematographyLoadComplete;
- (BOOL)isHighframeRateVideo;
- (BOOL)isImageZooming;
- (BOOL)isLivePhotoVideoEnabled;
- (id)mainLivePhotoView;
- (void)mediaDestination:(id)a0 didCompleteSaveRequest:(id)a1;
- (void)mediaDestination:(id)a0 willBeginSaveRequest:(id)a1;
- (void)mediaView:(id)a0 didZoom:(double)a1;
- (void)mediaViewDidEndLivePhotoPlayback:(id)a0;
- (void)mediaViewDidEndZooming:(id)a0;
- (void)mediaViewDidFinishPreparingVideo:(id)a0;
- (void)mediaViewDidFinishRendering:(id)a0 withStatistics:(id)a1;
- (void)mediaViewDidScroll:(id)a0;
- (void)mediaViewDidStartPreparingVideo:(id)a0;
- (void)mediaViewDidUpdateLivePhoto:(id)a0;
- (void)mediaViewIsReadyForVideoPlayback:(id)a0;
- (void)mediaViewWillBeginLivePhotoPlayback:(id)a0;
- (void)mediaViewWillBeginZooming:(id)a0;
- (id)oneUpAssetTransition:(id)a0 adjustTransitionInfo:(id)a1;
- (void)oneUpAssetTransition:(id)a0 animateTransitionWithContext:(id)a1 duration:(double)a2 completion:(id /* block */)a3;
- (void)oneUpAssetTransition:(id)a0 requestTransitionContextWithCompletion:(id /* block */)a1;
- (void)oneUpAssetTransitionDidEnd:(id)a0;
- (void)oneUpAssetTransitionWillBegin:(id)a0;
- (id)photoEditToolbar:(id)a0 accessibilityHUDItemForButton:(id)a1;
- (void)photoEditToolbar:(id)a0 showAccessibilityHUDForItem:(id)a1;
- (id)pluginActivitiesForEditPluginSession:(id)a0;
- (void)ppt_applyAutoenhance:(id /* block */)a0;
- (void)ppt_cancelEditsWithCompletion:(id /* block */)a0;
- (void)ppt_configureSelectedSliderWithSteps:(long long)a0;
- (void)ppt_executeAfterRender:(id /* block */)a0;
- (void)ppt_navigateToPortraitLightingEffects:(id /* block */)a0;
- (void)ppt_playLivePhotoWithWillBeginPlaybackBlock:(id /* block */)a0 didEndPlaybackBlock:(id /* block */)a1;
- (id)ppt_renderStatisticsDictionaryForTimeInterval:(double)a0;
- (void)ppt_revert;
- (void)ppt_revertWithCompletion:(id /* block */)a0;
- (void)ppt_save;
- (void)ppt_saveWithCompletion:(id /* block */)a0;
- (void)ppt_scrollBWSlider:(id /* block */)a0;
- (void)ppt_scrollColorSlider:(id /* block */)a0;
- (void)ppt_scrollLightSlider:(id /* block */)a0;
- (void)ppt_scrollSliderNamed:(id)a0 value:(id)a1 completion:(id /* block */)a2;
- (void)ppt_selectAdjustmentsController:(id /* block */)a0;
- (void)ppt_selectCropController:(id /* block */)a0;
- (void)ppt_selectFiltersController:(id /* block */)a0;
- (void)ppt_selectLightingEffect:(id)a0 completionBlock:(id /* block */)a1;
- (void)ppt_selectNextLightingEffect:(id /* block */)a0;
- (void)ppt_selectPerspectiveController:(id /* block */)a0;
- (void)ppt_selectPortraitController:(id /* block */)a0;
- (void)ppt_setEditIsReadyNotificationBlock:(id /* block */)a0;
- (BOOL)pu_wantsNavigationBarVisible;
- (BOOL)pu_wantsTabBarVisible;
- (BOOL)pu_wantsToolbarVisible;
- (void)removeCropToolGainMap;
- (void)setLayoutOrientation:(long long)a0 withTransitionCoordinator:(id)a1;
- (void)setLivePhotoVideoEnabled:(BOOL)a0;
- (BOOL)showsLabelsForToolButtons;
- (void)switchToEditingTool:(id)a0 animated:(BOOL)a1;
- (void)toggleLivePhotoActive;
- (void)toolController:(id)a0 didChangePreferredPreviewViewInsetsAnimated:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })toolController:(id)a0 originalPointFromViewPoint:(struct CGPoint { double x0; double x1; })a1 view:(id)a2;
- (void)toolController:(id)a0 showVideoScrubber:(BOOL)a1 animated:(BOOL)a2;
- (void)toolController:(id)a0 updateModelDependentControlsAnimated:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })toolController:(id)a0 viewPointFromOriginalPoint:(struct CGPoint { double x0; double x1; })a1 view:(id)a2;
- (void)toolControllerDidChangeIsPerformingLiveInteraction:(id)a0;
- (void)toolControllerDidChangeWantsDefaultPreviewView:(id)a0;
- (void)toolControllerDidFinish:(id)a0;
- (void)toolControllerDidFinishLoadingThumbnails:(id)a0;
- (id)toolControllerHitEventForwardView:(id)a0;
- (struct { long long x0; float x1; })toolControllerImageModulationOptions:(id)a0;
- (id)toolControllerLivePhoto:(id)a0;
- (id)toolControllerMainContainerView:(id)a0;
- (id)toolControllerMainRenderer:(id)a0;
- (id)toolControllerOriginalCompositionController:(id)a0;
- (struct CGSize { double x0; double x1; })toolControllerOriginalImageSize:(id)a0;
- (struct CGSize { double x0; double x1; })toolControllerOriginalOrientedImageSize:(id)a0;
- (id)toolControllerPreviewView:(id)a0;
- (void)toolControllerRequestLivePhoto:(id)a0 filters:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)toolControllerSourceAssetType:(id)a0;
- (id)toolControllerUneditedCompositionController:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })unadjustedStillImageTime;
- (void)updateAnalyticsEventBuilderActionType:(id)a0 forAssets:(id)a1;
- (void)updateMainButtonForSaveAsNewClipMenu;
- (void)updateProgressIndicatorAnimated:(BOOL)a0;
- (void)videoScrubberDidUpdate;
- (void)videoScrubberViewDidScrubTo:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)videoScrubberViewInteractionDone;
- (void)viewControllerSpec:(id)a0 didChange:(id)a1;

@end
