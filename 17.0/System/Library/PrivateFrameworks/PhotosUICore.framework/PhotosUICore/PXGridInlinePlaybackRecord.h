@class NSString, PXMediaProvider;
@protocol PXDisplayAsset;

@interface PXGridInlinePlaybackRecord : NSObject

@property (nonatomic) long long visibilityScore;
@property (nonatomic) double distanceToCenterScore;
@property (nonatomic) double cellSizeScore;
@property (nonatomic) BOOL isInvalid;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } bestVideoTimeRange;
@property (readonly, copy) NSString *diagnosticScoresDescription;
@property (copy) NSString *diagnosticLog;
@property (readonly, nonatomic) id<PXDisplayAsset> displayAsset;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider;
@property (readonly, nonatomic) id geometryReference;
@property (nonatomic) long long desiredPlayState;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) float videoScore;
@property (readonly, nonatomic) float curationScore;
@property (readonly, nonatomic) float videoStickerSuggestionScore;
@property (readonly, nonatomic) float stickerConfidenceScore;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2;
- (void)prepareForInvisible;
- (void)prepareForVisible;

@end
