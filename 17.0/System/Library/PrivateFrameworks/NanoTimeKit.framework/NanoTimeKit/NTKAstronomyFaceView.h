@class CLKUIColoringLabel, UIPanGestureRecognizer, NUNIAstronomyVistaView, NSDate, NTKDigitialUtilitarianFaceViewComplicationFactory, NUNIAstronomyLocationDot, UITapGestureRecognizer, NUNIAstronomyRotationModel, NSDateFormatter, CLKClockTimerToken, NTKDelayedBlock, UIView, NSString, NTKDigitalTimeLabelStyle, NTKDateComplicationLabel, NSArray, UIImageView;

@interface NTKAstronomyFaceView : NTKDigitalFaceView <NTKTimeView, NUNIAstronomyRotationModelObserver, NUNIAstronomyVistaViewObserver, UIGestureRecognizerDelegate> {
    NTKDigitialUtilitarianFaceViewComplicationFactory *_faceViewComplicationFactory;
    NTKDigitalTimeLabelStyle *_digitalTimeLabelDefaultStyle;
    NTKDigitalTimeLabelStyle *_digitalTimeLabelSmallInUpperRightCornerStyle;
    NUNIAstronomyRotationModel *_rotationModel;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _initialCoordinate;
    void /* unknown type, empty encoding */ _previousTranslation;
    float _recentMovement;
    UIPanGestureRecognizer *_spheroidPanGesture;
    UITapGestureRecognizer *_supplementalModeDoubleTapGesture;
    UITapGestureRecognizer *_interactiveModeTapGesture;
    NSString *_locationManagerToken;
    NTKDateComplicationLabel *_legacyDateLabel;
    UIImageView *_legacyLeftBottomImageView;
    UIImageView *_legacyRightBottomImageView;
    NUNIAstronomyVistaView *_astronomyVistaView;
    CLKUIColoringLabel *_scrubLabel;
    CLKUIColoringLabel *_phaseLabel;
    CLKUIColoringLabel *_overrideDateLabel;
    UIImageView *_spheroidLabels[8];
    NUNIAstronomyLocationDot *_locationDot;
    NSDate *_overrideDate;
    NSDate *_crownDate;
    CLKClockTimerToken *_clockTimerToken;
    NSDateFormatter *_scrubDateFormatter[3];
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _phaseLabelDefaultFrame;
    float _supplementalFontLineHeightPlusDescender;
    NTKDelayedBlock *_wheelDelayedBlock;
    NTKDelayedBlock *_physicalButtonDelayedBlock;
    long long _previousDataMode;
    long long _animatingToViewMode;
    unsigned long long _vista;
    NSArray *_editingAnimations[3];
    UIView *_borrowedCircleView;
    UIView *_borrowedHandsView;
    unsigned char _isAnimatingViewMode : 1;
    unsigned char _isContentLoaded : 1;
    unsigned char _isLocationCurrent : 1;
    unsigned char _isHandlingCrownEvents : 1;
}

@property (nonatomic, getter=isFrozen) BOOL frozen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setViewMode:(long long)a0;
- (BOOL)_wheelChangedWithEvent:(id)a0;
- (void)dealloc;
- (void)setTimeOffset:(double)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)_date;
- (void)_applyViewMode:(long long)a0;
- (void)_handleSupplementalModeGesture:(id)a0;
- (void)_animateTransitionToViewMode:(long long)a0;
- (void)_animateTransitionToViewMode:(long long)a0 completion:(id /* block */)a1;
- (void)_applyDataMode;
- (void)_applyDataModeAnimated:(BOOL)a0;
- (void)_applyFromVista:(unsigned long long)a0 toVista:(unsigned long long)a1 fraction:(double)a2;
- (void)_applyOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_applyTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2 forCustomEditMode:(long long)a3 slot:(id)a4;
- (void)_applyVista:(unsigned long long)a0;
- (void)_asyncUpdateLocale;
- (void)_asyncUpdateTime;
- (void)_becameActiveFace;
- (void)_becameInactiveFace;
- (BOOL)_canEnterInteractiveMode;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterZoom;
- (long long)_complicationPickerStyleForSlot:(id)a0;
- (void)_configureComplicationView:(id)a0 forSlot:(id)a1;
- (void)_configureForEditMode:(long long)a0;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (id)_detachedComplicationDisplays;
- (unsigned long long)_detentTypeForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_digitalTimeLabelStyleFromViewMode:(long long)a0;
- (id)_digitalTimeLabelStyleFromViewMode:(long long)a0 faceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_disableCrown;
- (void)_enableCrownForAstronomyVista:(unsigned long long)a0;
- (BOOL)_fadesComplicationSlot:(id)a0 inEditMode:(long long)a1;
- (void)_handleInteractiveModeGesture:(id)a0;
- (void)_handleSpheroidPanGesture:(id)a0;
- (void)_hideLocationDot;
- (void)_interpolateFromPose:(const struct NTKAstronomyFaceViewAnimationPose { float x0; float x1; float x2; float x3; float x4; float x5; float x6; } *)a0 toPose:(const struct NTKAstronomyFaceViewAnimationPose { float x0; float x1; float x2; float x3; float x4; float x5; float x6; } *)a1 progress:(float)a2;
- (double)_keylineCornerRadiusForComplicationSlot:(id)a0;
- (void)_layoutForegroundContainerView;
- (void)_layoutLegacyViews;
- (void)_layoutPhaseLabel;
- (void)_layoutSpheroidLabel:(int)a0;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)a0 slot:(id)a1;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (double)_minimumBreathingScaleForComplicationSlot:(id)a0;
- (BOOL)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (void)_performWristRaiseAnimation;
- (void)_physicalButtonDelayedBlockFired;
- (void)_prepareForEditing;
- (void)_prepareToZoom;
- (void)_prepareWristRaiseAnimation;
- (void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (void)_setAstronomyFaceViewModeDefault;
- (void)_setAstronomyFaceViewModeInteractive;
- (void)_setAstronomyFaceViewModeNonInteractive;
- (void)_setAstronomyFaceViewModeSupplemental;
- (void)_setIsAnimatingViewMode:(BOOL)a0;
- (void)_setupAstronomyVistaView;
- (BOOL)_shouldHandleHardwareEvents;
- (BOOL)_shouldHideStatusBarForViewMode:(long long)a0;
- (void)_showLocationDotIfNeeded;
- (void)_startClockUpdates;
- (void)_stopClockUpdates;
- (id)_swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2;
- (unsigned long long)_timeLabelOptions;
- (BOOL)_timeLabelUsesLegibility;
- (void)_unloadSnapshotContentViews;
- (void)_updateLocaleAnimated:(BOOL)a0;
- (void)_updateLocation:(id)a0 lastLocation:(id)a1;
- (void)_updateTimeAnimated:(BOOL)a0;
- (void)_wheelDelayedBlockFired;
- (void)astronomyVistaViewContentsAnimationFinished:(id)a0;
- (void)astronomyVistaViewWillDisplay:(id)a0 forTime:(double)a1;
- (id)digitalTimeLabelDefaultStyle;
- (id)digitalTimeLabelSmallInUpperRightCornerStyle;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (double)keylineStyleForComplicationSlot:(id)a0;
- (void)rotationModelStoppedByDecelerating:(id)a0;
- (void)setOverrideDate:(id)a0 duration:(double)a1;

@end
