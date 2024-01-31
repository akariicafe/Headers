@class NSString, NSArray, PXStoryConfiguration, PXStoryAutoEditMomentsProvider, PXStoryAutoEditClipComposabilityProvider, NSObject, NSMutableArray, PFStoryAutoEditConfiguration;
@protocol OS_dispatch_queue, OS_os_log, PXDisplayAssetCollection, PXStoryMovieHighlightsCollection, PFRandomNumberGenerator, PXStoryChapterCollection, PXDisplayAssetFetchResult;

@interface PXStorySongsAutoEditDecisionListsProducer : NSObject <PXVisualDiagnosticsProvider, PXStoryAutoEditDecisionListsProducer> {
    PFStoryAutoEditConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_log;
    id<PFRandomNumberGenerator> _randomNumberGenerator;
    id<PXDisplayAssetCollection> _assetCollection;
    NSArray *_lastGeneratedAutoEditDecisionLists;
    NSMutableArray *_ttrUnitTestsForFailedDurationConstraints;
}

@property (retain, nonatomic) PXStoryAutoEditMomentsProvider *momentsProvider;
@property (retain, nonatomic) PXStoryAutoEditClipComposabilityProvider *composabilityProvider;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> displayAssets;
@property (readonly, nonatomic) id<PXStoryMovieHighlightsCollection> movieHighlights;
@property (readonly, nonatomic) id<PXStoryChapterCollection> chapterCollection;
@property (readonly, nonatomic) struct { long long kind; struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumDuration; struct { long long value; int timescale; unsigned int flags; long long epoch; } preferredDuration; struct { long long value; int timescale; unsigned int flags; long long epoch; } maximumDuration; } specificDurationInfo; } targetOverallDurationInfo;
@property (readonly, nonatomic) PXStoryConfiguration *storyConfiguration;
@property (readonly, nonatomic) PXStoryAutoEditMomentsProvider *diagnosticsMomentsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { long long x0; long long x1; })audioModeDecisionForAsset:(id)a0 minimumAudioScore:(float)a1 playbackStyle:(long long)a2 movieHighlight:(id)a3;

- (id)debugQuickLookObject;
- (id)init;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void).cxx_destruct;
- (void)_adjustAudioTransitionForClips:(id)a0;
- (void)_addComposabilityGraph:(id)a0;
- (void)_addMomentsGraph:(id)a0;
- (void)_addTimeConstraintGraph:(id)a0;
- (void)_adjustAudioPlaybackForClips:(id)a0;
- (void)_adjustDurationOfClips:(id)a0 forSongPace:(long long)a1;
- (void)_adjustTransitionsInClips:(id)a0 forChapterCollection:(id)a1;
- (void)_audioCutsFromClip:(id)a0 toClip:(id)a1 useJCut:(BOOL *)a2 useLCut:(BOOL *)a3;
- (BOOL)_canOverlapAudioFromClip:(id)a0 withNextClip:(id)a1;
- (BOOL)_canOverlapAudioFromClip:(id)a0 withPreviousClip:(id)a1;
- (void)_composeClips:(id)a0 forSongPace:(long long)a1;
- (unsigned long long)_composeClips:(id)a0 inAssetRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_decisionListForSong:(id)a0 pace:(long long)a1 colorGradeCategory:(id)a2;
- (id)_diagnosticTextForAutoEditHUDAtDisplaySize:(struct CGSize { double x0; double x1; })a0;
- (id)_diagnosticTextForComposabilityHUDAtDisplaySize:(struct CGSize { double x0; double x1; })a0;
- (id)_diagnosticTextForMomentsHUDAtDisplaySize:(struct CGSize { double x0; double x1; })a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; })_durationInfoForClip:(id)a0 durationMultiplier:(double)a1 songPace:(long long)a2 transitionIn:(double *)a3 transitionOut:(double *)a4;
- (id)_indexesOfClips:(id)a0 atChapterBeginningInChapterCollection:(id)a1;
- (id)_movieHighlightForAsset:(id)a0 playbackStyle:(long long)a1;
- (struct { long long x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x1; })_optimizeOverallDurationOfClips:(id)a0 forSong:(id)a1;
- (long long)_playbackStyleForAsset:(id)a0 songPace:(long long)a1;
- (void)_populateClips:(id)a0 forSongPace:(long long)a1 colorGradeCategory:(id)a2;
- (void)_populateModulesInClips:(id)a0;
- (void)_populateMomentRecipesInClips:(id)a0 forSongPace:(long long)a1 colorGradeCategory:(id)a2;
- (void)_populateMotionStylesAndTransitionsInClips:(id)a0 forSongPace:(long long)a1 colorGradeCategory:(id)a2;
- (void)_populateMotionStylesInClips:(id)a0 forSongPace:(long long)a1 colorGradeCategory:(id)a2;
- (void)_populateTransitionsInClips:(id)a0 forSongPace:(long long)a1 colorGradeCategory:(id)a2;
- (float)_volumeGainForAsset:(id)a0 movieHighlight:(id)a1 audioMode:(long long)a2;
- (void)addVisualDiagnosticsToContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)decisionListForSong:(id)a0 pace:(long long)a1 colorGradeCategory:(id)a2;
- (id)diagnosticErrorsByComponentForHUDType:(long long)a0;
- (id)diagnosticTextForHUDType:(long long)a0 displaySize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)handlesDiagnosticTextForHUDType:(long long)a0;
- (id)initWithAssetCollection:(id)a0 displayAssets:(id)a1 movieHighlights:(id)a2 chapterCollection:(id)a3 targetOverallDurationInfo:(struct { long long x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x1; })a4 configuration:(id)a5 storyConfiguration:(id)a6;
- (id)requestAutoEditDecisionListsWithOptions:(unsigned long long)a0 songs:(id)a1 colorGradeCategoriesBySong:(id)a2 resultHandler:(id /* block */)a3;
- (id)requestDefaultAutoEditDecisionListsWithColorGradeCategory:(id)a0 options:(unsigned long long)a1 resultHandler:(id /* block */)a2;

@end
