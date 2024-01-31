@class NSArray, NSString, NSDictionary, NSObject;
@protocol FlexSongProtocol;

@interface FMSong : NSObject

@property (class, readonly, nonatomic) NSArray *availableTagIDs;

@property (readonly) NSObject<FlexSongProtocol> *backend;
@property (readonly, nonatomic) long long metadataVersion;
@property (readonly, nonatomic) NSString *uid;
@property (readonly, nonatomic) long long sampleRate;
@property (readonly, nonatomic) NSString *audioEncoderPresetName;
@property (readonly, nonatomic) NSDictionary *weightedKeywords;
@property (readonly, nonatomic) NSString *songFormat;
@property (readonly, nonatomic) BOOL canPlay;
@property (readonly, nonatomic) BOOL recalled;

+ (BOOL)hasValidTagIDs:(id)a0;
+ (id)loadSongBundleAtPath:(id)a0;
+ (id)loadSongsAndArtworkInFolderAtPath:(id)a0;
+ (id)localizedNameForTagWithID:(id)a0;
+ (long long)versionFromArtworkFilename:(id)a0;

- (id)keywords;
- (id)artistName;
- (BOOL)hidden;
- (BOOL)isLoaded;
- (id)tagIDs;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBackend:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumDuration;
- (void)updateAssets:(id)a0;
- (id)_impl;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })naturalDuration;
- (void)_loadIfNeeded;
- (id)assetWithID:(id)a0;
- (id)idealDurations;
- (id)renditionForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withOptions:(id)a1;
- (id)songName;
- (id)uid_photos_only;
- (BOOL)_loadFlexSong;
- (void)_notifySongAssetsChanged;
- (void)cancelDownloadOfAllAssetsWithIDs:(id)a0;
- (id)customOptions;
- (id)existingAssetWithID:(id)a0;
- (id)initWithUID:(id)a0 assets:(id)a1 metadata:(id)a2;
- (id)renditionForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withOptions:(id)a1 testingContext:(id)a2;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0 withOptions:(id)a1;
- (void)updateAsset:(id)a0 downloadProgress:(double)a1 error:(id)a2;
- (void)updateBackend:(id)a0;

@end
