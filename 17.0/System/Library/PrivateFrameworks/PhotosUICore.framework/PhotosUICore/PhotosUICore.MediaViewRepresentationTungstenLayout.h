@class NSIndexSet;

@interface PhotosUICore.MediaViewRepresentationTungstenLayout : PXGAbsoluteCompositeLayout <PXGDisplayAssetSource, PXGLayoutContentSource> {
    void /* unknown type, empty encoding */ updater;
    void /* unknown type, empty encoding */ representationModel;
    void /* unknown type, empty encoding */ contentAspectRatio;
    void /* unknown type, empty encoding */ assetSpriteIndex;
    void /* unknown type, empty encoding */ pixelBufferContentIndex;
    void /* unknown type, empty encoding */ imageStreamVersion;
    void /* unknown type, empty encoding */ contentObservation;
    void /* unknown type, empty encoding */ badgeLayoutIndex;
    void /* unknown type, empty encoding */ playableLayoutIndex;
}

@property (nonatomic, readonly) NSIndexSet *axSpriteIndexes;

- (void)alphaDidChange;
- (id)init;
- (void)updateContent;
- (void)update;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)a0;
- (id)initWithComposition:(id)a0;
- (void).cxx_destruct;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 inLayout:(id)a1;
- (void)referenceSizeDidChange;

@end
