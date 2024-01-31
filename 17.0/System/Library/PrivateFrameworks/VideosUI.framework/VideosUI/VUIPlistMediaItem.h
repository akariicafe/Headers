@class VUIPlistMediaDatabaseItem;

@interface VUIPlistMediaItem : VUIMediaItem <VUIPlistMediaEntityImageLoadParamsCreating>

@property (retain, nonatomic) VUIPlistMediaDatabaseItem *databaseItem;

- (id)seasonNumber;
- (void).cxx_destruct;
- (id)showTitle;
- (id)assetType;
- (id)isLocal;
- (id)seasonTitle;
- (id)_valueForPropertyDescriptor:(id)a0;
- (id)coverArtImageIdentifier;
- (id)imageLoadParamsWithImageType:(unsigned long long)a0;
- (id)initWithMediaLibrary:(id)a0 databaseItem:(id)a1 requestedProperties:(id)a2;
- (id)initWithMediaLibrary:(id)a0 identifier:(id)a1 requestedProperties:(id)a2 kind:(id)a3;
- (id)playedState;
- (id)previewFrameImageIdentifier;
- (id)seasonIdentifier;
- (id)showIdentifier;

@end
