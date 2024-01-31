@class NSURL, NSArray;

@interface NTKBasePhotoResourcesManifest : NSObject

@property (readonly, nonatomic) NSURL *resourceDirectoryURL;
@property (readonly, nonatomic) NSArray *imageList;
@property (readonly, nonatomic) unsigned long long version;

+ (id)manifestForResourceDirectory:(id)a0;

- (void).cxx_destruct;
- (id)_initWithResourceDirectoryURL:(id)a0;
- (BOOL)_loadRawManifestAtURL:(id)a0;
- (BOOL)_validateImageListItem:(id)a0 withError:(id *)a1;
- (BOOL)didLoadRawManifest:(id)a0;
- (unsigned long long)maxCompatibleVersion;
- (unsigned long long)maxNumberOfPhotos;
- (unsigned long long)minCompatibleVersion;
- (BOOL)resourceWithName:(id)a0 isValidMediaAssetOfType:(id)a1 withMinFileSize:(unsigned long long)a2 maxFileSize:(unsigned long long)a3;
- (BOOL)resourceWithNameIsValidImage:(id)a0;
- (BOOL)validateImageListItem:(id)a0 withError:(id *)a1;
- (BOOL)validateManifestWithError:(id *)a0;

@end
