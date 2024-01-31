@class NSString, SKUIArtwork, SKUIEmbeddedMediaView, SKUIMediaComponent;

@interface SKUIMediaPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIEmbeddedMediaViewDelegate> {
    SKUIArtwork *_artwork;
    unsigned long long _artworkRequestID;
    struct CGSize { double width; double height; } _imageSize;
    SKUIEmbeddedMediaView *_mediaView;
}

@property (readonly, nonatomic) SKUIMediaComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)numberOfCells;
- (void)setSectionIndex:(long long)a0;
- (void)_loadImageWithReason:(long long)a0;
- (void)addImpressionsForIndexPath:(id)a0 toSession:(id)a1;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)a0;
- (void)collectionViewDidSelectItemAtIndexPath:(id)a0;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)a0;
- (double)contentInsetAdjustmentForCollectionView:(id)a0;
- (long long)defaultItemPinningStyle;
- (id)initWithPageComponent:(id)a0;
- (void)mediaView:(id)a0 playbackStateDidChange:(long long)a1;
- (void)prefetchResourcesWithReason:(long long)a0;
- (void)willAppearInContext:(id)a0;

@end
