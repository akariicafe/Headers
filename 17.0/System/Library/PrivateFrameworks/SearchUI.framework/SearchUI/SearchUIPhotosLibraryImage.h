@class PHAsset, SFPhotosLibraryImage, PHFetchResult;

@interface SearchUIPhotosLibraryImage : SearchUIImage

@property (retain) SFPhotosLibraryImage *sfImage;
@property (retain) PHAsset *asset;
@property (retain) PHFetchResult *fetchResult;
@property struct CGSize { double width; double height; } pixelSize;

- (struct CGSize { double x0; double x1; })size;
- (void).cxx_destruct;
- (id)photoIdentifier;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)supportsFastPathShadow;
- (id)fetchAsset;
- (void)rejectPerson:(id)a0;

@end
