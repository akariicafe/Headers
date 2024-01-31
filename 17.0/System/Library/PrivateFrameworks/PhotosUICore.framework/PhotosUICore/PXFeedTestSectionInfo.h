@class PLPhotoLibrary;

@interface PXFeedTestSectionInfo : PXFeedSectionInfo {
    PLPhotoLibrary *_photoLibrary;
}

@property (readonly, nonatomic) long long countOfItems;

- (id)photoLibrary;
- (BOOL)isLoaded;
- (id)date;
- (id)initWithPhotoLibrary:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (long long)sectionType;
- (id)albumTitle;
- (id)captionForItemAtIndex:(long long)a0;

@end
