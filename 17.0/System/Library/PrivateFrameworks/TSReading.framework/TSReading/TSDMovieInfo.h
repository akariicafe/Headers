@class TSPData, NSURL, TSDMediaStyle;

@interface TSDMovieInfo : TSDMediaInfo <TSDMixing> {
    TSPData *mMovieData;
    NSURL *mMovieRemoteURL;
    TSPData *mImportedAuxiliaryMovieData;
    TSPData *mAudioOnlyImageData;
    double mStartTime;
    double mEndTime;
    double mPosterTime;
    struct CGSize { double width; double height; } mNaturalSize;
    unsigned long long mLoopOption;
    float mVolume;
    int mControlStyle;
    BOOL mAllowsAirPlayVideo;
    BOOL mUsesAirPlayVideoWhileAirPlayScreenIsActive;
    NSURL *mURLForMPMPC;
    TSDMediaStyle *mStyle;
    BOOL mAudioOnly;
}

@property (retain, nonatomic) TSPData *movieData;
@property (retain, nonatomic) NSURL *movieRemoteURL;
@property (retain, nonatomic) TSPData *importedAuxiliaryMovieData;
@property (retain, nonatomic) TSPData *audioOnlyImageData;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double posterTime;
@property (retain, nonatomic) TSPData *posterImageData;
@property (nonatomic) unsigned long long loopOption;
@property (nonatomic) float volume;
@property (nonatomic, getter=isAudioOnly) BOOL audioOnly;
@property (nonatomic, getter=isStreaming) BOOL streaming;
@property (nonatomic) BOOL allowsAirPlayVideo;
@property (nonatomic) BOOL usesAirPlayVideoWhileAirPlayScreenIsActive;
@property (retain, nonatomic) NSURL *urlForMPMPC;
@property (nonatomic) int controlStyle;

+ (double)defaultPosterTimeForDuration:(double)a0;
+ (id)presetKinds;

- (void)dealloc;
- (id)mediaFileType;
- (void)setStyle:(id)a0;
- (id)objectForProperty:(int)a0;
- (id)style;
- (Class)layoutClass;
- (void)acceptVisitor:(id)a0;
- (BOOL)containsProperty:(int)a0;
- (id)copyWithContext:(id)a0;
- (float)floatValueForProperty:(int)a0;
- (id)initWithContext:(id)a0 geometry:(id)a1;
- (Class)repClass;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2;
- (void)p_setPropertiesFromLoadedAsset:(id)a0;
- (id)animationFilters;
- (BOOL)canChangeWrapType;
- (id)copyWithContext:(id)a0 stylesheet:(id)a1;
- (double)doubleValueForProperty:(int)a0;
- (Class)editorClass;
- (id)generateEmptyPosterImageForContext:(id)a0;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2 movieData:(id)a3 loadedAsset:(id)a4;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2 movieRemoteURL:(id)a3 loadedAsset:(id)a4;
- (int)intValueForProperty:(int)a0;
- (id)makeAVAsset;
- (id)makeAVAssetWithOptions:(id)a0;
- (id)makePosterImageGeneratorWithAVAsset:(id)a0;
- (id)mediaDisplayName;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (long long)mixingTypeWithObject:(id)a0;
- (id)presetKind;
- (struct CGSize { double x0; double x1; })rawDataSize;
- (Class)styleClass;
- (BOOL)supportsAttachedComments;
- (BOOL)supportsHyperlinks;
- (id)synchronouslyGenerateDefaultPosterImageForContext:(id)a0;

@end
