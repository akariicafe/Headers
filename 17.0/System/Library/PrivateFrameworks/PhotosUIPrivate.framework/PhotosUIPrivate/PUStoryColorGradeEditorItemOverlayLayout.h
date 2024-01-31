@class NSIndexSet;

@interface PUStoryColorGradeEditorItemOverlayLayout : PXGLayout <PXGStringSource, PXGNamedImageSource, PXGSolidColorSource> {
    void /* unknown type, empty encoding */ colorGradeKind;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ backgroundSpriteIndex;
    void /* unknown type, empty encoding */ captionSpriteIndex;
    void /* unknown type, empty encoding */ captionBackgroundSpriteIndex;
    void /* unknown type, empty encoding */ selectionBadgeSpriteIndex;
    void /* unknown type, empty encoding */ accessibleSpriteIndexes;
    void /* unknown type, empty encoding */ cachedCaptionSpriteFrame;
    void /* unknown type, empty encoding */ updateFlags;
    void /* unknown type, empty encoding */ captionSpriteVersion;
    void /* unknown type, empty encoding */ captionBackgroundSpriteVersion;
    void /* unknown type, empty encoding */ captionHeight;
}

@property (nonatomic, readonly) NSIndexSet *axSpriteIndexes;
@property (nonatomic, readonly) NSIndexSet *axVisibleSpriteIndexes;
@property (nonatomic, readonly) NSIndexSet *axSelectedSpriteIndexes;

- (id)axContentInfoAtSpriteIndex:(unsigned int)a0;
- (id)init;
- (unsigned int)spriteIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(id *)a2;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)update;
- (void)displayScaleDidChange;
- (id)attributedStringForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)stringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)objectReferenceForSpriteIndex:(unsigned int)a0;
- (id)hitTestResultForSpriteIndex:(unsigned int)a0;
- (void).cxx_destruct;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)imageConfigurationAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)referenceSizeDidChange;
- (id)stringAttributesAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)viewEnvironmentDidChange;

@end
