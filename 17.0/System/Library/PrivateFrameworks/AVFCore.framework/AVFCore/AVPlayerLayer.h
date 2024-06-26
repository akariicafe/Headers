@class AVPlayerLayerInternal, NSString, NSDictionary, AVPlayer;

@interface AVPlayerLayer : CALayer <AVKeyPathDependencyHost, AVWeakObservable> {
    AVPlayerLayerInternal *_playerLayer;
}

@property (retain, nonatomic) AVPlayer *player;
@property (copy) NSString *videoGravity;
@property (readonly, nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } videoRect;
@property (copy, nonatomic) NSDictionary *pixelBufferAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeClosedCaptionLayer;
+ (id)keyPathsForValuesAffectingVideoRect;
+ (id)playerLayerWithPlayer:(id)a0;
+ (void)_swapSublayersBetweenPlayerLayer:(id)a0 andPlayerLayer:(id)a1;

- (void)setContentsScale:(double)a0;
- (id)init;
- (void)dealloc;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (void)insertSublayer:(id)a0 atIndex:(unsigned int)a1;
- (void)addCallbackToCancelDuringDeallocation:(id)a0;
- (void)declareKeyPathDependenciesWithRegistry:(id)a0;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void)setToneMapToStandardDynamicRange:(BOOL)a0;
- (BOOL)isOverscanSubtitleSupportEnabled;
- (void)removeFromSuperlayer;
- (void)addSublayer:(id)a0;
- (void)layoutSublayers;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeAllAnimations;
- (BOOL)isForScrubbingOnly;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)insertSublayer:(id)a0 above:(id)a1;
- (BOOL)isPIPModeEnabled;
- (void)insertSublayer:(id)a0 below:(id)a1;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })legibleContentInsets;
- (id)initWithLayer:(id)a0;
- (void)setOverscanSubtitleSupportEnabled:(BOOL)a0;
- (void)setForScrubbingOnly:(BOOL)a0;
- (void)setLegibleContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_addPositionAnimationToLayer:(id)a0 usingAnimation:(id)a1 forKey:(id)a2;
- (void)setPIPModeEnabled:(BOOL)a0;
- (void)replaceSublayer:(id)a0 with:(id)a1;
- (void)setSublayers:(id)a0;
- (void)_addBoundsAnimationToLayer:(id)a0 usingAnimation:(id)a1 forKey:(id)a2;
- (void)removeAnimationForKey:(id)a0;
- (long long)_activeMode;
- (id)_maskLayer;
- (id)_videoLayer;
- (BOOL)_preventsChangesToSublayerHierarchy;
- (BOOL)_currentWindowSceneIsForeground;
- (void)_windowSceneWillEnterForeground;
- (id)playerPublisher;
- (void)_configurePlayerWhenEnteringPIP;
- (void)_leaveSecondScreenModeForLayer:(id)a0;
- (void)_windowSceneDidEnterBackground:(id)a0;
- (void)_addAnimationsForClosedCaptionLayer:(id)a0 gravity:(id)a1 forKey:(id)a2;
- (void)_addAnimationsForMaskLayer:(id)a0 forKey:(id)a1;
- (void)_addAnimationsForPIPPlaceholderLayer:(id)a0 forKey:(id)a1;
- (void)_addAnimationsForVideoLayer:(id)a0 size:(struct CGSize { double x0; double x1; })a1 gravity:(id)a2 forKey:(id)a3;
- (void)_addSublayerTransformAnimationToLayer:(id)a0 fromTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a1 usingAnimation:(id)a2 gravity:(id)a3 presentationSize:(struct CGSize { double x0; double x1; })a4 forKey:(id)a5;
- (void)_applyCurrentItemPresentationSizeChangeAndForceUpdate:(BOOL)a0;
- (void)_associateWithLayer:(id)a0 forMode:(long long)a1;
- (id)_associatedRemoteModeLayer;
- (id)_closedCaptionLayer;
- (void)_configurePlayerWhenLeavingPIP;
- (BOOL)_currentWindowSceneIsForegroundDefault;
- (void)_disassociateWithLayerForMode:(long long)a0;
- (struct CGSize { double x0; double x1; })_displaySize;
- (void)_enterPIPModeRedirectingVideoToLayer:(id)a0;
- (void)_enterSecondScreenModeRedirectingVideoToLayer:(id)a0;
- (void)_forBoundsAnimations:(id)a0 applyBlock:(id /* block */)a1;
- (void)_forceLayout;
- (void)_forceWindowSceneEvent:(BOOL)a0;
- (void)_getMaskLayer:(id *)a0 videoLayer:(id *)a1 subtitleLayer:(id *)a2 closedCaptionLayer:(id *)a3 interstitialLayer:(id *)a4;
- (void)_handleIsDisplayingClosedCaptionsDidChange:(BOOL)a0 player:(id)a1;
- (void)_handleNonForcedSubtitleDisplayDidChange:(BOOL)a0 player:(id)a1;
- (void)_handlePlayerCurrentItemDidChangeForPlayer:(id)a0;
- (id)_interstitialLayer;
- (BOOL)_isConnectedToSecondScreen;
- (BOOL)_isPartOfForegroundScene;
- (void)_leavePIPModeForLayer:(id)a0;
- (void)_mergeClientLayersIntoMaskLayer:(id)a0;
- (void)_notifyPlayerOfDisplaySize;
- (void)_notifyPlayerOfLayerForegroundStateChange;
- (float)_percentCoverageRelativeToRootLayer;
- (struct CGSize { double x0; double x1; })_playerCurrentItemPresentationSize;
- (void)_restoreClientLayers:(id)a0 intoMaskLayer:(id)a1;
- (void)_setIsConnectedToSecondScreen:(BOOL)a0;
- (void)_setIsPartOfForegroundScene:(BOOL)a0;
- (void)_setPlayer:(id)a0 forPIP:(BOOL)a1;
- (void)_setPreventsChangesToSublayerHierarchy:(BOOL)a0;
- (void)_setShowInterstitialInstead:(BOOL)a0;
- (void)_setShowInterstitialInstead:(BOOL)a0 afterDelay:(double)a1;
- (void)_setSublayersForPIP:(id)a0;
- (void)_setSublayersPreventChangesToSublayerHierarchy:(BOOL)a0;
- (void)_setWillManageSublayersAsSwappedLayers:(BOOL)a0;
- (BOOL)_showInterstitialInstead;
- (void)_startObservingPlayer:(id)a0;
- (void)_stashClientLayers;
- (void)_stopObservingPlayer:(id)a0;
- (id)_sublayersForPIP;
- (id)_subtitleLayer;
- (void)_unstashClientLayers;
- (void)_updateIsPartOfForegroundScene;
- (void)_updateReadyForDisplayForPlayerCurrentItem;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_videoRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_willManageSublayersAsSwappedLayers;
- (void)_windowSceneDidEnterBackground;
- (void)_windowSceneWillEnterForeground:(id)a0;
- (struct __CVBuffer { } *)copyDisplayedPixelBuffer;
- (void)enterPIPModeRedirectingVideoToLayer:(id)a0;
- (void)hasEnqueuedVideoFrameChanged:(id)a0;
- (BOOL)isLanczosFilterDownscalingEnabled;
- (BOOL)isLegibleDisplayEnabled;
- (long long)lanczosFilterDownscaleFactor;
- (void)leavePIPMode;
- (id)placeholderContentLayerDuringPIPMode;
- (void)setLanczosFilterDownscaleFactor:(long long)a0;
- (void)setLanczosFilterDownscalingEnabled:(BOOL)a0;
- (void)setLegibleDisplayEnabled:(BOOL)a0;
- (void)setPlaceholderContentLayerDuringPIPMode:(id)a0;
- (void)startRedirectingVideoToLayer:(id)a0 forMode:(long long)a1;
- (void)stopRedirectingVideoToLayer:(id)a0;
- (id)videoPerformanceMetrics;

@end
