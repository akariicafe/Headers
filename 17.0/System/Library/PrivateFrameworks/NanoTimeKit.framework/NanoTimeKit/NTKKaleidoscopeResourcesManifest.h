@interface NTKKaleidoscopeResourcesManifest : NTKBasePhotoResourcesManifest

- (unsigned long long)maxCompatibleVersion;
- (unsigned long long)maxNumberOfPhotos;
- (unsigned long long)minCompatibleVersion;
- (BOOL)validateImageListItem:(id)a0 withError:(id *)a1;

@end
