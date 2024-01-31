@interface PRSMutableDataStoreArchiveConfiguration : PRSDataStoreArchiveConfiguration

@property (nonatomic) BOOL stripScreenshots;
@property (nonatomic) BOOL stripDescriptors;
@property (nonatomic) BOOL stripContentsOfConfigurations;
@property (nonatomic) BOOL reapNonLatestEntries;

@end
