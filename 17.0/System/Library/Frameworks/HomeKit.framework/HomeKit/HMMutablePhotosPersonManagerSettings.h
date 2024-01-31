@interface HMMutablePhotosPersonManagerSettings : HMPhotosPersonManagerSettings

@property (getter=isImportingFromPhotoLibraryEnabled) BOOL importingFromPhotoLibraryEnabled;
@property (getter=isSharingFaceClassificationsEnabled) BOOL sharingFaceClassificationsEnabled;

- (void)setEnabled:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSharingFaceClassificationsAllowed:(BOOL)a0;

@end
