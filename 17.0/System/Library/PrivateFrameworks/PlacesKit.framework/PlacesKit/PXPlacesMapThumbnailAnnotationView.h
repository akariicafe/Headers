@class PKExtendedTraitCollection, NSString, UIImageView, PXPlacesImageCache, UILabel;
@protocol PXPlacesMapThumbnailCurationDelegate;

@interface PXPlacesMapThumbnailAnnotationView : MKAnnotationView <PXPlacesMapAnnotationViewFadable> {
    long long _geotaggablesCount;
}

@property (retain, nonatomic) PKExtendedTraitCollection *extendedTraitCollection;
@property (retain, nonatomic) id extendedTraitObserver;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIImageView *countLabelBackgroundImageView;
@property (retain, nonatomic) PXPlacesImageCache *imageCache;
@property (nonatomic) BOOL imageIsPlaceholder;
@property (readonly, nonatomic) long long countLabelStyle;
@property (copy, nonatomic) id /* block */ displayCompletion;
@property (weak, nonatomic) id<PXPlacesMapThumbnailCurationDelegate> thumbnailCurationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_thumbnailCreationOperationQueue;
+ (id)_thumbnailFetchOperationQueue;
+ (id)_thumbnailSelectionQueue;

- (void)setAnnotation:(id)a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)_reloadData:(BOOL)a0;
- (id)renderToImage;
- (void)_hideCountLabel;
- (void)_updatePlaceholderImageIfNeeded;
- (void)_showCountLabel;
- (id)_countLabelBackgroundColor;
- (void)_fetchImageForGeotaggable:(id)a0 renderer:(id)a1 networkAccessAllowed:(BOOL)a2;
- (void)_fetchImageWithNetworkAccessAllowed:(BOOL)a0;
- (void)_processGeotaggable:(id)a0 withImage:(struct CGImage { } *)a1 popoverImageType:(long long)a2 imageOptions:(unsigned long long)a3 shouldCache:(BOOL)a4 expectedGeotaggable:(id)a5;
- (void)_processPostImage;
- (void)_reloadCount:(long long)a0;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1 extendedTraitCollection:(id)a2 imageCache:(id)a3 countLabelStyle:(long long)a4;
- (id)preferredGeotaggableWithFallbackGeotaggable:(id)a0;
- (id)primaryGeotaggable;
- (id)userCacheKey;

@end
