@class NSIndexSet;

@interface _TtC12PhotosUICoreP33_E758434BD084CAD7BAF751273E20B07526EditSCAPReviewDetailLayout : PXGLayout <PXGLayoutContentSource, PXGDisplayAssetSource, PXGStringSource, PXGSolidColorSource> {
    void /* unknown type, empty encoding */ compositionController;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ labelSpriteVersion;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ viewModelObservation;
    void /* unknown type, empty encoding */ asset;
    void /* unknown type, empty encoding */ updater;
    void /* unknown type, empty encoding */ neutrinoStreamController;
}

@property (nonatomic, readonly) NSIndexSet *axSpriteIndexes;

- (id)init;
- (void)updateIfNeeded;
- (void)updateContent;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)a0;
- (void)displayScaleDidChange;
- (id)attributedStringForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)stringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void).cxx_destruct;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 inLayout:(id)a1;
- (void)referenceSizeDidChange;
- (id)stringAttributesAtIndex:(unsigned int)a0 inLayout:(id)a1;

@end
