@class NSCache, UIColor;

@interface PXPlacesPopoverImageFactory : NSObject

@property (class, readonly) PXPlacesPopoverImageFactory *sharedInstance;

@property (retain, nonatomic) NSCache *cachedBackgroundImages;
@property (retain, nonatomic) UIColor *defaultBackgroundColor;

+ (struct CGSize { double x0; double x1; })backgroundImageSizeForType:(long long)a0 usingTraitCollection:(id)a1;

- (id)init;
- (id)imageNamed:(id)a0;
- (void).cxx_destruct;
- (id)backgroundImageNameForType:(long long)a0 usingTraitCollection:(id)a1;
- (id)createAlbumPlaceHolderImageUsingTraitCollection:(id)a0;
- (id)_fetchAndCacheBackgroundImageWithName:(id)a0;
- (id)_placesKitFrameworkBundle;
- (id)_thumbnailShadowForType:(long long)a0 usingTraitCollection:(id)a1;
- (id)annotationPlaceHolderImageUsingTraitCollection:(id)a0;
- (struct CGSize { double x0; double x1; })backgroundImageSizeForType:(long long)a0 usingTraitCollection:(id)a1;
- (id)createPopoverImageForGeotaggable:(id)a0 withImage:(struct CGImage { } *)a1 imageType:(long long)a2 imageOptions:(unsigned long long)a3 usingTraitCollection:(id)a4;
- (struct CGImage { } *)newImage:(struct CGImage { } *)a0 croppedToAspectRatio:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })thumbnailImageSizeForImageType:(long long)a0 usingTraitCollection:(id)a1 includeScale:(BOOL)a2;
- (double)thumbnailTopMarginForImageType:(long long)a0 usingTraitCollection:(id)a1;

@end
