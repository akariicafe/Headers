@class NSString, NSURL;

@interface FlexMLSong : FlexSongBackend

@property (readonly, nonatomic) NSString *rootPath;
@property (readonly, nonatomic) NSString *metadataPath;
@property (copy, nonatomic) NSString *audioFileExtension;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } cachedNaturalDuration;
@property (readonly, nonatomic) NSURL *audioFileURL;

+ (id)loadSongAtPath:(id)a0;

- (BOOL)canPlay;
- (id)initWithFileAtPath:(id)a0;
- (BOOL)isLoaded;
- (void).cxx_destruct;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumDuration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })naturalDuration;
- (id)idealDurations;
- (id)_summaryManager;
- (void)_setupInitialAssets:(id)a0;
- (id)renditionForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withOptions:(id)a1 testingContext:(id)a2;
- (id)timedMetadataItemsWithIdentifier:(id)a0 forRendition:(id)a1;
- (BOOL)verifyRendition:(id)a0 forDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 failureReason:(id *)a2;

@end
