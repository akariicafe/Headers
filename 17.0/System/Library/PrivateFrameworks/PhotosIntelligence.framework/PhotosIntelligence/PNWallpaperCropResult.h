@class PNWallpaperCrop;

@interface PNWallpaperCropResult : NSObject

@property (readonly, nonatomic) PNWallpaperCrop *portraitCrop;
@property (readonly, nonatomic) PNWallpaperCrop *landscapeCrop;

+ (id)cropScoreSortDescriptorForOrientation:(long long)a0;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)cropForOrientation:(long long)a0;
- (id)initWithAsset:(id)a0 classification:(unsigned long long)a1;

@end
