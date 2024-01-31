@class NSString, MPMediaItemCollection;

@interface VUIMPMediaCollection : VUIMediaCollection <VUIMPMediaEntityImageLoadParamsCreating> {
    NSString *_coverArtImageIdentifier;
}

@property (retain, nonatomic) MPMediaItemCollection *mediaItemCollection;

- (id)assetController;
- (id)resolution;
- (void).cxx_destruct;
- (id)isLocal;
- (id)contentRating;
- (id)HLSAudioCapability;
- (id)HLSResolution;
- (id)audioCapability;
- (id)HLSColorCapability;
- (id)colorCapability;
- (id)_valueForPropertyDescriptor:(id)a0;
- (id)coverArtImageIdentifier;
- (id)imageLoadParamsWithImageType:(unsigned long long)a0;
- (id)initWithMediaLibrary:(id)a0 identifier:(id)a1 requestedProperties:(id)a2 kind:(id)a3;
- (id)initWithMediaLibrary:(id)a0 mediaItemCollection:(id)a1 identifier:(id)a2 requestedProperties:(id)a3 kind:(id)a4;
- (id)playedState;
- (id)showIdentifier;

@end
