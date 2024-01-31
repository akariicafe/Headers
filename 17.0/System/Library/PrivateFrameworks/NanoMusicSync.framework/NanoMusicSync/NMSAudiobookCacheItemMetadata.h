@interface NMSAudiobookCacheItemMetadata : NSObject

@property (nonatomic) double cachedStartTime;
@property (nonatomic) double cachedDuration;

+ (id)metaDataForMediaItem:(id)a0;

- (id)_baseDirectoryForMediaItem:(id)a0;
- (BOOL)_loadForMediaItem:(id)a0;

@end
