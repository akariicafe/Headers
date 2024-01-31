@class NSString, NSSet, NSDictionary, NSArray;

@interface FlexSongBackend : NSObject <FlexSongProtocol>

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *audioEncoderPresetName;
@property (copy, nonatomic) NSString *songName;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSSet *tagIDs;
@property (copy, nonatomic) NSSet *keywords;
@property (copy, nonatomic) NSDictionary *weightedKeywords;
@property (copy, nonatomic) NSArray *assets;
@property (copy, nonatomic) NSString *songFormat;
@property (nonatomic) long long sampleRate;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL recalled;
@property (nonatomic) long long metadataVersion;
@property (copy, nonatomic) NSDictionary *customOptions;
@property (readonly, nonatomic) BOOL canPlay;
@property (readonly, nonatomic) BOOL isLoaded;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } naturalDuration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } minimumDuration;

- (void).cxx_destruct;
- (void)updateAssets:(id)a0;
- (id)assetWithID:(id)a0;
- (id)idealDurations;
- (BOOL)_verifyKeyFrames:(id)a0 failureReason:(id *)a1;
- (BOOL)_verifyClips:(id)a0 inRendition:(id)a1 failureReason:(out id *)a2;
- (id)existingAssetWithID:(id)a0;
- (id)initWithUID:(id)a0 songName:(id)a1 artistName:(id)a2 tagIDs:(id)a3 keywords:(id)a4 weightedKeywords:(id)a5 hidden:(BOOL)a6 recalled:(BOOL)a7 audioEncoderPresetName:(id)a8 metadataVersion:(long long)a9 songFormat:(id)a10 sampleRate:(long long)a11 customOptions:(id)a12;
- (id)renditionForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withOptions:(id)a1 testingContext:(id)a2;
- (id)timedMetadataItemsWithIdentifier:(id)a0 forRendition:(id)a1;
- (void)updateSampleRate:(long long)a0;
- (void)updateSongArtist:(id)a0 title:(id)a1 tags:(id)a2 keywords:(id)a3 weightedKeywords:(id)a4 hidden:(BOOL)a5 recalled:(BOOL)a6 metadataVersion:(long long)a7;
- (BOOL)verifyRendition:(id)a0 forDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 failureReason:(id *)a2;

@end
