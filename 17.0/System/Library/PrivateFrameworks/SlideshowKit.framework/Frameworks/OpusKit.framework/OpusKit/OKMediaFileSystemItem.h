@interface OKMediaFileSystemItem : OKMediaItem

+ (id)scheme;
+ (id)urlForMediaObject:(id)a0;

- (id)initWithFileURL:(id)a0;
- (void)setMediaObject:(id)a0;
- (id)mediaObject;
- (id)_primaryURL;
- (id)_secondaryURL;
- (id)avAssetWithCompletionHandler:(id /* block */)a0;
- (id)createMetadataWithCompletionHandler:(id /* block */)a0;
- (id)createThumbnailImageForResolution:(unsigned long long)a0 withMetadata:(id)a1 completionHandler:(id /* block */)a2;
- (id)importMediaToDirectoryURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)parseDate:(id)a0;
- (id)resourceURLWithCompletionHandler:(id /* block */)a0;
- (BOOL)wantsDiskCachedMetadata;
- (BOOL)wantsDiskCachedThumbnailForResolution:(unsigned long long)a0;
- (BOOL)wantsTemporaryDiskCache;

@end
