@class UIColor, NSString, UIView, NTKEditOptionTransitioningView, NTKColorCircularUtilitarianFaceViewComplicationFactory, NTKFaceViewTapControl, NTKVideoPlayerView;

@interface NTKAnalogVideoFaceView : NTKAnalogFaceView <NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate, NTKVideoPlayerViewFaceDelegate, NTKEditOptionTransitioningViewDelegate> {
    long long _previousDataMode;
    UIColor *_complicationColor;
    UIView *_backgroundContainerView;
    NTKEditOptionTransitioningView *_transitioningView;
}

@property (class, readonly, nonatomic, getter=isRichComplicationsEnabled) BOOL richComplicationsEnabled;

@property (retain, nonatomic) NTKVideoPlayerView *videoPlayerView;
@property (retain, nonatomic) NTKColorCircularUtilitarianFaceViewComplicationFactory *faceViewComplicationFactory;
@property (retain, nonatomic) NTKFaceViewTapControl *faceTapControl;
@property (nonatomic) struct CGSize { double width; double height; } videoDialSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)uiSensitivity;

- (void)setDataMode:(long long)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)videoDidBeginPlayingQueuedVideo;
- (void)_applyBreathingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyDataMode;
- (void)_applyFrozen;
- (void)_applyOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyRubberBandingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applySlow;
- (void)_applyTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2 forCustomEditMode:(long long)a3 slot:(id)a4;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterOrb:(BOOL)a0;
- (void)_cleanupAfterTransitionComplicationSlot:(id)a0 selectedComplication:(id)a1;
- (void)_cleanupAfterTransitionToOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (double)_complicationAlphaForEditMode:(long long)a0;
- (long long)_complicationPickerStyleForSlot:(id)a0;
- (id)_complicationsCompanionForegroundColor;
- (id)_complicationsEditingColor;
- (id)_complicationsForegroundColor;
- (id)_complicationsPlatterColor;
- (id)_complicationsTapColor;
- (void)_configureComplicationView:(id)a0 forSlot:(id)a1;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)_configureTimeView:(id)a0;
- (double)_contentAlphaForEditMode:(long long)a0;
- (struct CGPoint { double x0; double x1; })_contentCenterOffset;
- (void)_curvedComplicationCircleRadius:(double *)a0 centerAngle:(double *)a1 maxAngularWidth:(double *)a2 circleCenter:(struct CGPoint { double x0; double x1; } *)a3 interior:(BOOL *)a4 forSlot:(id)a5;
- (void)_customizeVideoPlayerOnSetup;
- (id)_detachedComplicationDisplays;
- (void)_faceLibraryDismissed;
- (void)_faceViewWasTapped;
- (BOOL)_fadesComplicationSlot:(id)a0 inEditMode:(long long)a1;
- (double)_handAlphaForEditMode:(long long)a0;
- (void)_handleEitherScreenWake;
- (void)_handleOrdinaryScreenWake;
- (void)_handleWristRaiseScreenWake;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_insetsForDialSize:(struct CGSize { double x0; double x1; })a0;
- (double)_keylineCornerRadiusForComplicationSlot:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keylineFrameForComplicationSlot:(id)a0 selected:(BOOL)a1;
- (long long)_keylineStyleForComplicationSlot:(id)a0;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)a0 slot:(id)a1;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (double)_minimumBreathingScaleForComplicationSlot:(id)a0;
- (id)_newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (void)_prepareForEditing;
- (void)_prepareForOrb;
- (void)_setVideoPlayerDataSource:(id)a0;
- (void)_setupTransitioningViewIfNeeded:(BOOL)a0;
- (BOOL)_shouldAnimateComplicationsOnTap;
- (id)_slotForUtilitySlot:(long long)a0;
- (BOOL)_slotSupportsCurvedText:(id)a0;
- (BOOL)_supportsUnadornedSnapshot;
- (id)_tapHighlightImage;
- (void)_tearDownTransitioningView:(BOOL)a0;
- (void)_transformVideoPlayerView:(unsigned long long)a0;
- (void)_unloadSnapshotContentViews;
- (long long)_utilitySlotForSlot:(id)a0;
- (void)customizeFaceViewForListing:(id)a0 changeEvent:(unsigned long long)a1 animated:(BOOL)a2;
- (void)faceViewWasTapped:(id)a0;
- (id)imageForEditOption:(id)a0;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (double)keylineStyleForComplicationSlot:(id)a0;
- (void)screenDidTurnOffAnimated:(BOOL)a0;
- (void)setNormalComplicationDisplayWrapper:(id)a0 forSlot:(id)a1;
- (void)setupVideoPlayerView;
- (BOOL)shouldFadeIncomingView;
- (BOOL)slotUsesCurvedText:(id)a0;
- (void)videoDidFinishPlayingToEnd;

@end
