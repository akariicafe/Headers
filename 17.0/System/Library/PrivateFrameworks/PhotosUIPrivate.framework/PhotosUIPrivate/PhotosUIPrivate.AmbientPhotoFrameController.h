@interface PhotosUIPrivate.AmbientPhotoFrameController : NSObject <PXTapToRadarDiagnosticProvider> {
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ keyAsset;
    void /* unknown type, empty encoding */ skipToNextAssetBecauseOfWake;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ isActive;
    void /* unknown type, empty encoding */ posterConfiguration;
    void /* unknown type, empty encoding */ posterDescriptor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentView;
    void /* unknown type, empty encoding */ contentUnavailableView;
    void /* unknown type, empty encoding */ snapshotView;
    void /* unknown type, empty encoding */ storyView;
    void /* unknown type, empty encoding */ storyViewLoadingState;
    void /* unknown type, empty encoding */ nonAnimatingPlaybackTimer;
    void /* unknown type, empty encoding */ notAnimatingReason;
    void /* unknown type, empty encoding */ shouldAnimatePlayback;
    void /* unknown type, empty encoding */ overlayView;
    void /* unknown type, empty encoding */ overlayHidden;
    void /* unknown type, empty encoding */ titleAlignment;
    void /* unknown type, empty encoding */ compactMetadataOverlayView;
    void /* unknown type, empty encoding */ extendedMetadataOverlayView;
    void /* unknown type, empty encoding */ nightMode;
    void /* unknown type, empty encoding */ bufferingSpinner;
    void /* unknown type, empty encoding */ tapToRadarButton;
    void /* unknown type, empty encoding */ tapToRadarButtonTitleLeadingConstraint;
    void /* unknown type, empty encoding */ storyViewModelObservation;
    void /* unknown type, empty encoding */ storyModelObservation;
    void /* unknown type, empty encoding */ storyMainModel;
}

- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)thermalStateDidChangeWithNotification:(id)a0;

@end
