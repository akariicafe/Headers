@class NSString, MPMediaItem, NSObject;
@protocol VUIMediaEntityAssetController;

@interface VUIMPMediaItem : VUIMediaItem <VUIMPMediaEntityImageLoadParamsCreating> {
    NSString *_coverArtImageIdentifier;
    NSString *_previewFrameImageIdentifier;
}

@property (retain, nonatomic) MPMediaItem *mediaItem;
@property (retain, nonatomic) NSObject<VUIMediaEntityAssetController> *assetController;

- (id)isPlayable;
- (id)resolution;
- (void).cxx_destruct;
- (id)assetType;
- (id)isLocal;
- (id)contentRating;
- (id)credits;
- (id)rentalExpirationDate;
- (id)studio;
- (id)extrasURL;
- (id)HLSAudioCapability;
- (id)HLSResolution;
- (id)audioCapability;
- (id)HLSColorCapability;
- (id)colorCapability;
- (id)showCanonicalID;
- (id)_valueForPropertyDescriptor:(id)a0;
- (id)coverArtImageIdentifier;
- (id)imageLoadParamsWithImageType:(unsigned long long)a0;
- (id)initWithMediaLibrary:(id)a0 identifier:(id)a1 requestedProperties:(id)a2 kind:(id)a3;
- (id)initWithMediaLibrary:(id)a0 mediaItem:(id)a1 requestedProperties:(id)a2;
- (id)mediaPlayerMediaItem;
- (id)playedState;
- (id)previewFrameImageIdentifier;
- (id)seasonCanonicalID;
- (id)seasonIdentifier;
- (id)showIdentifier;

@end
