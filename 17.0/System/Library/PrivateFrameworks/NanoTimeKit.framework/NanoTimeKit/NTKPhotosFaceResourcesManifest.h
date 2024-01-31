@class NSString;

@interface NTKPhotosFaceResourcesManifest : NTKBasePhotoResourcesManifest

@property (readonly, nonatomic) NSString *assetCollectionIdentifier;

- (void).cxx_destruct;
- (BOOL)_imageListItemContainsValidImage:(id)a0;
- (BOOL)_imageListItemContainsValidIrisVideo:(id)a0;
- (BOOL)_imageListItemHasValidAnalysisValues:(id)a0;
- (BOOL)_imageListItemHasValidCropValues:(id)a0;
- (BOOL)didLoadRawManifest:(id)a0;
- (unsigned long long)maxCompatibleVersion;
- (unsigned long long)maxNumberOfPhotos;
- (unsigned long long)minCompatibleVersion;
- (BOOL)validateImageListItem:(id)a0 withError:(id *)a1;

@end
