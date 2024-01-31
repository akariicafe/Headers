@class SBRootFolder, SBFolderIconImageCache, SBHIconImageCache, SBHIconModel, SBHLibraryCategoryMapProvider;
@protocol SBIconViewProviding, SBIconListLayoutProvider;

@interface _SBHLibraryCollectionOfModelThings : NSObject

@property (readonly, weak, nonatomic) id<SBIconViewProviding> iconViewProvider;
@property (readonly, weak, nonatomic) SBHIconModel *iconModel;
@property (readonly, weak, nonatomic) SBRootFolder *rootFolder;
@property (readonly, weak, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (readonly, weak, nonatomic) SBHIconImageCache *iconImageCache;
@property (readonly, weak, nonatomic) SBFolderIconImageCache *folderIconImageCache;
@property (readonly, weak, nonatomic) SBHLibraryCategoryMapProvider *categoryMapProvider;

- (id)initWithIconViewProvider:(id)a0 iconModel:(id)a1 rootFolder:(id)a2 listLayoutProvider:(id)a3 iconImageCache:(id)a4 folderIconImageCache:(id)a5 categoryMapProvider:(id)a6;
- (void).cxx_destruct;
- (BOOL)examineModelValidityWithError:(id *)a0;
- (BOOL)isEqual:(id)a0;

@end
