@class UIImageView, NSString, MPArtworkCatalog;

@interface MRUUpNextCellCell : UITableViewCell

@property (retain, nonatomic) UIImageView *artworkView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) MPArtworkCatalog *artworkCatalog;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
