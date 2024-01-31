@class NSArray, PXCMMInvitationsDataSource, PXMediaProvider;

@interface PXCMMInvitationsDataSourceManager : PXSectionedDataSourceManager

@property (class, readonly) NSArray *keyPathsAffectingCurrentDataSourceManager;

@property (readonly, nonatomic) PXCMMInvitationsDataSource *dataSource;
@property (readonly, copy, nonatomic) PXMediaProvider *mediaProvider;
@property (nonatomic) long long filter;

+ (id)currentDataSourceManager;
+ (id)currentDataSourceManagerForPhotoLibrary:(id)a0 momentSharePhotoLibrary:(id)a1;
+ (id)emptyDataSourceManager;

@end
