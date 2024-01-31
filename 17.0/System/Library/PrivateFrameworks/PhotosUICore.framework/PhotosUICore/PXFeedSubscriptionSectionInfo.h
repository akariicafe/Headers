@interface PXFeedSubscriptionSectionInfo : PXFeedAssetsSectionInfo

- (long long)sectionType;
- (BOOL)isMine;
- (void)updateFromCloudFeedEntry;

@end
