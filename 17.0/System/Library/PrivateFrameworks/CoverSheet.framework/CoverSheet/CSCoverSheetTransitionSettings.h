@class SBFFluidBehaviorSettings, NSString;

@interface CSCoverSheetTransitionSettings : PTSettings <BSDescriptionProviding>

@property (nonatomic) BOOL blursPanel;
@property (nonatomic) double blurRadius;
@property (nonatomic) double blurStart;
@property (nonatomic) double blurEnd;
@property (nonatomic) double blurEndReducedTransparency;
@property (nonatomic) BOOL fadesContent;
@property (nonatomic) double maxContentAlpha;
@property (nonatomic) double contentFadeStart;
@property (nonatomic) double contentFadeEnd;
@property (nonatomic) BOOL darkensContent;
@property (nonatomic) double darkeningColorWhite;
@property (nonatomic) double darkeningColorAlpha;
@property (nonatomic) double darkeningStart;
@property (nonatomic) double darkeningEnd;
@property (nonatomic) BOOL panelWallpaper;
@property (nonatomic) BOOL trackingWallpaper;
@property (nonatomic) double trackingWallpaperParallaxFactor;
@property (nonatomic) BOOL revealWallpaper;
@property (nonatomic) BOOL orientPanelWallpaper;
@property (nonatomic) BOOL fadePanelWallpaper;
@property (nonatomic) double fadePanelWallpaperStart;
@property (nonatomic) double fadePanelWallpaperEnd;
@property (nonatomic) BOOL scaleWallpaper;
@property (nonatomic) double wallpaperScale;
@property (retain, nonatomic) SBFFluidBehaviorSettings *wallpaperScaleSettings;
@property (nonatomic) BOOL fadesCoverSheetContent;
@property (nonatomic) double fadesCoverSheetContentStart;
@property (nonatomic) double fadesCoverSheetContentEnd;
@property (nonatomic) BOOL alwaysFadesCoverSheetContent;
@property (nonatomic) BOOL blursBehindCoverSheet;
@property (nonatomic) double behindCoverSheetBlurRadius;
@property (nonatomic) double behindCoverSheetBlurStart;
@property (nonatomic) double behindCoverSheetBlurEnd;
@property (nonatomic) long long transitionStyle;
@property (nonatomic) BOOL iconsFlyIn;
@property (nonatomic) BOOL floatingLayerAsWallpaperOverlay;
@property (nonatomic) BOOL usesFixedWallpaperPresentationProgress;
@property (nonatomic) double fixedWallpaperPresentationProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)_isMaglevActive;

@end
