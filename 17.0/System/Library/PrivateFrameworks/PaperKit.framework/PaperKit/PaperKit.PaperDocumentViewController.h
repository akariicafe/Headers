@interface PaperKit.PaperDocumentViewController : UIViewController <PKToolPickerObserver> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ paperDocumentView;
    void /* unknown type, empty encoding */ paperDocumentThumbnailView;
    void /* unknown type, empty encoding */ thumbnailBackgroundView;
    void /* unknown type, empty encoding */ thumbnailViewLeadingToSuperviewLeadingConstraint;
    void /* unknown type, empty encoding */ thumbnailViewWidthConstraint;
    void /* unknown type, empty encoding */ documentViewLeadingToThumbnailViewTrailingConstraint;
    void /* unknown type, empty encoding */ screenEdgePanGestureRecognizer;
    void /* unknown type, empty encoding */ isThumbnailViewCollapsed;
    void /* unknown type, empty encoding */ editingMode;
    void /* unknown type, empty encoding */ pageOverlayViewProvider;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ toolPicker;
    void /* unknown type, empty encoding */ paperDocumentTemp;
    void /* unknown type, empty encoding */ passwordViewController;
    void /* unknown type, empty encoding */ assetPasswordToRemove;
    void /* unknown type, empty encoding */ shouldShowFormFillingUIAutomatically;
    void /* unknown type, empty encoding */ defaultBannerWasDisplayed;
    void /* unknown type, empty encoding */ bannerViewConfiguration;
    void /* unknown type, empty encoding */ bannerView;
    void /* unknown type, empty encoding */ plusButton;
    void /* unknown type, empty encoding */ ignorePasswordRequest;
    void /* unknown type, empty encoding */ lastPasswordRequestDate;
    void /* unknown type, empty encoding */ lastPasswordRequestSucceeded;
    void /* unknown type, empty encoding */ passThroughSubject;
    void /* unknown type, empty encoding */ livePassThroughSubject;
    void /* unknown type, empty encoding */ liveStreamMessenger;
    void /* unknown type, empty encoding */ participantDetailsDataSource;
    void /* unknown type, empty encoding */ showParticipantCursors;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pageLabelView;
    void /* unknown type, empty encoding */ pageLabelViewTopToSuperviewTopConstraint;
    void /* unknown type, empty encoding */ pageLabelViewTopToBannerBottomConstraint;
    void /* unknown type, empty encoding */ pageLabelViewLeadingToThumbnailViewTrailingConstraint;
    void /* unknown type, empty encoding */ pageLabelViewLeadingToPaperDocumentLeadingConstraint;
}

@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (void)updateViewConstraints;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (BOOL)resignFirstResponder;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)becomeFirstResponder;
- (id)initWithCoder:(id)a0;
- (void)pageDidChange:(id)a0;
- (void)toolPickerIsRulerActiveDidChange:(id)a0;
- (void)toolPickerSelectedToolDidChange:(id)a0;
- (void)pageWillScroll:(id)a0;
- (void)didScreenEdgePan;
- (void)pageLabelViewTapped:(id)a0;

@end
