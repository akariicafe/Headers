@class TSDMovieInfo, TSKAVPlayerController, NSString, CALayer;
@protocol TSDAudioHUDController;

@interface TSDAudioRep : TSDMediaRep <TSKAVPlayerControllerDelegate, TSDAudioHUDControllerDelegate> {
    TSKAVPlayerController *mPlayerController;
    CALayer *mPlayPauseButtonLayer;
    CALayer *mAudioImageLayer;
    float mDynamicVolume;
    BOOL mIsChangingDynamicVolume;
}

@property (readonly, nonatomic) TSDMovieInfo *movieInfo;
@property (readonly, nonatomic) TSKAVPlayerController *playerController;
@property (readonly, nonatomic) id<TSDAudioHUDController> audioHUDController;
@property (readonly, nonatomic) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDraggable;
- (void)dealloc;
- (Class)layerClass;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)willBeRemoved;
- (void)willBeginZooming;
- (BOOL)directlyManagesLayerContent;
- (void)processChangedProperty:(int)a0;
- (BOOL)shouldShowKnobs;
- (void)p_updateEndTime;
- (BOOL)shouldAllowReplacementFromPaste;
- (void)becameNotSelected;
- (void)becameSelected;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForStandardKnobs;
- (BOOL)canResetMediaSize;
- (void)didEndZooming;
- (void)drawInContextWithoutEffects:(struct CGContext { } *)a0 withContent:(BOOL)a1 withStroke:(BOOL)a2 withOpacity:(BOOL)a3 forAlphaOnly:(BOOL)a4 drawChildren:(BOOL)a5;
- (void)dynamicVolumeChangeDidBegin;
- (void)dynamicVolumeChangeDidEnd;
- (void)dynamicVolumeUpdateToValue:(float)a0;
- (BOOL)exclusivelyProvidesGuidesWhileAligning;
- (BOOL)hitPlayPauseButtonWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)hitRepChrome:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (BOOL)p_isEditingAnimations;
- (BOOL)p_isPlaying;
- (void)p_setupPlayerControllerIfNecessary;
- (BOOL)p_shouldPlayerControllerExistThroughoutSelection;
- (BOOL)p_shouldShowPlayPauseLayers;
- (void)p_teardownPlayerController;
- (void)p_updateButtonForPlaying:(BOOL)a0 pressed:(BOOL)a1;
- (void)p_updateRepeatMode;
- (void)p_updateStartTime;
- (void)p_updateVolume;
- (void)playbackDidStopForPlayerController:(id)a0;
- (void)playerController:(id)a0 playbackDidFailWithError:(id)a1;
- (BOOL)providesGuidesWhileAligning;
- (BOOL)shouldAllowReplacementFromDrop;
- (BOOL)shouldShowDragHUD;
- (BOOL)shouldShowMediaReplaceUI;
- (BOOL)shouldShowSelectionHighlight;
- (BOOL)shouldShowSizesInRulers;
- (id)textureWithContext:(id)a0;
- (void)updateLayerGeometryFromLayout:(id)a0;
- (void)updatePlayButtonForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)willBeginReadMode;
- (void)willUpdateLayer:(id)a0;

@end
