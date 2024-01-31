@class NSString, NSArray, NSURL, NSNumber;
@protocol PXAudioAsset, PXAudioCueSource, PXDisplayAsset;

@interface PXAppleMusicAsset : NSObject <PXStorySongResource, PXMutableAppleMusicAsset, PXAudioAsset, PXAppleMusicAssetProperties>

@property (readonly, nonatomic) id<PXAudioAsset> px_storyResourceSongAsset;
@property (readonly, nonatomic) NSString *px_storyResourceIdentifier;
@property (readonly, nonatomic) long long px_storyResourceKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSURL *songURL;
@property (copy, nonatomic) NSURL *introPreviewURL;
@property (copy, nonatomic) NSString *contentProvider;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *albumTitle;
@property (copy, nonatomic) NSNumber *energy;
@property (copy, nonatomic) NSNumber *valence;
@property (copy, nonatomic) NSNumber *visualTempo;
@property (copy, nonatomic) NSString *artworkURLFormat;
@property (copy, nonatomic) NSNumber *loudnessMainPeak;
@property (copy, nonatomic) NSNumber *loudnessMainValue;
@property (copy, nonatomic) NSString *colorGradeCategory;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (nonatomic) unsigned long long flags;
@property (copy, nonatomic) NSArray *entryPoints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } exportableDuration;
@property (readonly, nonatomic) Class audioSessionClass;
@property (readonly, nonatomic) long long pace;
@property (readonly, copy, nonatomic) NSString *assetTagsDescription;
@property (readonly, nonatomic) long long catalog;
@property (readonly, nonatomic) id<PXDisplayAsset> artworkDisplayAsset;
@property (readonly, nonatomic) id<PXAudioAsset> previewAudioAsset;
@property (readonly, nonatomic) Class defaultMediaProviderClass;
@property (readonly, nonatomic) id<PXAudioCueSource> cueSource;

- (id)init;
- (id)initWithConfiguration:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)artworkURLForTargetPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)configureCuesWithVideoEventTimestampsInSeconds:(id)a0 videoEventScores:(id)a1;
- (id)initWithMediaItem:(id)a0;
- (BOOL)isAudioEqualToAsset:(id)a0;

@end
