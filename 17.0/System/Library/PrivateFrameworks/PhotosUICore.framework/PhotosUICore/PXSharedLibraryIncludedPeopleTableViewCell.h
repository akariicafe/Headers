@class PXSharedLibraryIncludedPeopleViewController, PXSharedLibraryIncludedPeopleDataSourceManager;

@interface PXSharedLibraryIncludedPeopleTableViewCell : UITableViewCell {
    PXSharedLibraryIncludedPeopleViewController *_includedPeopleViewController;
}

@property (readonly, nonatomic) PXSharedLibraryIncludedPeopleDataSourceManager *dataSourceManager;

+ (double)heightForWidth:(double)a0 numberOfItems:(unsigned long long)a1;

- (id)initWithDataSourceManager:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
