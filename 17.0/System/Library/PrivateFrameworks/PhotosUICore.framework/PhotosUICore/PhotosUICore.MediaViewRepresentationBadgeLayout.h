@class NSIndexSet;

@interface PhotosUICore.MediaViewRepresentationBadgeLayout : PXGLayout <PXGViewSource> {
    void /* unknown type, empty encoding */ contentRect;
    void /* unknown type, empty encoding */ badgeInfo;
    void /* unknown type, empty encoding */ badgeMediaVersion;
    void /* unknown type, empty encoding */ updater;
    void /* unknown type, empty encoding */ viewModel;
}

@property (nonatomic, readonly) NSIndexSet *axSpriteIndexes;

- (id)init;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)update;
- (void).cxx_destruct;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)referenceSizeDidChange;
- (void)updateSprites;

@end
