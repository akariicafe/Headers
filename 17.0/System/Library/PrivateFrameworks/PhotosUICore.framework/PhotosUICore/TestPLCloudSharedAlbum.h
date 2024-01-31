@interface TestPLCloudSharedAlbum : PLCloudSharedAlbum

- (id)cloudOwnerEmail;
- (id)localizedTitle;
- (id)cloudOwnerFirstName;
- (id)cloudOwnerLastName;
- (BOOL)cloudOwnerIsWhitelisted;
- (id)cloudOwnerDisplayNameIncludingEmail:(BOOL)a0 allowsEmail:(BOOL)a1;
- (id)cloudGUID;

@end
