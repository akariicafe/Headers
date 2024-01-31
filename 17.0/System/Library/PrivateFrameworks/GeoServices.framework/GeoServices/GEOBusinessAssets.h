@class NSArray, GEOPDBusinessAssets;
@protocol GEOMapItemPhoto;

@interface GEOBusinessAssets : NSObject {
    GEOPDBusinessAssets *_businessAssets;
}

@property (readonly, nonatomic) NSArray *coverPhotos;
@property (readonly, nonatomic) NSArray *croppedPhotos;
@property (readonly, nonatomic) id<GEOMapItemPhoto> coverPhoto;
@property (readonly, nonatomic) id<GEOMapItemPhoto> croppedPhoto;

+ (id)businessAssetsWithPlaceData:(id)a0;

- (void).cxx_destruct;
- (id)initWithBusinessAssets:(id)a0;

@end
