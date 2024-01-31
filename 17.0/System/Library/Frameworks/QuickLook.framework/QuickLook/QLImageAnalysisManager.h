@class VKCImageAnalysisInteraction, VKCImageAnalyzer, QLToolbarButton, NSString, UIView, NSLayoutConstraint;
@protocol QLImageAnalysisManagerDelegate;

@interface QLImageAnalysisManager : NSObject <VKCImageAnalysisInteractionDelegate> {
    BOOL _isFullScreen;
    BOOL _isImageAnalysisPopoverPresented;
    QLToolbarButton *_imageAnalysisToolbarButton;
    UIView *_presentingView;
    UIView *_bottomRightButtonsContainer;
    UIView *_analysisButtonContainer;
    UIView *_visualSearchViewContainer;
    NSLayoutConstraint *_bottomRightButtonsContainerRightConstraint;
    NSLayoutConstraint *_bottomRightButtonsContainerBottomConstraint;
}

@property (retain, nonatomic) VKCImageAnalysisInteraction *imageInteraction;
@property (retain, nonatomic) VKCImageAnalyzer *imageAnalyzer;
@property (nonatomic) int imageAnalysisRequestId;
@property (weak, nonatomic) id<QLImageAnalysisManagerDelegate> delegate;
@property (readonly, nonatomic) QLToolbarButton *imageAnalysisToolbarButton;
@property (nonatomic) BOOL shouldHighlightTextAndDDAfterNextAnalysis;
@property (nonatomic) BOOL shouldEnterVisualSearchAfterNextAnalysis;
@property (nonatomic) BOOL shouldUpliftSubjectAfterNextAnalysis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldStartImageAnalysisForPresentationMode:(unsigned long long)a0;

- (BOOL)hasActiveTextSelection;
- (BOOL)imageAnalysisInteraction:(id)a0 shouldBeginAtPoint:(struct CGPoint { double x0; double x1; })a1 forAnalysisType:(unsigned long long)a2;
- (id)presentingViewControllerForImageAnalysisInteraction:(id)a0;
- (void)imageAnalysisInteractionDidDismissVisualSearchController:(id)a0;
- (void)imageAnalysisInteraction:(id)a0 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)dealloc;
- (id)image;
- (BOOL)dataDetectorExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)visualSearchExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)actionInfoItemExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)imageSubjectExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)textExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)cancelAllRequests;
- (void)imageAnalysisInteraction:(id)a0 prepareForCalloutAction:(SEL)a1 competion:(id /* block */)a2;
- (id)infoButtonGlyphName;
- (BOOL)hasResultsForVisualSearch;
- (void)infoButtonTapped;
- (BOOL)isInteractionActive;
- (BOOL)isVisualSearchEnabled;
- (void)stopImageAnalysis;
- (void)updateForFullScreen:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)isTextSelectionEnabled;
- (void)_startImageAnalysisWithRequest:(id)a0;
- (void)_updateInfoButtonWithAnimation:(BOOL)a0;
- (void)activateVisualSearchInteraction;
- (void)shouldHideInteraction:(BOOL)a0 animated:(BOOL)a1;
- (void)_activateInteractionTypes:(unsigned long long)a0;
- (unsigned long long)_defaultInteractionTypes;
- (void)_handleImageAnalysis:(id)a0 error:(id)a1;
- (void)_setupAnalysisButtonsContainerInView:(id)a0;
- (void)_setupImageAnalysis;
- (void)_setupNotificationsObservation;
- (void)_updateAnalysisButtonContainerWithAnimation:(BOOL)a0;
- (void)_updateAnalysisButtonWithAnimation:(BOOL)a0;
- (BOOL)addInteractionIfNeeded;
- (void)adjustImageInteractionForScrollView:(id)a0;
- (void)dataDetectorDetectionControllerDidDismissAction:(id)a0;
- (void)dataDetectorDetectionControllerWillPresentAction:(id)a0;
- (void)enableMarkupMode:(BOOL)a0;
- (BOOL)hasAnalysis;
- (void)imageAnalysisPopoverDidDisappear;
- (void)imageAnalysisPopoverWillAppear;
- (id)imageAnalysisQueue;
- (id)initWithDelegate:(id)a0 presentingView:(id)a1;
- (BOOL)isAnalysisOngoing;
- (BOOL)isImageSubjectHighlightingEnabled;
- (void)setupAnalysisButtonsContainer;
- (void)startImageAnalysis;
- (void)updateBottomRightContainerPositionForImageView:(id)a0 view:(id)a1;

@end
