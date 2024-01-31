@class NSString, UISearchBar;

@interface SFSearchBarContainerCell : UICollectionViewCell

@property (class, readonly, nonatomic) NSString *dataSourceSectionIdentifier;
@property (class, readonly, nonatomic) NSString *dataSourceItemIdentifier;

@property (retain, nonatomic) UISearchBar *searchBar;

- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)layoutSubviews;

@end
