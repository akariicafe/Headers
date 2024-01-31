@class PXStoryModel, NSIndexSet, NSString, NSNumber;
@protocol PXStoryLayoutSpec, PXStoryThumbnailActionPerformer;

@interface PXStoryThumbnailChromeLayout : PXGAbsoluteCompositeLayout <PXGViewSource, PXChangeObserver> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    unsigned int _actionMenuButtonSpriteIndex;
    unsigned int _favoriteButtonSpriteIndex;
    unsigned int _playButtonSpriteIndex;
    unsigned int _detailsViewButtonSpriteIndex;
    unsigned short _contentVersion;
}

@property (readonly, nonatomic) id<PXStoryLayoutSpec> spec;
@property (readonly, nonatomic) id<PXStoryThumbnailActionPerformer> actionPerformer;
@property (nonatomic) double scaleFromTopRightCorner;
@property (nonatomic) BOOL isFavorite;
@property (readonly, nonatomic) NSIndexSet *axSpriteIndexes;
@property (retain, nonatomic) NSNumber *alphaOverride;
@property (readonly, nonatomic) PXStoryModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateTransform;
- (void)alphaDidChange;
- (id)initWithModel:(id)a0;
- (id)init;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)update;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_invalidateContent;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)a0 inDirection:(unsigned long long)a1;
- (void)getDetailedPresentedPlacement:(id)a0 forItemReference:(id)a1;
- (void)_updateContent;
- (void).cxx_destruct;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)referenceSizeDidChange;
- (void)setDetailedPlacementOverride:(id)a0 forItemReference:(id)a1;
- (void)_updateContentAlpha;
- (unsigned long long)axFocusabilityForSpriteAtIndex:(unsigned int)a0;
- (id)_baseConfigurationForButtonWithSystemImageName:(id)a0;
- (id)_buttonConfigurationForSpriteIndex:(unsigned int)a0;
- (void)_handleDetailsViewButton:(id)a0;
- (void)_handleFavoriteButton:(id)a0;
- (void)_handlePlayButton:(id)a0;
- (void)_invalidateContentAlpha;
- (void)_invalidateContentVersion;
- (void)_invalidateIsFavorite;
- (void)_invalidateTransform;
- (void)_updateIsFavorite;

@end
