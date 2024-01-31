@interface PXFeedAlbumCreatedSectionInfo : PXFeedSectionInfo

- (long long)sectionType;
- (BOOL)isMine;
- (long long)typeForItemAtIndex:(long long)a0;
- (void)updateFromCloudFeedEntry;

@end
