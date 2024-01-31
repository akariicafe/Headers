@class NSArray, MKMapItem;

@interface MUPhotoSliderTileProvider : NSObject {
    MKMapItem *_mapItem;
}

@property (readonly, nonatomic) BOOL showFullScreen;
@property (readonly, nonatomic) long long displayType;
@property (readonly, nonatomic) NSArray *photos;
@property (readonly, nonatomic) BOOL showPhotoAttributionAtEndOfSlider;
@property (readonly, nonatomic) BOOL showMorePhotoPunchoutAtEndOfSlider;
@property (readonly, nonatomic) BOOL showARPCallToActionAttributionAtEndOfSlider;
@property (readonly, nonatomic) BOOL shouldRouteToPhotoThumbnailGallery;

- (id)initWithMapItem:(id)a0;
- (void)_setup;
- (void).cxx_destruct;
- (unsigned long long)numberOfPhotos;
- (id)_albumOverlayForPhoto:(id)a0;
- (BOOL)_canShowARPCallToAction;
- (id)_flatListOverlayForPhoto:(id)a0;
- (id)_photoAlbumForPhoto:(id)a0;
- (void)_setupForFlatPhotoList;
- (void)_setupForPhotoAlbums;
- (id)albumIdForPhoto:(id)a0;
- (id)overlayForPhoto:(id)a0;
- (id)photoItemAtIndex:(unsigned long long)a0;
- (id)yourPhotosTileOverlay;

@end
